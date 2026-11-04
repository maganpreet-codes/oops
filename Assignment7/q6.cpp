#include <iostream>
using namespace std;

class Person {
	public:
		Person() {
			cout << "Person Constructor" << endl;
		}

		virtual ~Person() {
			cout << "Person Destructor" << endl;
		}
};

class Student : public Person {
	public:
		Student() {
			cout << "Student Constructor" << endl;
		}

		~Student() {
			cout << "Student Destructor" << endl;
		}
};

int main() {
	Person *ptr = new Student();

	delete ptr;

	return 0;
}