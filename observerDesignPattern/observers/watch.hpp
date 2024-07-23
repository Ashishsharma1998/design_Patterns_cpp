#ifndef WATCH
#define WATCH
#include "../observer.hpp"
#include<iostream>
using namespace std;

class watch:public observer{
  private:
  string weather;
  
  public:
  void update(string weather){
   this->weather=weather;
    display();
  }

  void display(){
    cout<<"weather updated on watch "<<weather<<endl;
  }
};

#endif