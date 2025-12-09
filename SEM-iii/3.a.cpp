#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int marks;
public:
    // Constructor with parameters using 'this' pointer
    Student(string name, int marks) {
        this->name = name;     // 'this' used to refer to the current object's data members
        this->marks = marks;
    }
    void compare(Student s) {
        if (this->marks > s.marks)
            cout << this->name << " has higher marks than " << s.name << endl;
        else if (this->marks < s.marks)
            cout << s.name << " has higher marks than " << this->name << endl;
        else
            cout << "Both have equal marks." << endl;
    }
    void display() {
        cout << "Name: " << this->name << ", Marks: " << this->marks << endl;
    }
};
int main() {
    Student s1("Ravi", 85);
    Student s2("Kiran", 90);
    cout << "Student Details:\n";
    s1.display();
    s2.display();
    cout << "\nComparison Result:\n";
    s1.compare(s2);
    return 0;
}

