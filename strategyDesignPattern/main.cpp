#include "sortingContext.hpp"
#include "./SortingStrategies/selectionSortStrategy.hpp"
#include<iostream>
using namespace std;

int main(){
    vector<int> a = {6,4,2,8,2};
    sortingContext *context = new sortingContext(new selectionSort());

    context->sorting(a);
    for(int x:a){
        cout<<x<<" "; 
    }
}