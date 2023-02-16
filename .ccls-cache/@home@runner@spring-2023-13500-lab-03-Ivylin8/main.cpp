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

//Task b
  std::cout << "\nminiumn storage in East basin in 2018: " << get_min_east() << "billion gallons" <<std::endl;
  std::cout << "\nmaxium storage in East basin in 2018: " << get_max_east() << "billion gallons" <<std::endl;



  

return 0;
  
}
