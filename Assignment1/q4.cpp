#include <iostream>
#include <string>
using namespace std;

struct Student {
	// Data members
	string Name;
	int RollNo;
	string Degree;
	string Hostel;
	float CurrentCGPA;

	// Member function to add details
	void addDetails() {
		cout << "Enter Student Name: ";
		cin >> Name;

		cout << "Enter Roll No: ";
		cin >> RollNo;

		cout << "Enter Degree: ";
		cin >> Degree;

		cout << "Enter Hostel: ";
		cin >> Hostel;

		cout << "Enter Current CGPA: ";
		cin >> CurrentCGPA;
	}

	// Update complete student details
	void updateDetails() {
		cout << "\nEnter updated details:\n";
		addDetails();
	}

	// Update CGPA
	void updateCGPA() {
		cout << "Enter new CGPA: ";
		cin >> CurrentCGPA;
	}

	// Update Hostel
	void updateHostel() {
		cout << "Enter new Hostel: ";
		cin >> Hostel;
	}

	// Display student details
	void displaydetails() {
		cout << "\n--- Student Details ---\n";
		cout << "Name       : " << Name << endl;
		cout << "Roll No    : " << RollNo << endl;
		cout << "Degree     : " << Degree << endl;
		cout << "Hostel     : " << Hostel << endl;
		cout << "Current CGPA: " << CurrentCGPA << endl;
	}
};

int main() {
	Student s;

	// Add student details
	s.addDetails();

	// Display details
	s.displaydetails();

	// Update CGPA
	s.updateCGPA();

	// Update Hostel
	s.updateHostel();

	// Display updated details
	cout << "\nAfter Updating:\n";
	s.displaydetails();

	return 0;
}
