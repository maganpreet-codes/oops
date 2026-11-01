#include <iostream>
using namespace std;

class Student {
		string Name;
		int Rollno;

	public:
		student() {
			Name = "Maganpreet";
			Rollno = 101;
		}

		void display() {
			cout << "Student name: " << Name << endl;
			cout << "Roll no : " << Rollno << endl;
		}
};

int main() {
	Student s;

	s.display();

	return 0;
}
