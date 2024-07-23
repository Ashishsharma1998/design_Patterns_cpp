#include "HotelMenu.hpp"

int main(){
   
    HotelMenu *hotel = new HotelMenu();
    hotel->getVegMenu()->displayMenu();
    hotel->getNonVegMenu()->displayMenu();
    hotel->getBothMenu()->displayMenu();

    std::cout<<"Enjoy the Meal:)\n";

    return 0;
}