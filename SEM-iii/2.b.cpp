#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}
int main() {
    cout << "Addition of integers: " << add(10, 20) << endl;          // int type
    cout << "Addition of floats: " << add(5.5, 2.3) << endl;        // float type
    cout << "Addition of doubles: " << add(2.34, 4.56) << endl;       // double type
    cout << "Addition of strings: " << add(string("Hello "), string("World!")) << endl; // string type
    return 0;
}

