#pragma once
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include "building.h"

int main(){

 building b;

  b.setBuildingType("Mansion");
  b.setBuildingLocation("Itacha");
  b.setBuildingAge(2);

  cout<<"Building Type = "
   <<b.getBuildingType()<<endl;

   cout<<"Building Location = "
   <<b.getBuildingLocation()<<endl;

   cout<<"Building Age = "
   <<b.getBuildingAge()<<endl;

  return 0; 
} 