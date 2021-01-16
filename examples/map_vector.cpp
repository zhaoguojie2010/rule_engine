#include <string>
#include <iostream>
#include <cassert>
#include "rule_engine.hpp"

struct Family {
    std::map<std::string, std::string> members;
    std::unordered_map<std::string, int> ages;
};


RTTR_REGISTRATION {
    rttr::registration::class_<Family>("Family")
        .property("members", &Family::members)
        .property("ages", &Family::ages)
    ;
}


int main() {
    const char* rule = R"(
        rule family "this is a description" {
            if 
                Family.members["mother"] == "judith harper"
            then
                Family.members["step mother"] = "candy";
                Family.members["mother"] = "judith melnick";
        }
    )";

    Family family;
    family.members["uncle"] = "charlie harper";
    family.members["dad"] = "alan harper";
    family.members["grandma"] = "evalyn harper";
    family.members["mother"] = "judith harper";

    family.ages["jake"] = 13;

    rule_engine::Engine e;
    e.load_rules(rule);
    rule_engine::DataContext dctx;
    dctx.add("Family", family);
    e.execute(&dctx);

    assert(family.members["mother"] == "judith melnick");  
    assert(family.members["step mother"] == "candy");

    return 0;
}