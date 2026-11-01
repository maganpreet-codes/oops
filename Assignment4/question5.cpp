#include <iostream>
#include <string>
using namespace std;

// Base Class
class College {
	protected:
		string collegeName;

	public:
		// Base Class Constructor
		College(string name) : collegeName(name) {
			cout << "[Execution Order 1] Base Class (College) Constructor Executed." << endl;
		}

		void displayCollege() const {
			cout << "College Name: " << collegeName << endl;
		}
};

// Derived Class
class Department : public College {
	private:
		string departmentName;

	public:
		// Derived Class Constructor explicitly calling Base Class Constructor
		Department(string cName, string dName) : College(cName), departmentName(dName) {
			cout << "[Execution Order 2] Derived Class (Department) Constructor Executed." << endl;
		}

		void displayDetails() const {
			cout << "\n--- College & Department Info ---" << endl;
			displayCollege();
			cout << "Department Name: " << departmentName << endl;
			cout << "---------------------------------" << endl;
		}
};

int main() {
	cout << "Creating Department object...\n" << endl;

	// Instantiating derived class object
	Department dept("Punjab Engineering College", "Computer Science");

	cout << endl;
	dept.displayDetails();

	return 0;
}