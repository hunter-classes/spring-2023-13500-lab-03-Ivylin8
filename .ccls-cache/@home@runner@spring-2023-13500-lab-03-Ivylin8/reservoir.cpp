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

//TASK B
 double get_min_east()
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
  double min_storage = INT_MAX;
  while(dataFile >> entry_date >> east_basin_storage) {
    if (date == entry_date) {
      min_storage = std::min(min_storage, std::stold(east_basin_storage));
    }

    dataFile.ignore(INT_MAX, '\n');
  }

  dataFile.close(); 
  return min_storage;
}

double get_max_east()
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
  double max_storage = -1;
  while(dataFile >> entry_date >> east_basin_storage) {
    if (date == entry_date) {
      max_storage = std::max(max_storage, std::stold(east_basin_storage));
    }

    dataFile.ignore(INT_MAX, '\n');
  }

  dataFile.close(); 
  return max_storage;
}
 

 