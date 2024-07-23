#include<iostream>
#include "coffeeInterface.hpp"
#include "coffeeDecorator.hpp"
#include "plainCoffee.hpp"
#include "milkDecorator.hpp"
#include "sugarDecorator.hpp"
using namespace std;

int main(){
   cout<<"testing"<<endl;
   coffeeInterface *coffee = new plainCoffee();
   cout<<coffee->getDescription()<<"  "<<coffee->getCost()<<endl;
   
   coffeeInterface *milkCoffee = new milkDecorator(new plainCoffee());
   cout<<milkCoffee->getDescription()<<"  "<<milkCoffee->getCost()<<endl;

   coffeeInterface *sugarCoffee = new sugarDecorator(new plainCoffee());
   cout<<sugarCoffee->getDescription()<<"  "<<sugarCoffee->getCost()<<endl;

   return 0;
}