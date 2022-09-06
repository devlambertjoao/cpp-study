#include <iostream>
#include <stdio.h>
using namespace std;

class BaseVehicle {
protected:
  string chassis;
};

class Vehicle {
public:
  string brand;
  string model;
  void turnOn() { cout << "Stuuuuuu stuuuuututututu"; }
};

// Need to use public before Vehicle, for set the Vehicle methods public for FerrariCar...
class FerrariCar : public Vehicle, public BaseVehicle {
public:
  FerrariCar() {
    string brand = "Ferrari";
    string model = "458 Italia";
  }
};

int main() {
  FerrariCar ferrari;
  ferrari.turnOn();
}
