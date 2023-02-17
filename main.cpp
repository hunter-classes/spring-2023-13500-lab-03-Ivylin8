//Spring 2023 - Lab 03 
//Last name: Lin
//First name: Ivy
//GitHub username: Ivyl8

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include "reservoir.h"
#include "reverseorder.h"


int main()
{
    //Task A
    std::cout << "Reading data file: " <<std::endl;
    std::cout << "\nEast Basin Storage on 01/01/2018: " << get_east_storage("01/01/2018") << "billion gallons"<<std::endl;
    std::cout << "\nEast Basin Storage on 12/01/2018: " << get_east_storage("12/01/2018")  << "billion gallons"<<std::endl;
    
    //Task b
     std::cout << "Get the min and max: " <<std::endl;
    std::cout << "\nminiumn storage in East basin in 2018: " << get_min_east() << "billion gallons" <<std::endl;
    std::cout << "\nmaxium storage in East basin in 2018: " << get_max_east() << "billion gallons" <<std::endl;
    
    //Task C 
    std::cout << "Comparing elevations: " <<std::endl;
    std::cout << "02/03/2018 " << compare_basins("02/03/2018") << "\n";
    
    //Task D 
    reverseorder("10/10/2018", "10/31/2018");

return 0;
}