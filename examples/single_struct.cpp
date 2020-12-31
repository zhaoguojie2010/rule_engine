#include "rule_engine.hpp"

struct Target {
    int age;
    std::string gender;
};

struct Killer {
    bool decided_to_kill;
    Target target;
    void kill() {}
};


RTTR_REGISTRATION {
    rttr::registration::class_<Killer>("Killer")
        .property("decided_to_kill", &Killer::decided_to_kill)
        .property("target", &Killer::target)
        .method("kill", rttr::select_non_const(&Killer::kill))
    ;

    rttr::registration::class_<Target>("Killer")
        .property("age", &Target::age)
        .property("gennder", &Target::gender)
    ;
}


int main() {
    const char* rule = R"(
        rule kill "this is a description" {
            if 
                Assassin.target.age > 18 && Assasin.target.gender == "male"
            then
                Assassin.decided_to_kill = true;
                Assassin.kill();
        }
    )";

    Killer killer;
    killer.target.age = 19;
    killer.target.gender = "male";

    rule_engine::Engine e;
    e.load_rules(rule);
    rule_engine::DataContext dctx;
    //dctx.add("Assassin", std::variant<Killer*>(&killer));
    dctx.add("Killer", killer);
    e.execute(&dctx);

    return 0;
}