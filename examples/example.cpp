#include <string>
#include <iostream>
#include <cassert>
#include "rule_engine.hpp"

#include <chrono>

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

struct TheManagement {
    std::string location;
    Killer killer;
};

struct Police {
    Police():homicide_case(0) {}
    int homicide_case;
};


RTTR_REGISTRATION {
    rttr::registration::class_<TheManagement>("TheManagement")
        .property("location", &TheManagement::location)
        .property("killer", &TheManagement::killer)
    ;

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

    auto loadRuleTime = std::chrono::steady_clock::now();
    rule_engine::Engine e;
    e.load_rules(rule);
    rule_engine::DataContext dctx;
    dctx.add("Assassin", killer);
    dctx.add("Police", police);

    auto executeTime = std::chrono::steady_clock::now();
    e.execute(&dctx);
    assert(killer.bullet == 0);  
    // std::cout << "bullet " << killer.bullet << " homicide case " << police.homicide_case << std::endl;
    assert(police.homicide_case == 10);
    assert(!killer.target.alive);

    auto endTime = std::chrono::steady_clock::now();
    auto loadRuleCost = std::chrono::duration_cast<std::chrono::microseconds>(executeTime - loadRuleTime).count();
    auto executeCost = std::chrono::duration_cast<std::chrono::microseconds>(endTime - executeTime).count();
    std::cout << "load cost " << loadRuleCost << " us, execute cost " << executeCost << " us." << std::endl;

    TheManagement management;
    management.location = "hotel cortez";
    management.killer.bullet = 5;
    management.killer.target.age = 14;
    management.killer.target.name = "jesus christ";
    management.killer.target.alive = true;
    rule_engine::DataContext dctx1;
    dctx1.add("TheManagement", management);
    dctx1.add("Police", police);
    const char* rule1 = R"(
        rule kill "this is a description" {
            if 
                TheManagement.killer.bullet > 4
            then
                TheManagement.killer.kill();
        }
    )";
    loadRuleTime = std::chrono::steady_clock::now();
    e.load_rules(rule1);
    executeTime = std::chrono::steady_clock::now();
    e.execute(&dctx1);
    endTime = std::chrono::steady_clock::now();
    loadRuleCost = std::chrono::duration_cast<std::chrono::microseconds>(executeTime - loadRuleTime).count();
    executeCost = std::chrono::duration_cast<std::chrono::microseconds>(endTime - executeTime).count();
    std::cout << "load cost " << loadRuleCost << " us, execute cost " << executeCost << " us." << std::endl;
    
    assert(management.killer.bullet==4);
    assert(!management.killer.target.alive);
    return 0;
}