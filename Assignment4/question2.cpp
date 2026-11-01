#include <iostream>
#include <string>
using namespace std;

class Person {
		string name;

	public:
		Person(string n) {
			name = n;
			cout << "Person class constructor called\n";
		}

		void displaybase() {
			cout << "Name: " << name << endl;
		}
};

class Employee: public Person {
		int EmployeeID;

	public:
		Employee(string n, int e): Person(n) {
			EmployeeID = e;
			cout << "Intermediate class constructor called" << endl;
		}

		void displayIntermidiate() {
			displaybase();
			cout << "Employee ID: " << EmployeeID << endl;
		}
};

class Manager: public Employee {
		int departmentID;

	public:
		Manager(string n, int e, int d): Employee(n, e) {
			departmentID = d;
			cout << "Derived class constructor called" << endl;
		}

		void displayderived() {
			displayIntermidiate();
			cout << "Department ID: " << departmentID << endl;
		}
};

int main() {
	Manager m1("Magan", 1234, 65);
	m1.displayderived();

	return 0;
}