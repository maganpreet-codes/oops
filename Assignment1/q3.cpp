#include <iostream>
using namespace std;

int main() {

	//normal
	cout << "NORMAL LOOP : ";

	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
	cout << endl;

	// No initialization
	cout << "NO INITIALIZATION : " ;

	int m = 0;
	for (; m < 10; m++) {
		cout << m << " ";
	}
	cout << endl;

	// No increment
	cout << "NO INCREMENT : ";

	int j = 0;
	for (; j < 10; ) {
		cout << j << " ";
		j++;
	}
	cout << endl;

	//While loop
	cout << "WHILE LOOP : ";

	int k = 0;
	while (k < 10) {
		cout << k << " ";
		k++;
	}
	cout << endl;

	//Do While loop
	cout << "DO WHILE LOOP : ";
	int l = 0;
	do {
		cout << l << " ";
		l++;
	} while (l < 10);
	cout << endl;

	return 0;
}