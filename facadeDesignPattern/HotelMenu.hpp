#pragma once

#include "HotelKeeperInterface.hpp"
#include "VegRestaurant.hpp"
#include "NonVegRestaurant.hpp"
#include "BothRestaurant.hpp"

class HotelMenu:public HotelKeeper{
  public:
    Menu *getVegMenu(){
       VegRestaurant *vg = new VegRestaurant();
       return vg->getMenu();
    }

    Menu *getNonVegMenu(){
       NonVegRestaurant *nvg = new NonVegRestaurant();
       return nvg->getMenu();
    }

    Menu *getBothMenu(){
       BothRestaurant *both = new BothRestaurant();
       return both->getMenu();
    }
};