#include <iostream>
using namespace std;
class Number {
    int value;
public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }
    // Display function
    void show() {
        cout << "Value = " << value << endl;
    }
    // Unary operator overloading (++)
    void operator++() {
        ++value;  // increment value by 1
    }
    // Binary operator overloading (+)
    Number operator+(Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }
};
int main() {
    Number n1(5), n2(10), n3;
    cout << "Initial values:" << endl;
    n1.show();
    n2.show();
    // Binary operator +
    n3 = n1 + n2;
    cout << "\nAfter addition (n3 = n1 + n2):" << endl;
    n3.show();
    // Unary operator ++
    ++n1;
    cout << "\nAfter increment (++n1):" << endl;
    n1.show();
    return 0;
}

