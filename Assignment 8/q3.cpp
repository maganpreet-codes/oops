#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter a number: ";
	cin >> n;

	try {
		if (n < 0) {
			throw - 1;
		} else if (n > 100) {
			throw 1;
		}

		cout << "Valid number: " << n;
	} catch (int x) {
		if (x == -1) {
			cout << "Error: Number is negative";
		} else {
			cout << "Error: Number is greater than 100";
		}
	}

	return 0;
}