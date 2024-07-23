#ifndef SELECTION_SORT
#define SELECTION_SORT
#include "../sortStrategy.hpp"

class selectionSort:public sortStrategy{
    public:
    void sort(vector<int>&a){
       int n = a.size(); 
       for(int i=0;i<n-1;i++){
          int minInd = i;
          for(int j=i+1;j<n;j++){
              if(a[minInd]>a[j]){
                minInd=j;
              }
          }
          swap(a[i],a[minInd]);
       }
    }
};

#endif