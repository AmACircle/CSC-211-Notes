#include <iostream>
using namespace std;

int addThree(int x, int y, int z) {
	return x + y + z;
}

void largestValue(int array[], int SIZE) {
	int largest = 0;
	int position = 0;
	for(int i = 0; i < SIZE; i++) {
		if(array[i] > largest) {
			largest = array[i];
			position = i;
		}
	}

	cout << "The largest value is " << largest << " at index " << position << endl;
}

void displayLastTwo(int array[], int SIZE) {
	if(SIZE < 2) {
		cout << "The array size must be greater than 2." << endl;
		return;
	}

	cout << "The last two elements are " << array[SIZE - 1] << " and " << array[SIZE - 2] << endl;
}

int main() {
	/*
	int x, y, z;
	cout << "Enter 3 numbers: ";
	cin >> x >> y >> z;

	cout << "The sum of " << x << " + " << y << " + " << z << " is " << addThree(x, y, z) << endl;
	*/

	int array[] = {2, 1, -4, 10};
	int array2[] = {1};
	int size = sizeof(array) / sizeof(int);
	int size2 =  sizeof(array2) / sizeof(int);

	displayLastTwo(array, size);
	displayLastTwo(array2, size2);

	largestValue(array, size);

	return 0;
}
