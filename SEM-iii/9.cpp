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
    // Declare friend functions
    friend Number operator+(Number n1, Number n2);  // binary operator
    friend Number operator++(Number &n);            // unary operator
};
// Binary operator overloading (+)
Number operator+(Number n1, Number n2) {
    Number temp;
    temp.value = n1.value + n2.value;
    return temp;
}
// Unary operator overloading (++): increments the value
Number operator++(Number &n) {
    n.value = n.value + 1;
    return n;
}

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

