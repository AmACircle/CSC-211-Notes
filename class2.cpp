#include <iostream>
using namespace std;

/*
	0 is an integer.
	0 is not positive or negative.
	0 is EVEN. 0 % 2 == 0

	Array size cannot be a variable, it MUST be immutable (const)

	const int SIZE = 5; // You MUST initialize a const variable at declaration.
	int arr[SIZE] = {}; // If you want to initialize an array, you MUST do it at declaration.
	When you output an array (cout << arr), it outputs the base address (arr[0]).
	If you need to initialize the array after declaration, it must be done one by one (arr[0] = 1; arr[1] = 5; etc).

	SCOPES

	int c; // Global variable, can be accessed from any function, not recommended due to the nature of the value being mutable.
	const double PI = 3.14; // Global consts are recommended since the value cannot be modified.

	int main() {
		int a; // Local variable, can't be accessed outside of main()
		b = 5; // Won't work because it is outside the scope of input_int
		c = 5; // Will work because it is a global variable
	}

	void input_int(int& num) {
		int b = 3; // Local variable
		cin >> num; // Local variable

		num + b;
	}
*/

void checkInput(int& x, int& y) {
	do {
		cout << "Enter 2 NON-ZERO integers seperated by a space: ";
		cin >> x >> y;
	} while (x == 0 || y == 0);
}

void positiveOrNegative(int x, int y) {
	if(x > 0 && y > 0) {
		cout << "Both inputs are positive (" << x << ", " << y << ")" << endl;
	} else if(x < 0 && y < 0) {
		cout << "Both inputs are negative(" << x << ", " << y << ")" << endl;
	} else {
		cout << "One input is positive and one is negative (" << x << ", " << y << ")" << endl;
	}
}

void arrayInput(int array[], int size) {
	cout << "Enter " << size << " integers seperated by a space: ";

	for(int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

void arrayOutput(int array[], int size) {
	for(int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}

	cout << endl;

	for(int i = size - 1; i >= 0; i--) {
		cout << array[i] << " ";
	}
}

int main() {
	// int x, y = 0;

	// checkInput(x, y);
	// positiveOrNegative(x, y);

	const int SIZE = 5;
	int array[SIZE];

	arrayInput(array, SIZE);
	arrayOutput(array, SIZE);

	return 0;
}
