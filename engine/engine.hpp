#ifndef _RULE_ENGINE_ENGINE_
#define _RULE_ENGINE_ENGINE_

#include <string>
#include <memory>
#include <mutex>
#include <shared_mutex>

#include "antlr/grammar/crule_listener.hpp"
#include "antlr/grammar/generated/cruleLexer.h"
#include "antlr/grammar/generated/cruleParser.h"
#include "ast_processor/crl.hpp"
#include "antlr4-runtime.h"

#include "data_context.hpp"
#include "knowledge_base.hpp"

namespace rule_engine {

class Engine {
public:
    Engine() {}
    
    void load_rules(const std::string& rules) {
        antlr4::ANTLRInputStream inputStream(rules.c_str(), rules.size());
        cruleLexer lexer(&inputStream);
        antlr4::CommonTokenStream tokens(&lexer);
        cruleParser parser(&tokens);
        CruleListener listener;
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, parser.expression());

        std::unique_lock lock(mtx_);
        rules_ = rules;
        auto crl = listener.get_crl();
        kb_.set_crl(crl);
    }
    void execute(DataContext* dctx) {
        std::shared_ptr<Crl> crl;
        {
            std::shared_lock lock(mtx_);
            crl = kb_.get_crl();
        }
        
        for(auto& rule_entry:crl->get_rule_entries()) {
            if(rule_entry.second->evaluate(dctx)) {
                rule_entry.second->execute(dctx);
            }
        }
    }
    // void set_data_ctx(std::shared_ptr<DataContext> d) {
    //     dctx_ = d;
    // }
    // std::shared_ptr<DataContext> get_data_ctx() {
    //     return dctx_;
    // }
private:
    // std::shared_ptr<DataContext> dctx_;
    KnowledgeBase kb_;
    std::string rules_;
    mutable std::shared_mutex mtx_;
};

}

#endif