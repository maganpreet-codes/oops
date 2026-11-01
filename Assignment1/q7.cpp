#include <iostream>
using namespace std;

class Complex {
	private:
		int real;
		int imaginary;

	public:
		// Function to initialize values
		void set() {
			cout << "Enter real part: ";
			cin >> real;

			cout << "Enter imaginary part: ";
			cin >> imaginary;
		}

		// Function to display complex number
		void display() {
			cout << real;

			if (imaginary >= 0)
				cout << " + " << imaginary << "i";
			else
				cout << " - " << -imaginary << "i";

			cout << endl;
		}

		// Function to add two complex numbers
		Complex sum(Complex c) {
			Complex result;

			result.real = real + c.real;
			result.imaginary = imaginary + c.imaginary;

			return result;
		}
};

int main() {
	Complex c1, c2, c3;

	cout << "Enter first complex number:\n";
	c1.set();

	cout << "\nEnter second complex number:\n";
	c2.set();

	cout << "\nFirst complex number: ";
	c1.display();

	cout << "Second complex number: ";
	c2.display();

	// Add two complex numbers
	c3 = c1.sum(c2);

	cout << "Sum of complex numbers: ";
	c3.display();

	return 0;
}
