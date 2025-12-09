#include <iostream>
using namespace std;
class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called: Object created." << endl;
    }
    // Destructor
    ~MyClass() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};
int main() {
    cout << "Inside main function." << endl;

    MyClass obj;  // Constructor is called here automatically

    cout << "End of main function." << endl;

    // Destructor will be called automatically when obj goes out of scope
    return 0;
}

