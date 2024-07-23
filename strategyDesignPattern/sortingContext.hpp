#ifndef SORTING_CONTEXT
#define SORTING_CONTEXT
#include "sortStrategy.hpp"

class sortingContext{
private:
   sortStrategy *Strategy;
public:
   sortingContext(sortStrategy *strategy){
    Strategy=strategy;
   }

   void sorting(vector<int> &a){
      Strategy->sort(a);
   }
};



#endif