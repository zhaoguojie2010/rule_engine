#ifndef _RULE_ENGINE_CRL_
#define _RULE_ENGINE_CRL_

#include <string>

#include "node.hpp"
#include "rule_entry.hpp"

namespace rule_engine {

class Crl: public Node, public IRuleEntryAcceptor {
public:
    Crl() {}
    std::unordered_map<std::string, std::shared_ptr<RuleEntry>>& get_rule_entries() {
        return rule_enties_;
    }
    virtual void accept_rule_entry(std::shared_ptr<RuleEntry> entry) {
        rule_enties_[entry->get_name()] = entry;
    }
private:
    std::unordered_map<std::string, std::shared_ptr<RuleEntry>> rule_enties_;
};

}

#endif