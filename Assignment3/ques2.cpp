#include <iostream>
using namespace std;

class number {
	private :
		int a, b;

	public:
		number(int x, int y) {
			a = x;
			b = y;
		}
		friend void calculatesum(number n );
};
void calculatesum(number n) {
	cout << "Sum=" << n.a + n.b << endl;
}
int main() {
	number n(10, 20);

	calculatesum(n);

	return 0;
}