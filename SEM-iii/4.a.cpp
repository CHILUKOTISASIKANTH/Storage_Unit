#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
double add(double a, double b) {
    return a + b;
}
int main() {
    cout << "Add 2 and 3: " << add(2, 3) << endl;           // Calls add(int, int)
    cout << "Add 1, 2 and 3: " << add(1, 2, 3) << endl;     // Calls add(int, int, int)
    cout << "Add 2.5 and 3.5: " << add(2.5, 3.5) << endl;   // Calls add(double, double)
    return 0;
}

