#pragma once

#include "HotelInterface.hpp"
#include "MenuInterface.hpp"
#include "VegMenu.hpp"

class VegRestaurant:public HotelInterface{
  public:
    Menu* getMenu(){
       Menu *vg = new VegMenu();
       return vg;
    }
};