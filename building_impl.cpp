#pragma once
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include "building.h"

void building::setBuildingType
 (string btype) {
  building_type = btype;
}

void building::setBuildingLocation
  (string blocation){
  	 building_location = blocation;
  }

void building::setBuildingAge
  (int bage){
  	 building_age = bage;
  }

string building::getBuildingType(){
 return building_type;
}

string building::getBuildingLocation(){
 return building_location;
}

int building::getBuildingAge(){
 return building_age;
}