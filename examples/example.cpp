#include <string>
#include <iostream>
#include <cassert>
#include "rule_engine.hpp"

struct Target {
    int age;
    std::string gender;
    std::string name;
};

struct Killer {
    bool decided_to_kill;
    Target target;
    void kill() {
        std::cout << "killing target: " << target.name << std::endl;
    }
};

struct Police {
    Police():criminal_count(0) {}
    int criminal_count;
};


RTTR_REGISTRATION {
    rttr::registration::class_<Killer>("Killer")
        .property("decided_to_kill", &Killer::decided_to_kill)
        .property("target", &Killer::target)
        .method("kill", &Killer::kill)
    ;

    rttr::registration::class_<Target>("Target")
        .property("age", &Target::age)
        .property("gender", &Target::gender)
        .property("name", &Target::name)
    ;

    rttr::registration::class_<Police>("Police")
        .property("criminal_count", &Police::criminal_count)
    ;
}


int main() {
    const char* rule = R"(
        rule kill "this is a description" {
            if 
                Assassin.target.gender == "male" && Assassin.target.age > 18
            then
                Assassin.decided_to_kill = true;
                Police.criminal_count = 1;
                Assassin.kill();
                10;
        }
    )";

    Killer killer;
    killer.target.age = 19;
    killer.target.gender = "male";
    killer.target.name = "chuck norris";
    killer.decided_to_kill = false;

    Police police;
    rule_engine::Engine e;
    e.load_rules(rule);
    rule_engine::DataContext dctx;
    dctx.add("Assassin", killer);
    dctx.add("Police", police);
    e.execute(&dctx);
    assert(killer.decided_to_kill);  
    assert(police.criminal_count == 1);
    return 0;
}