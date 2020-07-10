#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class vehicle{


 int model_year;
 string model_name;
 int num_of_tires;

 //constructors
 public:
 vehicle(){};
 vehicle(int, string, int);

 void init_class_vars
  (int myear, string mname, int ntires);

 int getModelYear();
 string getModelName();
 int getTireNum();


};