#pragma once

#include "coffeeInterface.hpp"

class coffeeDecorator:public coffeeInterface{
  protected:
     coffeeInterface *coffee;
  public:
     coffeeDecorator(coffeeInterface *coffee){
         this->coffee=coffee;
     }   
     
     std::string getDescription(){
        return coffee->getDescription();
     }

     int getCost(){
        return coffee->getCost(); 
     }
};