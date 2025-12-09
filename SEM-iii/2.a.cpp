#include <iostream>
using namespace std;
namespace First {
    int value = 100;
    void show() {
        cout << "Inside First namespace, value = " << value << endl;
    }
}
namespace Second {
    int value = 200;
    void show() {
        cout << "Inside Second namespace, value = " << value << endl;
    }
}
int value = 10;
int main() {
    int value = 5;  // Local variable
    cout << "Local value = " << value << endl;              // Local scope
    cout << "Global value = " << ::value << endl;           // Using Scope Resolution Operator (::)
    First::show();                                          // Using First namespace
    Second::show();                                         // Using Second namespace
    cout << "First namespace value = " << First::value << endl;
    cout << "Second namespace value = " << Second::value << endl;
    return 0;
}

