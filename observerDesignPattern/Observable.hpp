#ifndef WEATHER_STATION
#define WEATHER_STATION
#include "observer.hpp"
#include "subject.hpp"
#include<list>
using namespace std;

class weatherStation:public subject{
    private:
    string weather;
    list<observer*> obs;

    public:

    void subscribe(observer *ob){
        obs.push_back(ob);
    }
    
    void unSubscribe(observer *ob){
       obs.remove(ob);
    }

    void notify(){
      for(auto &ob:obs){
         ob->update(weather);
      }
    }

    void setWeather(string s){
       weather=s;
       notify();
    }
};

#endif