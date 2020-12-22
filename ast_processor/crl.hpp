#ifndef _RULE_ENGINE_CRL_
#define _RULE_ENGINE_CRL_

#include <string>

#include "node.hpp"

namespace rule_engine {

class Crl: public Node {
private:
    std::unordered_map<std::string, std::shared_ptr<RuleEntry>> rule_enties_;
};

}

#endif