#include <iostream>
using namespace std;

/*
Function Header
type name(parameters)

Function Signature
name(parameters)
*/

/* Function Overload
int sum(int x, int y) {
	return x + y;
}

int sum(int x, int y, int z) {
	return x + y + z;
}

double sum(double x, double y) {
	return x + y;
}
*/

/* Template + Temp Variables
template <typename T>

void swapping(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}

void rotate(int& x, int& y, int& z) {
	int temp = x;
	x = y;
	y = z;
	z = temp;
}


template <typename Type>

bool checkSign(Type x) {
	return x > 0;
}
*/

// Default Parameters
int addTwo(int x = 5, int y = 10) {
	return x + y;
}

int main() {
	/* Function Overload
	double d1 = 2.5, d2 = 2.1

	do{
		cout << "Enter three non-zero integers: ";
		cin >> x >> y >> z;
	} while(x == 0 || y == 0 || z == 0);

	cout << "The sum of " << x << " + " << y << " is " << sum(x, y) << endl;
	cout << "The sum of " << x << " + " << y << " + " << z << " is " << sum(x, y, z) << endl;
	cout << "The sum of " << d1 << " + " << d2 << " is " << sum(d1, d2) << endl;
	*/

	/*
	cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl;
	rotate(x, y, z);
	cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl;
	*/

	/* Templates + Temp Variables
	int x = 1, y = 2, z = 3;
	double a = 1.2, b = 2.1;
	char c1 = 'a', c2 = 'b';

	cout << "x = " << x << "\ny = " << y << endl;
	swapping(x, y); // Arguments must be variables if they are reference parameters.
	cout << "x = " << x << "\ny = " << y << endl;
	cout << "a = " << a << "\nb = " << b << endl;
	swapping(a, b);
	cout << "a = " << a << "\nb = " << b << endl;
	cout << "c1 = " << c1 << "\nc2 = " << c2 << endl;
	swapping(c1, c2);
	cout << "c1 = " << c1 << "\nc2 = " << c2 << endl
	*/

	/*
	cout << checkSign(1) << endl;
	cout << checkSign(-1) << endl;
	cout << checkSign(-1.1) << endl;
	cout << checkSign(1.1) << endl;
	*/

	// Default Parameters
	cout << addTwo() << endl;
	cout << addTwo(2) << endl;
	cout << addTwo(2, 2) << endl;

	return 0;
}
