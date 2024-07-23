#ifndef PHONE
#define PHONE
#include "../observer.hpp"
#include<iostream>
using namespace std;

class phone:public observer{
  private:
  string weather;
  
  public:
  void update(string weather){
   this->weather=weather;
    display();
  }

  void display(){
    cout<<"weather updated on phone "<<weather<<endl;
  }
};

#endif