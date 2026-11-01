#include <iostream>
#include <string>
using namespace std;

class person {
	protected:
		string name;
		int age;
	public:
		person(string n, int a) {
			name = n;
			age = a;
			cout << "Person class constructor\n";
		}

		void displaybase() {
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};

class Student: public person {
	protected:
		int Rollno;
		string course;
	public:
		Student(string n, int a, int r, string c): person(n, a) {
			Rollno = r;
			course = c;
			cout << "Student class constructor\n";
		}

		void displayDerived() {
			displaybase();
			cout << "Rollno: " << Rollno << endl;
			cout << "Course: " << course << endl;
		}
};

int main() {
	Student s1("Magan", 21, 2345, "MCA");
	s1.displayDerived();

	return 0;
}