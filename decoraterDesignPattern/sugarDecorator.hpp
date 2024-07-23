#pragma once

#include "coffeeDecorator.hpp"

class sugarDecorator:public coffeeDecorator{
    public:
      sugarDecorator(coffeeInterface * coffee):coffeeDecorator(coffee){
      }

      std::string getDescription(){
        return coffee->getDescription() + " with sugar";
      }

      int getCost(){
        return coffee->getCost() + 60;
      }
};