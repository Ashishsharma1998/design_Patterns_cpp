#pragma once

#include "MenuInterface.hpp" 
#include<iostream>

class BothMenu:public Menu{
   public:
     void displayMenu(){
        std::cout<<"BothVegAndNonVegMenu-->\n";
        std::cout<<"Dal Makni-->120\n"<<"Butter Naan-->12\n"<<"chicken-->140\n";
     }
};