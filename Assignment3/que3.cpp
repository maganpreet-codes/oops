#include <iostream>
using namespace std;

class employee {
	private:
		float salary;
	public:
		employee(float s) {
			salary = s;
		}
		friend void comparesalary(employee e1, employee e2);
};

void comparesalary(employee e1, employee e2) {
	if (e1.salary > e2.salary)
		cout << "Higher Salary = " << e1.salary << endl;
	else if (e2.salary > e1.salary)
		cout << "Higher Salary = " << e2.salary << endl;
	else
		cout << "Both salaries are equal." << endl;
}

int main() {
	employee e1(25000);
	employee e2(30000);
	comparesalary(e1, e2);
	return 0;
}