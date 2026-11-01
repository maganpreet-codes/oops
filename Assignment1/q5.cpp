#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		// Data members
		string Name;
		int RollNo;
		string Degree;
		string Hostel;
		float CurrentCGPA;

		// Private member function
		void updateCGPA() {
			cout << "Enter new CGPA: ";
			cin >> CurrentCGPA;
			cin.ignore();
		}

		// Private member function
		void updateHostel() {
			cout << "Enter new Hostel: ";
			getline(cin, Hostel);
		}

	public:
		// Public member function
		void addDetails() {
			cout << "Enter Student Name: ";
			getline(cin, Name);

			cout << "Enter Roll No: ";
			cin >> RollNo;
			cin.ignore();

			cout << "Enter Degree: ";
			getline(cin, Degree);

			cout << "Enter Hostel: ";
			getline(cin, Hostel);

			cout << "Enter Current CGPA: ";
			cin >> CurrentCGPA;
			cin.ignore();
		}

		// Public member function
		void updateDetails() {
			cout << "\nUpdating Student Details...\n";

			cout << "Enter Student Name: ";
			getline(cin, Name);

			cout << "Enter Roll No: ";
			cin >> RollNo;
			cin.ignore();

			cout << "Enter Degree: ";
			getline(cin, Degree);

			updateHostel();
			updateCGPA();
		}

		// Public member function
		void displaydetails() {
			cout << "\n--- Student Details ---\n";
			cout << "Name         : " << Name << endl;
			cout << "Roll No      : " << RollNo << endl;
			cout << "Degree       : " << Degree << endl;
			cout << "Hostel       : " << Hostel << endl;
			cout << "Current CGPA : " << CurrentCGPA << endl;
		}
};

int main() {
	Student s;

	// Calling public functions
	s.addDetails();

	cout << "\nStudent Details:\n";
	s.displaydetails();

	s.updateDetails();

	cout << "\nUpdated Student Details:\n";
	s.displaydetails();

	return 0;
}
