#include <iostream>
using namespace std;

class demo {
	public:
		demo() {
			cout << "Constructor is called " << endl;
		}
		~demo() {
			cout << "Destructor is called " << endl;
		}
};

int main() {
	demo d1;
	demo d2;
	demo d3;

	return 0;
}
