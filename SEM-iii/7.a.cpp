#include <iostream>
using namespace std;
class Number {
    int num;
public:
    // Constructor
    Number(int n) {
        num = n;
        cout << "Constructor called, num = " << num << endl;
    }
    // Copy constructor
    Number(const Number &obj) {
        num = obj.num;
        cout << "Copy constructor called, num = " << num << endl;
    }
    void display() {
        cout << "Number: " << num << endl;
    }
};
int main() {
    Number n1(10);    // Constructor called
    Number n2 = n1;   // Copy constructor called
    n1.display();
    n2.display();
    return 0;
}

