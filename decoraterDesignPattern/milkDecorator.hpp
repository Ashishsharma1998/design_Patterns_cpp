#pragma once

#include "coffeeDecorator.hpp"

class milkDecorator:public coffeeDecorator{
    public:
      milkDecorator(coffeeInterface * coffee):coffeeDecorator(coffee){
      }

      std::string getDescription(){
        return coffee->getDescription() + " with milk";
      }

      int getCost(){
        return coffee->getCost() + 120;
      }
};