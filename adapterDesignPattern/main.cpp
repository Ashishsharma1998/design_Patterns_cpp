#include "clientcode.hpp"
#include "targetInterface.hpp"
#include "adapter.hpp"

int main(){
  
    clientCode(new adapter(new legacyPrinter()));
  return 0;
}