#include <iostream>
using namespace std;
class Box {
private:
    int length;
public:
    Box(int l){
    	length=l;
	}
    friend void printLength(Box &b);
};
void printLength(Box &b) {
    // Can access private members of Box
    cout << "Length of box: " << b.length << endl;
}
int main() {
    Box box1(10);
    printLength(box1);  // Accesses private member via friend function

    return 0;
}

