#include <iostream>
using namespace std;

template <typename T>

int linearSearch(T array[], int size, T search_value) {
	for(int i = 0; i < size; i++) {
		if(array[i] == search_value) {
			return i;
		}
	}

	return -1;
}

int frontAndBack(int array[], int size, int search_value) {
	int front = 0, back = size - 1;

	while(front <= back) {
		if(array[front] == search_value || array[back] == search_value) {
			return true;
		}

		front++;
		back--;
	}

	return false;
}

int binarySearch(int array[], int low, int high, int search_value) {
	while(low <= high) {
		int mid = low + (high - low) / 2;

		if(array[mid] == search_value) {
			return mid;
		}

		if(array[mid] < search_value) {
			low = mid + 1;
		}

		else {
			high = mid - 1;
		}
	}

	return -1;
}

int main() {
	int array[] = { 10, 20, 40, 1, 5, 4, 15, 10, -2, 4, 12, 99 };
	double arr[] = { 0.1, 10, 4.22, 5.41, 18.22, 54.44, 1 };
	int size = sizeof(array) / sizeof(int);
	int size2 = sizeof(arr) / sizeof(double);
	sort(array, array + size);


	cout << linearSearch(array, size, 100) << endl;
	cout << linearSearch(array, size, 15) << endl;
	cout << linearSearch(arr, size2, 11.10) << endl;
	cout << linearSearch(arr, size2, 4.22) << endl;
	cout << frontAndBack(array, size, 10) << endl;
	cout << frontAndBack(array, size, 111) << endl;
	cout << binarySearch(array, 0, size - 1 , 4) << endl;
	cout << binarySearch(array, 0, size - 1, 10) << endl;
	cout << binarySearch(array, 0, size - 1, 100) << endl;

	return 0;
}
