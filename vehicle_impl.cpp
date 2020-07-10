#pragma once
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include "vehicle.h"

vehicle::vehicle
 (int myr, string mname, int ntires){
 	model_year = myr;
 	model_name = mname;
 	num_of_tires = ntires;
 }

 void vehicle::init_class_vars(
  int myear, string mname, int ntires){
   model_year = myear;
   model_name = mname;
   num_of_tires = ntires;
 }

 int vehicle::getModelYear(){
 	return model_year;
 }

 string vehicle::getModelName(){
 	return model_name;
 }

 int vehicle::getTireNum(){
 	return num_of_tires;
 }

