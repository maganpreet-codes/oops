#include <iostream>
using namespace std;

class student {
	private:
		string name;
		float marks;
	public:
		student(string n, float m) {
			name = n;
			marks = m;
		}
		friend void display(student s );
};

void display (student s) {
	cout << "Student name: " << s.name << endl;
	cout << "Marks : " << s.marks << endl;
}

int main() {
	student s1("Rahul", 87.9);
	display(s1);
	return 0;
}