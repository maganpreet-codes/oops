#include <iostream>
using namespace std;

class Box {
		float length;
		float width;
		float height;

	public:
		Box() {
			length = 6;
			width = 5;
			height = 8;
		}

		Box(float l, float w, float h) {
			length = l;
			width = w;
			height = h;
		}

		void Displayvolume() {
			float volume = length * width * height;
			cout << "Volume of the Box: " << volume << endl;
		}
};

int main() {
	Box b;

	b.Displayvolume();

	return 0;

}
