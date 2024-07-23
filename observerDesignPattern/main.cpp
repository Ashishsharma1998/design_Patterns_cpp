#include "./observers/phone.hpp"
#include "./observers/watch.hpp"
#include "./Observable.hpp"

int main(){
   observer *ph = new phone(); 
   observer *wh = new watch();
   weatherStation *station = new weatherStation();
   station->subscribe(ph);
   station->subscribe(wh);
   station->setWeather("sunny");
   station->unSubscribe(ph);
   station->setWeather("hot");

}