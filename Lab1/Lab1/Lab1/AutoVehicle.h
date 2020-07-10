//  AutoVehicle.h
//  Lab1
//
//  Created by Sage Ren on 7/2/20.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class AutoVehicle {
    // Variables
    string av_color;
    string av_type;
    string av_model;
    int av_mileage;
    int av_nums_tires;
    int av_model_year;
    
    // Constructors
    public:
    AutoVehicle(){};
    AutoVehicle(string color, string type, string model, int model_year);
    
    // Setters
    void setAvColor(string color);
    void setAvType(string type);
    void setAvModel(string model);
    void setAvModelYear(int model_year);
    void setAvMileage(int mileage);
    void setAvNumsTires(int nums_tires);
    
    // Getters
    string getAvColor();
    string getAvType();
    string getAvModel();
    int getAvModelYear();
    int getAvMileage();
    int getAvNumsTires();
};
