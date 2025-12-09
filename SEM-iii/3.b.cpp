#include <iostream>
using namespace std;
class Shape{
	public:
		virtual double area() = 0;
};
class Rectangle : public Shape{
	double w,h;
	public:
		Rectangle(double width,double height):
			w(width), h(height){}
		double area() override{
			return w*h;
		}
};
class Circle: public Shape{
	double r;
	public:
		Circle(double radius): r(radius){}
		double area() override{
		return (3.14*r*r);
		}
};
int main() {
    Rectangle rect(5, 3);
    Circle circ(4);
    cout << "Rectangle area: " << rect.area() << "\n";
    cout << "Circle area: " << circ.area() << "\n";
    return 0;
}

