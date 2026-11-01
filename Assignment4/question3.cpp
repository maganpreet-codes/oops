#include <iostream>
using namespace std;

// First Base Class: Academic
class Academic {
	protected:
		float marks;

	public:
		void getAcademicMarks() {
			cout << "Enter Academic Marks: ";
			cin >> marks;
		}

		void displayAcademicMarks() const {
			cout << "Academic Marks: " << marks << endl;
		}
};

// Second Base Class: Sports
class Sports {
	protected:
		float sportsScore;

	public:
		void getSportsScore() {
			cout << "Enter Sports Score: ";
			cin >> sportsScore;
		}

		void displaySportsScore() const {
			cout << "Sports Score: " << sportsScore << endl;
		}
};

// Derived Class inheriting from both Academic and Sports
class Result : public Academic, public Sports {
	private:
		float totalScore;

	public:
		void calculateTotal() {
			totalScore = marks + sportsScore;
		}

		void displayResult() const {
			cout << "\n----- Student Result -----" << endl;
			displayAcademicMarks();
			displaySportsScore();
			cout << "Total Score: " << totalScore << endl;
			cout << "---------------------------" << endl;
		}
};

int main() {
	Result student;

	// Input data using methods inherited from base classes
	student.getAcademicMarks();
	student.getSportsScore();

	// Calculate total score and display combined results
	student.calculateTotal();
	student.displayResult();

	return 0;
}