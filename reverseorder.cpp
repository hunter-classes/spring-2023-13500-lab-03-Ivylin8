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

void reverse_order(std::string date1, std::string date2) {
  // Open data file
  std::ifstream dataFile("Current_Reservoir_Level.tsv");
  if (dataFile.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }

  // Ignore first header
  std::string junk;
  std::getline(dataFile, junk);

  // Read the dataFile
  std::string date;
  double eastSt, eastEl, westSt, westEl;

  // Loop through each line of data and print West basin elevation in reverse order for the given date range
  while (dataFile >> date >> eastSt >> eastEl >> westSt >> westEl) {
    if (date >= date1 && date <= date2) {
      std::cout << westEl << std::endl;
    }
  }
}