#include <iostream>
using namespace std;

class Employee {
	protected:
		string name;
		float basicSalary;

	public:
		Employee(string n, float s) {
			name = n;
			basicSalary = s;
		}

		virtual void calculateSalary() {
			cout << "Basic Salary = " << basicSalary << endl;
		}
};

class PermanentEmployee : public Employee {
	public:
		PermanentEmployee(string n, float s)
			: Employee(n, s) {}

		void calculateSalary() {
			cout << "Permanent Employee: " << name << endl;
			cout << "Salary = "
			     << basicSalary + basicSalary * 0.20 << endl;
		}
};

class ContractEmployee : public Employee {
	public:
		ContractEmployee(string n, float s)
			: Employee(n, s) {}

		void calculateSalary() {
			cout << "Contract Employee: " << name << endl;
			cout << "Salary = "
			     << basicSalary + basicSalary * 0.10 << endl;
		}
};

int main() {
	Employee *ptr;

	PermanentEmployee p("Maganpreet", 35000);
	ContractEmployee c("Gaganpreet", 25500);

	ptr = &p;
	ptr->calculateSalary();

	ptr = &c;
	ptr->calculateSalary();

	return 0;
}