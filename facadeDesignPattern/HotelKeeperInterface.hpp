#pragma once

#include "MenuInterface.hpp"

class HotelKeeper{
  public:
    virtual Menu *getVegMenu()=0;
    virtual Menu *getNonVegMenu()=0;
    virtual Menu *getBothMenu()=0;
};