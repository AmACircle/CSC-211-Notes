#include <iostream>
#include <algorithm>
using namespace std;

void inputList(int[], int);
void printList(int[], int);
void selectionSort(int[], int);
int binarySearch(int[], int, int);

int main() {
	const int SIZE = 7;
	int array[SIZE] = { 16, 30, 24, 7, 62, 15, 68 };
	int key;

	// inputList(array, SIZE);
	// printList(array, SIZE);

	selectionSort(array, SIZE);
	// printList(array, SIZE);

	cout << endl;
	cout << "Enter a search key: ";
	cin >> key;

	int result = binarySearch(array, SIZE, key);

	return 0;
}

void inputList(int arr[], int n) {
	cout << "Enter " << n << " numbers: ";
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void printList(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void selectionSort(int arr[], int n) {
	for(int i = 0; i < n - 1; i++) {
		int min = i;
		for(int j = i + 1; j < n; j++) {
			if(arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(arr[i], arr[min]);
		printList(arr, n);
	}
}

int binarySearch(int arr[], int n, int key) {
	int low = arr[0];
	int high = arr[n - 1];

	while(low <= high) {
		int mid = low + (high - low) / 2;

		if(arr[mid] == key) {
			return mid;
		}

		if(arr[mid] < key) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return -1;
}
