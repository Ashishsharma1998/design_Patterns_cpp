#ifndef SORT_STRATEGY
#define SORT_STRATEGY
#include<vector>
using namespace std;

class sortStrategy{
   public:
   virtual void sort(vector<int> &a)=0;
};

#endif