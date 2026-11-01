#include <iostream>
using namespace std;

class bankaccount {
	private:
		int accountno;
		float balance;

		static int totalaccounts;
	public:
		bankaccount(int accno, float bal) {
			accountno = accno;
			balance = bal;
			totalaccounts++;
		}

		friend void displayaccount(bankaccount b);

		static void displaytotalaccounts() {
			cout << "Total Accounts = " << totalaccounts << endl;
		}
};
int bankaccount::totalaccounts = 0;

void displayaccount(bankaccount b) {
	cout << "Account number : " << b.accountno << endl;
	cout << "Balance : " << b.balance << endl;
}

int main() {
	bankaccount b1(101, 5000);
	bankaccount b2(102, 7500);
	bankaccount b3(103, 10000);

	cout << "Account 1 details: " << endl;
	displayaccount(b1);

	cout << "\nAccount 2 details: " << endl;
	displayaccount(b2);

	cout << "\nAccount 3 details: " << endl;
	displayaccount(b3);

	cout << endl;
	bankaccount::displaytotalaccounts();

	return 0;
}