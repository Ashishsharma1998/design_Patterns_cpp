#pragma once 

#include "targetInterface.hpp"
#include "adaptee.hpp"

class adapter:public printer{
   legacyPrinter *legacyPrint;
   public:
     adapter(legacyPrinter *legacyPrint){
      this->legacyPrint = legacyPrint;
     }
     void print(){
       legacyPrint->printDocument(); 
     }
};