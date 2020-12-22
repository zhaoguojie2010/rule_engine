#ifndef _RULE_ENGINE_ENGINE_
#define _RULE_ENGINE_ENGINE_

#include <string>
#include <memory>

#include "antlr/grammar/crule_listener.hpp"
#include "antlr/grammar/generated/cruleLexer.hpp"
#include "antlr/grammar/generated/cruleParser.hpp"

#include "data_context.hpp"
#include "knowledge_base.hpp"

namespace rule_engine {

class Engine {
public:
    // Engine() {
    //     dctx_ = std::make_shared<DataContext>();
    // }
    Engine(std::shared_ptr<DataContext> d):dctx_(d) {

    }
    void load_rules(const std::string& rules) {
        rules_ = rules;
        antlr4::ANTLRInputStream inputStream(rules);
        cruleLexer lexer(&inputStream);
        antlr4::CommonTokenStream tokens(&lexer);
        cruleParser parser(&tokens);
        CruleListener listener;
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, parser.expression());

        auto crl = listener.Crl();
    }
    void execute() {
        // TODO:
    }
    void set_data_ctx(std::shared_ptr<DataContext> d) {
        dctx_ = d;
    }
    std::shared_ptr<DataContext> get_data_ctx() {
        return dctx_;
    }
private:
    std::shared_ptr<DataContext> dctx_;
    KnowledgeBase kb_;
    std::string rules_;
};

}

#endif