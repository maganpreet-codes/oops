#include <iostream>
using namespace std;

// First namespace
namespace First {
	int number = 10;

	void display() {
		cout << "First namespace: " << number << endl;
	}
}

// Second namespace
namespace Second {
	int number = 20;

	void display() {
		cout << "Second namespace: " << number << endl;
	}
}

int main() {
	// Accessing First namespace
	First::display();

	// Accessing Second namespace
	Second::display();

	// Accessing variables with same name
	cout << "First number: " << First::number << endl;
	cout << "Second number: " << Second::number << endl;

	return 0;
}
