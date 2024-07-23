#ifndef SUBJECT
#define SUBJECT
#include "observer.hpp"

class subject
{
   public: 
   virtual void subscribe(observer*)=0;
   virtual void unSubscribe(observer*)=0;
   virtual void notify()=0;   
};


#endif


