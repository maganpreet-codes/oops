#include <iostream>
using namespace std;

class Student {
		string name;
		int rollno;
		float CGPA;

	public:
		Student() {
			name = "akshita";
			rollno = 105;
		}

		Student(string n, int r) {
			name = n;
			rollno = r;
		}

		Student(string n, int r, float c) {
			name = n;
			rollno = r;
			CGPA = c;
		}

		void Displaydetails() {
			cout << "Student Name: " << name << endl;
			cout << "Student rollno: " << rollno << endl;
			cout << "Student's CGPA: " << CGPA << endl;
		}
};

int main() {

	Student s1;

	Student s2("harpreet", 345);

	Student s3("japneet", 234, 8.3);

	s1.Displaydetails();
	s2.Displaydetails();
	s3.Displaydetails();

	return 0;
}
