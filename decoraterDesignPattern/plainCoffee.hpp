#pragma once

#include "coffeeInterface.hpp"

class plainCoffee:public coffeeInterface{
   public:
      std::string getDescription(){
         return "plain coffee";
      }

      int getCost(){
         return 120; 
      }  
};