#include <iostream>
using namespace std;
class Box {
    double length, width, height;
public:
    Box() {
        length = width = height = 0;
        cout << "Default constructor called." << endl;
    }
    Box(double side) {
        length = width = height = side;
        cout << "Cube constructor called." << endl;
    }
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        cout << "Box constructor called." << endl;
    }
    double volume() {
        return length * width * height;
    }
};
int main() {
    Box box1;                // Calls default constructor
    Box box2(5);             // Calls constructor with one parameter
    Box box3(2, 3, 4);       // Calls constructor with three parameters
    cout << "Volume of box1: " << box1.volume() << endl;
    cout << "Volume of box2: " << box2.volume() << endl;
    cout << "Volume of box3: " << box3.volume() << endl;

    return 0;
}

