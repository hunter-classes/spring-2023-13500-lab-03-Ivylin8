#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include "reservoir.h"

//Task A
double get_east_storage(std::string date)
{
  std::ifstream dataFile("Current_Reservoir_Levels.tsv");
  if (dataFile.fail()){
    std::cerr <<"File can not be opened for reading." <<std::endl;
    exit(1);
  }
  //Ignore first header
  std::string junk;
  std::getline(dataFile, junk);
  //reading files
  std::string entry_date, east_basin_storage;
  while(dataFile >> entry_date >> east_basin_storage) {

		if (date == entry_date) {
			return std::stold(east_basin_storage);
		}

		dataFile.ignore(INT_MAX, '\n');
	}

	dataFile.close(); 
	return 0;
}

 