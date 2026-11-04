#include <iostream>
using namespace std;

class Vehicle {
	public:
		virtual void displayInfo() {
			cout << "Vehicle information" << endl;
		}
};

class Car : public Vehicle {
	public:
		void displayInfo() {
			cout << "Car: 4 wheels, 7 seats" << endl;
		}
};

class Bike : public Vehicle {
	public:
		void displayInfo() {
			cout << "Bike: 2 wheels, 2 seats" << endl;
		}
};

class Bus : public Vehicle {
	public:
		void displayInfo() {
			cout << "Bus: 6 wheels, 70 seats" << endl;
		}
};

int main() {
	Vehicle *ptr;

	Car c;
	Bike b;
	Bus bus;

	ptr = &c;
	ptr->displayInfo();

	ptr = &b;
	ptr->displayInfo();

	ptr = &bus;
	ptr->displayInfo();

	return 0;
}