#pragma once

#include "HotelInterface.hpp"
#include "MenuInterface.hpp"
#include "BothMenu.hpp"

class BothRestaurant:public HotelInterface{
  public:
    Menu* getMenu(){
       Menu *both = new BothMenu();
       return both;
    }
};