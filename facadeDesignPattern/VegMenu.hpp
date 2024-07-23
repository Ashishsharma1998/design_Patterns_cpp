#pragma once

#include "MenuInterface.hpp" 
#include<iostream>

class VegMenu:public Menu{
   public:
     void displayMenu(){
        std::cout<<"VegMenu-->\n";
        std::cout<<"Dal Makni-->120\n"<<"Butter Naan-->12\n";
     }
};