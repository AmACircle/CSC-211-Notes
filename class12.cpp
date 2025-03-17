#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/**
	const int ROWS = 5;
	int i, j, k, m, n;

	for(i = ROWS; i > 0; i--) {
		for(j = 0; j < ROWS - i; j++) {
			cout << "^";
		}

		for(k = 2 * (i - 1) + 1; k > 0; k--) {
			cout << i;
		}

		cout << "^";

		for(m = 0; m < ROWS - i; m++) {
			cout << "^^";
		}

		for(n = 1; n <= 2 * (i - 1) + 1; n++) {
			cout << n;
		}

		cout << endl;
	}
	**/

	int array[] = { 2, 4, 6, 8, 10, 12 };
	int size = sizeof(array) / sizeof(int);

	return 0;
}
