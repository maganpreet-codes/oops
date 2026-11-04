#include <iostream>
using namespace std;

class BankAccount {
	public:
		virtual void calculateInterest() = 0;
};

class SavingsAccount : public BankAccount {
		float amount;

	public:
		SavingsAccount(float a) {
			amount = a;
		}

		void calculateInterest() {
			cout << "Savings Interest = "
			     << amount * 4 / 100 << endl;
		}
};

class FixedDeposit : public BankAccount {
		float amount;

	public:
		FixedDeposit(float a) {
			amount = a;
		}

		void calculateInterest() {
			cout << "Fixed Deposit Interest = "
			     << amount * 7 / 100 << endl;
		}
};

int main() {
	BankAccount *ptr;

	SavingsAccount s(15000);
	FixedDeposit f(7000);

	ptr = &s;
	ptr->calculateInterest();

	ptr = &f;
	ptr->calculateInterest();

	return 0;
}