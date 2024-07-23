#pragma once

#include<string>

class coffeeInterface{
  public:
    virtual std::string getDescription()=0;
    virtual int getCost()=0;
};