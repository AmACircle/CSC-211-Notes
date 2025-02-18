#include <iostream>
using namespace std;

int main() {
	/*
	for(int i = 0; i <= 100; i++) {
		cout << i;

		if((i + 1) % 10 != 0) {
			cout << ' ';
		} else {
			cout << endl;
		}
	}

	cout << endl;

	for(int i = 0; i < 100; i++) {
		if(i % 10 == 9) {
			cout << endl;
		}

		cout << i << " ";
	}

	cout << endl;

	for(int i = 1; i <= 100; i++) {
		if(i % 2 == 1) {
			cout << i << " ";
		}

		if(i % 19 == 1) {
			cout << endl;
		}
	}

	cout << endl;

	for(int i = 0; i < 100; i++) {
		if(i % 2 == 0) {
			cout << i << " ";
		}

		if(i % 20 == 18) {
			cout << endl;
		}
	}

	cout << endl;
	*/

	/*
		1. Simple Data Types: int, float, double, char, bool, etc.
		2. Structured Data Types: Array, Struct
		3. Pointer: Used to hold a memory address
	*/

	// EXAMPLE
	int a = 10;
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl << endl; //& is "address of"

	int *ptr = NULL;
	//0 is the ONLY numeric value that can be assigned to a pointer.
	//NULL is equivalent to 0.
	cout << ptr << endl;
	cout << &ptr << endl;

	ptr = &a; //Let the pointer ptr hold the address of 'a'.
	cout << ptr << endl;
	cout << &ptr << endl << endl;

	a = 20;
	cout << "a = " << a << endl; //20

	//Use the pointer to manipulate the content of a.

	*ptr = 30; // *ptr can manipulate the content of 'a' as well
	cout << "a = " << a << endl;

	//sizeof() is to display the memory size in bytes
	cout << sizeof(int) << endl; //4 bytes
	cout << sizeof(double) << endl; //8 bytes
	cout << sizeof(float) << endl; //4 bytes
	cout << sizeof(char) << endl; //1 byte
	cout << sizeof(bool) << endl; //1 byte

	//int, char and bool are all 'integrals', these data types are releated to int.

	int *mptr = (int*)malloc(sizeof(int)); //Allocate number of bytes. It returns the memory address of the dynamic location.
	//Access the location using the pointer.
	*mptr = 100; //Only way to manipuate the dynamic location.

	/* [SELF]
	double a = 2.00;
	double *ptr = &a;

	cout << "&a = " << &a << endl;
	cout << "ptr = " << ptr << endl;
	*/

	return 0;
}
