#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include "reservoir.h"


int main()
{
  std::cout<< "East Basin Storage: " << get_east_storage("01/01/2018") << "billion gallons"<<std::endl;
   std::cout<< "East Basin Storage: " << get_east_storage("12/01/2018") << "billion gallons"<<std::endl;
  
  

return 0;
  
}
