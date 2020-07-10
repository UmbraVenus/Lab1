//  AutoVehicle_driver.cpp
//  Lab1
//
//  Created by Sage Ren  on 7/2/20.
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "AutoVehicle.h"

int main()
{
    AutoVehicle a;
    
    a.setAvColor("Blue");
    a.setAvType("Electric");
    a.setAvModel("Prius");
    a.setAvModelYear(2020);
    a.setAvMileage(5000);
    a.setAvNumsTires(4);
    
    cout << "av_model = " << a.getAvModel() << endl;
    cout << "av_color = " << a.getAvColor() << endl;
    cout << "av_type = " << a.getAvType() << endl;
    cout << "int av_mileage = " << a.getAvMileage() << endl;
    cout << "int av_num_tires = " << a.getAvNumsTires() << endl;
    cout << "int av_model_year = " << a.getAvModelYear() << endl;
    
    return 0;
}


