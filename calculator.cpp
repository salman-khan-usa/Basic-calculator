#include<iostream>
using namespace std;
 
int add(int a, int b){
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

float divide(int a, int b) {
	if (b == 0) {
		cout << "cannot divide by zero" << endl;
		return 0;
	}
	return (float)a / b;
}


int main() {
	int choice, a, b;
	bool continueprogram = true;

	while (continueprogram) {
		cout << "\n simple calculator " << endl;
		cout << "1. Add\n2. subtract\n3. multiply\n4. divide\n5. Exit" << endl;
		cout << "Enter your choice:";
		cin >> choice;
		if (choice == 5) {
			cout << "Exiting program. Goodbye!" << endl;
			break;

		}
		cout << "Enter two numbers :";
		cin >> a >> b;

		switch (choice) {

		case 1:
			cout << "Result = " << add(a, b) << endl;
			break;

		case 2:
			cout << "Result = " << subtract(a, b) << endl;
			break;
			
		case 3:
			cout << "Result = " << multiply(a, b) << endl;
			break;

		case 4:
			cout << "Result = " << divide(a, b) << endl;
			break;
		default:
			cout << "Invalid choice!" << endl;
		}

		cout << "Do you want to continue? (1 for yes / 0 for no): ";
		cin >> continueprogram;
	}
	return 0;
}