#include <iostream>
#include <algorithm>
using namespace std;

void smallestValue(int array[], int SIZE) {
	int smallest = array[0];
	int position = 0;
	for(int i = 0; i < SIZE; i++) {
		if(array[i] < smallest) {
			smallest = array[i];
			position = i;
		}
	}

	cout << "The smallest value is " << smallest << " at index " << position << "." << endl;
}

void printArray(int array[], int size) {
	for(int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}

	cout << endl;
}

void selectionSort(int array[], int size) {
	for(int i = 0; i < size - 1; i++) {
		int min = i;
		for(int j = i + 1; j < size; j++) {
			if(array[j] < array[min]) {
				min = j;
			}
		}

		swap(array[i], array[min]);
	}
}


void bubbleSort(int array[], int size) {
	for(int i = 0; i < size - 1; i++) {
		for(int j = 0; j < size - i - 1; j++) {
			if(array[j] > array[j + 1]) {
				int temp = array[j];

				printArray(array, size);
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

/**
void insertionSort(int array[], int size) {
	for(int i = 1; i < size; i++) {
		int key = array[i];
		int j = i - 1;

		while(j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j = j - 1;
		}

		array[j + 1] = key;
	}
}
**/

int main() {
	int array_s[5] = { 24, 4, 11, 2, -4 };
	int size_s = sizeof(array_s) / sizeof(array_s[0]);

	// smallestValue(array_s, size_s);

	/**
	cout << "Unsorted Array" << endl;
	printArray(array_s, size_s);

	cout << "Sorted Array (Selection Sort)" << endl;
	selectionSort(array_s, size_s);
	printArray(array_s, size_s);
	**/

	int array_b[5] = { 48, 11, -2, 5, 120 };
	int size_b = sizeof(array_b) / sizeof(array_b[0]);

	cout << "Unsorted Array" << endl;
	printArray(array_b, size_b);

	cout << "Sorted Array (Bubble Sort)" << endl;
	bubbleSort(array_b, size_b);
	printArray(array_b, size_b);

	/**
	int array_i[5] = { 100, -10, 40, 205, 11 };
	int size_i = sizeof(array_i) / sizeof(array_i[0]);

	cout << "Unsorted Array" << endl;
	printArray(array_i, size_i);

	cout << "Sorted Array (Insertion Sort)" << endl;
	insertionSort(array_i, size_i);
	printArray(array_i, size_i);
	**/

	return 0;
}
