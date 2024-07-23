#pragma once

#include "MenuInterface.hpp" 
#include<iostream>

class NonVegMenu:public Menu{
   public:
     void displayMenu(){
        std::cout<<"NonVegMenu-->\n";
        std::cout<<"chicken-->120\n"<<"Butter Naan-->12\n";
     }
};