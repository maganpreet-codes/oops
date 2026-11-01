#include <iostream>
using namespace std;

int main() {
	float C, F;

	cout << "Enter Celsius: ";
	cin >> C;

	F = (9 * C) / 5 + 32;

	cout << "Farenheit = " << F;
	return 0;
}