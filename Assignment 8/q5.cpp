#include <iostream>
using namespace std;

class LibraryAccount {
		int availableBooks;

	public:
		LibraryAccount(int b) {
			availableBooks = b;
		}

		void issueBook(int n) {
			try {
				if (n > availableBooks) {
					throw n;
				}

				availableBooks = availableBooks - n;

				cout << "Books issued successfully!" << endl;
				cout << "Remaining books: "
				     << availableBooks << endl;
			} catch (int x) {
				cout << "Error: Not enough books available!" << endl;
			}
		}
};

int main() {
	LibraryAccount l(5);

	int n;

	cout << "Enter number of books to issue: ";
	cin >> n;

	l.issueBook(n);

	return 0;
}