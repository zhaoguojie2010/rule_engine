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
                Assassin.target.age > 18 && Assasin.target.gender == female
            then
                Assassin.decided_to_kill = true;
                Assassin.kill();
        }
    )";


    rule_engine::Engine e;
    e.load_rules(rule);
    e.execute();

    return 0;
}