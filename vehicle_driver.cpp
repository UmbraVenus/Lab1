#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include "vehicle.h"

int main(){

 vehicle truck;
 vehicle passenger_car(2019, "bmw", 4);

 truck.init_class_vars(2020,"jaguar", 8);

  cout<<setw(15)<<setfill('*')<<""<<endl;

  cout<<"Vehicle Model = "<<
   truck.getModelName()<<endl;

  cout<<"Vehicle Model Year = "
    <<truck.getModelYear()<<endl;

  cout<<"Vehicle Num of Tires = "
   <<truck.getTireNum()<<endl;
 
  cout<<setw(15)<<setfill('*')<<""<<endl;

 cout<<"Passenger Car Features "<<endl;
  cout<<setw(15)<<setfill('*')<<""<<endl;

   cout<<"Car Model Name = "<<
    passenger_car.getModelName()<<endl;

   cout<<"Car Model Year = "<<
    passenger_car.getModelYear()<<endl;

    cout<<"Car Num of Tires = "<<
     passenger_car.getTireNum()<<endl;

    cout<<setw(15)<<setfill('*')<<""<<endl;

 return 0;

}