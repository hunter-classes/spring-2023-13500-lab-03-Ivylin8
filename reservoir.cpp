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


 
 //TASK b
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
  //variables
 std::string date;
	double eastSt;
	double minStorage = INT_MAX;
	
    //reading files
	while(dataFile >> date >> eastSt) {
		dataFile.ignore(INT_MAX, '\n');
		if (eastSt < minStorage) {
			minStorage = eastSt;
		}
	}
	dataFile.close();
	return minStorage;
}

//////////////////////

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
  std::string date;
	double eastSt;
	double maxStorage = 0;

	while(dataFile >> date >> eastSt) {
		dataFile.ignore(INT_MAX, '\n');
		if (eastSt > maxStorage) {
			maxStorage = eastSt;
		}
	}
	dataFile.close();
	return maxStorage;
}

//TASK c

std::string compare_basins(std::string date)
{
    std::ifstream dataFile("Current_Reservoir_Levels.tsv");
    if (dataFile.fail()){
        std::cerr <<"File cannot be opened for reading." << std::endl;
        exit(1);
    }
    // Ignore first header
    std::string junk;
    std::getline(dataFile, junk);
    
    // Variables
    std::string compare_basin;
    double east_storage, west_storage;
    
    // Read through the file
    while (dataFile >> compare_basin >> west_storage >> east_storage){
        dataFile.ignore(INT_MAX, '\n');
        if (compare_basin == date){
            if (east_storage > west_storage) {
                return "East";
            } else if (west_storage > east_storage) {
                return "West";
            } else {
                return "Equal";
            }
        }
    }
    return "Date not found";
}
