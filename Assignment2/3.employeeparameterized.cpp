#include <iostream>
using namespace std;

class employee {
		string name;
		int id;
		int salary;

	public:
		employee(string n, int id, int s) {
			name = n;
			id = id;
			salary = s;
		}

		void Displaydetails() {
			cout << "Employee name: " << name << endl;
			cout << "Employee ID: " << id << endl;
			cout << "Employee Salary: " << salary << endl;
		}
};

int main() {
	employee e("Himanshi", 13456, 50000);
	e.Displaydetails();

	return 0;
}
