#include <string>
#include <iostream>
#include <cassert>
#include "rule_engine.hpp"

struct Target {
    int age;
    std::string name;
    bool alive;
};

struct Killer {
    int bullet;
    Target target;
    void kill() {
        std::cout << "killing target: " << target.name << std::endl;
        bullet -= 1;
        target.alive =false;
    }
};

struct Police {
    Police():homicide_case(0) {}
    int homicide_case;
};


RTTR_REGISTRATION {
    rttr::registration::class_<Killer>("Killer")
        .property("bullet", &Killer::bullet)
        .property("target", &Killer::target)
        .method("kill", &Killer::kill)
    ;

    rttr::registration::class_<Target>("Target")
        .property("age", &Target::age)
        .property("name", &Target::name)
        .property("alive", &Target::alive)
    ;

    rttr::registration::class_<Police>("Police")
        .property("homicide_case", &Police::homicide_case)
    ;
}


int main() {
    const char* rule = R"(
        rule kill "this is a description" {
            if 
                Assassin.target.age > 18 && Assassin.bullet > 0
            then
                Assassin.kill();
                Police.homicide_case += 11;
                Police.homicide_case -= 3;
                Police.homicide_case /= 3;
        }
    )";

    Killer killer;
    killer.target.age = 19;
    killer.target.name = "chuck norris";
    killer.target.alive = true;
    killer.bullet = 1;

    Police police;
    police.homicide_case = 22;
    rule_engine::Engine e;
    e.load_rules(rule);
    rule_engine::DataContext dctx;
    dctx.add("Assassin", killer);
    dctx.add("Police", police);
    e.execute(&dctx);
    assert(killer.bullet == 0);  
    // std::cout << "bullet " << killer.bullet << " homicide case " << police.homicide_case << std::endl;
    assert(police.homicide_case == 10);
    return 0;
}