#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Choice: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Enter the first value:";
	cin >> A;
	
	cout << "Enter the second value:";
	cin >> B;
}
void firstChoice(float A, float B) {
	cout << "This is proving the first choice ran" << endl;
	cout << A << "+" << B << "=" << endl;
	cout << A+B;
}
void secondChoice(float A, float B) {
	cout << "This is proving the second choice ran" << endl;
	cout << A << "-" << B << "=" << endl;
	cout << A-B;
}
void thirdChoice(float A, float B) {
	cout << "This is proving the third choice ran" << endl;
	cout << A << "*" << B << "=" << endl;
	cout << A*B;
}
void fourthChoice(float A, float B) {
	cout << "This is proving the fourth choice ran" << endl;
	cout << A << "/" << B << "=" << endl;
	cout << A/B;
}
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 4) {
		fourthChoice(A, B);
	}
	return 0;
}
