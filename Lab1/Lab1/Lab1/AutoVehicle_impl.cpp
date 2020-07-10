//  AutoVehicle_impl.cpp
//  Lab1
//
//  Created by Sage Ren  on 7/2/20.
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "AutoVehicle.h"
using namespace std;

AutoVehicle::AutoVehicle (string color, string type, string model, int model_year) {
    av_color = color;
    av_type = type;
    av_model = model;
    av_model_year = model_year;
}

// Setters
void AutoVehicle::setAvColor(string color){
    av_color = color;
}

void AutoVehicle::setAvType(string type){
    av_type = type;
}

void AutoVehicle::setAvModel(string model){
    av_model = model;
}

void AutoVehicle::setAvModelYear(int model_year){
    av_model_year = model_year;
}

void AutoVehicle::setAvMileage(int mileage){
    av_mileage = mileage;
}

void AutoVehicle::setAvNumsTires(int nums_tires){
    av_nums_tires = nums_tires;
}

// Getters
string AutoVehicle::getAvColor(){
    return av_color;
}
string AutoVehicle::getAvType(){
    return av_type;
}
string AutoVehicle::getAvModel(){
    return av_model;
}
int AutoVehicle::getAvModelYear(){
    return av_model_year;
}
int AutoVehicle::getAvMileage(){
    return av_mileage;
}
int AutoVehicle::getAvNumsTires(){
    return av_nums_tires;
}
