#include <iostream>
using namespace std;

void findLargest(int array[], int SIZE) {
	int largest = array[0];
	int element = 0;

	for(int i = 0; i < SIZE; i++) {
		if(array[i] > largest) {
			largest = array[i];
			element = i;
		}
	}

	cout << "The largest element of the array is " << largest << " at array index " << element << endl;
}

void firstLargest(int array[], int SIZE) {
	int firstLargest = array[0];
	int element = 0;

	for(int i = 1; i < SIZE; i++) {
		if(array[i] > firstLargest) {
			firstLargest = array[i];
			element = i;

			break;
		}
	}

	cout << "The first largest occurence is " << firstLargest << " at array index " << element << endl;
}

void inputArr(int *arr, int n) {
	cout << "Enter a list of " << n << " integers: ";

	while(*arr < n) {
		cin >> *arr;
		arr++;
	}
}

int main() {
	/**
	const int SIZE = 10;
	int array[SIZE] = { 1, -1, 19, -11, -2, 55, -12, 14, 100, 2 };

	findLargest(array, SIZE);
	firstLargest(array, SIZE);
	

	const int SIZE = 8;
	int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int* ptr = numbers;
	cout << "The numbers are:\n";
	//cout << *ptr << endl;
	while (ptr <= &numbers[SIZE - 1]) {
		//cout << *ptr << " ";
		cout << *ptr << " ";
		ptr++;
	}

	cout << "\nThe numbers backward are:\n";
	//cout << *ptr << " ";
	while (ptr > numbers) {
		//ptr--;
		//cout << *ptr << endl;
		cout << *(ptr-1) << " "; //ptr was out the array bound
		ptr--;
	}
	**/
	

	const int SIZE = 5;
	int list[SIZE] = { 1, 2, 3, 4, 5 };

	
	cout << list << endl;
	// Array name holds the base address, a pointer type variable.
	// The array name is NOT mutable.
	cout << *list << endl; // References list[0]
	cout << *(list + 1) << endl; // list[1]
	cout << *(list + 2) << endl; // list[2]
	

	inputArr(list, SIZE);
	cout << &list[SIZE - 1];
	
	return 0;
}
