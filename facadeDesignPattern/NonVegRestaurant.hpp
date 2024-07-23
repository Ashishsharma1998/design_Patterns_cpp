#pragma once

#include "HotelInterface.hpp"
#include "MenuInterface.hpp"
#include "NonVegMenu.hpp"

class NonVegRestaurant:public HotelInterface{
  public:
    Menu* getMenu(){
       Menu *nvg = new NonVegMenu();
       return nvg;
    }
};