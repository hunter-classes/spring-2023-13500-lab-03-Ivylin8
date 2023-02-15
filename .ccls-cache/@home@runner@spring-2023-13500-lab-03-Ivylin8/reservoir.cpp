#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include "reservoir.h"

double get_east_storage(std::string date)
{
  std::ifstream dataFile("Current_Reservoir_Levels.tsv");

  if (dataFile.fail()){
    std::cerr <<"File can not be opened for reading." <<std::endl;
    exit(1);
  }




