#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle {
	protected:
		string brand;
		string model;

	public:
		void getVehicleDetails() {
			cout << "Enter Brand: ";
			getline(cin >> ws, brand); // ws consumes leading whitespace/newlines
			cout << "Enter Model: ";
			getline(cin, model);
		}

		void displayVehicleDetails() const {
			cout << "Brand: " << brand << endl;
			cout << "Model: " << model << endl;
		}
};

// First Derived Class: Car inherits from Vehicle
class Car : public Vehicle {
	private:
		int numberOfDoors;

	public:
		void getCarDetails() {
			cout << "--- Enter Car Details ---" << endl;
			getVehicleDetails();
			cout << "Enter Number of Doors: ";
			cin >> numberOfDoors;
		}

		void displayCarDetails() const {
			cout << "\n--- Car Details ---" << endl;
			displayVehicleDetails();
			cout << "Number of Doors: " << numberOfDoors << endl;
		}
};

// Second Derived Class: Bike inherits from Vehicle
class Bike : public Vehicle {
	private:
		int engineCapacity; // in cc

	public:
		void getBikeDetails() {
			cout << "\n--- Enter Bike Details ---" << endl;
			getVehicleDetails();
			cout << "Enter Engine Capacity (in cc): ";
			cin >> engineCapacity;
		}

		void displayBikeDetails() const {
			cout << "\n--- Bike Details ---" << endl;
			displayVehicleDetails();
			cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
		}
};

int main() {
	// Creating separate objects of Car and Bike
	Car myCar;
	Bike myBike;

	// Get and display details for Car
	myCar.getCarDetails();
	myCar.displayCarDetails();

	// Get and display details for Bike
	myBike.getBikeDetails();
	myBike.displayBikeDetails();

	return 0;
}