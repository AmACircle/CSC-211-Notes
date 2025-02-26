#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	/**
	cout << "Printing a star: " << endl;
	cout << "*" << endl;
	**/

	/**
	cout << "10 stars with no loop: " << endl;
	cout << "**********" << endl;
	**/

	/**
	cout << "10 stars using a for loop: " << endl;
	for(int i = 0; i < 10; i++) {
		cout << "*";
	}
	cout << endl;
	**/

	/**
	cout << "10 rows of 10 stars in with a for loop" << endl;
	for(int i = 0; i < 10; i++) {
		cout << "**********";
		cout << endl;
	}
	**/

	/**
	cout << "10 rows of 10 stars with nested for loops" << endl;
	for(int i = 0; i < 10; ++i) {
		for(int j = 0; j < 10; ++j) {
			cout << "*";
		}

		cout << endl;
	}
	**/

	/**
	cout << "10 rows of 5 stars with nested for loops" << endl;
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 5; j++) {
			cout << "*";
		}

		cout << endl;
	}
	**/

	/**
	cout << "5 rows of 20 stars with nested for loops" << endl;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 20; j++) {
			cout << "*";
		}

		cout << endl;
	}
	**/

	/**
	cout << "Right triangle" << endl;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j <= i; j++) {
			cout << static_cast<char>(65 + j);
		}

		cout << endl;
	}

	cout << "Inverted right triangle" << endl;
	for(int i = 5; i >= 1; i--) {
		for(int j = 1; j <= i; j++) {
			cout << i;
		}

		cout << endl;
	}
	**/

	/**
	cout << "Right oriented right triangle" << endl;
	for(int i = 0; i < 5; i++) {
		for(int j = i; j < 5; j++) {
			cout << " ";
		}

		for(int k = 0; k <= i; k++) {
			cout << "*";
		}

		cout << endl;
	}

	cout << "Hollow triangle" << endl;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5 - i - 1; j++) {
			cout << " ";
		}

		if(i == 0 || i == 5 - 1) {
			for(int j = 0; j < 2 * i + 1; j++) {
				cout << "*";
			}
		} else {
			cout << "*";

			for(int j = 0; j < 2 * i - 1; j++) {
				cout << " ";
			}

			cout << "*";
		}

		cout << endl;
	}

	cout << "Filled in triangle" << endl;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5 - i - 1; j++) {
			cout << " ";
		}

		if(i == 0 || i == 5 - 1) {
			for(int j = 0; j < 2 * i + 1; j++) {
				cout << "*";
			}
		} else {
			cout << "*";

			for(int j = 0; j < 2 * i - 1; j++) {
				cout << "*";
			}

			cout << "*";
		}

		cout << endl;
	}
	**/

	for(int i = 1; i <= 12; i++) {
		for (int j = 1; j <= 12; j++) {
			cout << setw(5) << i << "*" << j << "=" << setw(3) << i * j;
		}

		cout << endl;
	}

	return 0;
}
