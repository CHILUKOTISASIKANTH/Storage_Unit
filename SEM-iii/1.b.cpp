#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {  // virtual function
        cout << "Drawing Shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() override { // override
        cout << "Drawing Circle\n";
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;
    s->draw();  // "Drawing Circle" (because draw() is virtual)
    return 0;
}

