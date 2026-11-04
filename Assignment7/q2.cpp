#include <iostream>
using namespace std;

class Shape {
	public:
		virtual void area() {
			cout << "Area of shape" << endl;
		}
};

class Rectangle : public Shape {
		float length, breadth;

	public:
		Rectangle(float l, float b) {
			length = l;
			breadth = b;
		}

		void area() {
			cout << "Rectangle Area = "
			     << length * breadth << endl;
		}
};

class Circle : public Shape {
		float radius;

	public:
		Circle(float r) {
			radius = r;
		}

		void area() {
			cout << "Circle Area = "
			     << 3.14 * radius * radius << endl;
		}
};

int main() {
	Shape *ptr;

	Rectangle r(13, 4);
	Circle c(5);

	ptr = &r;
	ptr->area();

	ptr = &c;
	ptr->area();

	return 0;
}