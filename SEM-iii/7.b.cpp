#include <iostream>
using namespace std;
class Vehicle {
public:
    void display() {
        cout << "This is a vehicle." << endl;
    }
};
class Car : public Vehicle {
public:
    void carInfo() {
        cout << "This is a car." << endl;
    }
};
class Bike : public Vehicle {
public:
    void bikeInfo() {
        cout << "This is a bike." << endl;
    }
};
int main() {
    Car carObj;
    Bike bikeObj;
    carObj.display();   // From Vehicle class
    carObj.carInfo();   // From Car class
    bikeObj.display();  // From Vehicle class
    bikeObj.bikeInfo(); // From Bike class
    return 0;
}

