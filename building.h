#include <iostream>
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

class building{
 string building_type;
 string building_location;
 int building_age;

public:
//setters
 void setBuildingType(string btype);
 void setBuildingLocation(string bloc);
 void setBuildingAge(int bage);

 //getters
 string getBuildingType();
 string getBuildingLocation();
 int getBuildingAge();

};