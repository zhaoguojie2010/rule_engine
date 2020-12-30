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
    dctx.add("Assassin", killer);
    e.execute(&dctx);

    return 0;
}