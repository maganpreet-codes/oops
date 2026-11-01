#include <iostream>
using namespace std;

class Rectangle {
		float length;
		float breadth;

	public:
		Rectangle(float l, float b) {
			length = l;
			breadth = b;
		}

		void DisplayArea() {
			int area = length * breadth;
			cout << "Area of the rectangle: " << area << endl;
		}
};

int main() {
	Rectangle r(5, 2);

	r.DisplayArea();

	return 0;
}

