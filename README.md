# **rule_engine**

rule_engine is a c++ rule engine library

## dependency

1. Antlr4

   to install antlr4, please see [here](https://github.com/antlr/antlr4/blob/master/doc/getting-started.md)

2. rttr

   install [rttr](https://www.rttr.org/doc/master/building_install_page.html)

3. c++17

## getting started

1. Define the structs to be manipulated by rule_engine.

   ```c++
   struct Target {
       int age;
       std::string name;
   };
   
   struct Killer {
       bool has_bullet;
       Target target;
       void kill() {
           std::cout << "killing target: " << target.name << std::endl;
       }
   };
   ```

2. Register the defined structs so that rule_engine can access them.

   ```c++
   RTTR_REGISTRATION {
       rttr::registration::class_<Killer>("Killer")
           .property("has_bullet", &Killer::has_bullet)
           .property("target", &Killer::target)
           .method("kill", &Killer::kill)
       ;
   
       rttr::registration::class_<Target>("Target")
           .property("age", &Target::age)
           .property("name", &Target::name)
       ;
   }
   ```

   

3. in your main() function:

   ```c++
   	 // define your rule
   	 const char* rule = R"(
           rule kill "this is a description" {
               if 
                   Assassin.target.age > 18 && Assassin.has_bullet == true
               then
                   Assassin.kill();
                   Assassin.has_bullet = false;
           }
       )";
   
       Killer killer;
       killer.target.age = 19;
       killer.target.name = "chuck norris";
       killer.has_bullet = true;
   		Police police;
   
       rule_engine::Engine e; // create an engine
       e.load_rules(rule);    // load your rule so that engine can execute it
       rule_engine::DataContext dctx;
   
       // register the object to data context so that rule engine can access
       // and manipulate it.
       dctx.add("Assassin", killer);  
       e.execute(&dctx); 
       assert(!killer.has_bullet);  
   ```

5. for more complicated use case, please see [here](https://github.com/zhaoguojie2010/rule_engine/tree/main/examples)

## advanced 

Then `Engine` itself is stateless, it's safe to call `execute` concurrently. `DataContext` on the other hand not only contains objects to be accessed and manipulated by rules, but also caches intermediate data that accelerates expression evaluation. So it's users' responsibility to guard it when accessed by multiple threads. The best practice is to instantiate one `DataContext` for each thread, which eliminates locks and maximize performance.
