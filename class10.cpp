#include <iostream>
#include <string>
using namespace std;

// Creating a struct for your own data type
// Struct is like another way to store groups of data.
// An array stores a set of *similar* type of data, a struct can store different types.
struct houseType { // Declare with struct structName {}
	// Declaring struct members. These can just be normal variables OR functions.
	string style;
	int numOfBedrooms;
	int numOfBathrooms;
	int numOfCarGarage;
	int yearBuilt;
	int finishedSquareFootage;
	double price;
	double tax;
}; // Semicolon required at the end.

// Overloading the << operator to print out the struct when using cout.
// Will still function as normal if a struct isn't streamed in.
// If it works don't fix it.
ostream& operator<<(ostream& os, const houseType& house) {
    os << "Style: " << house.style << "\n"
       << "Bedrooms: " << house.numOfBedrooms << "\n"
       << "Bathrooms: " << house.numOfBathrooms << "\n"
       << "Car Garage: " << house.numOfCarGarage << "\n"
       << "Year Built: " << house.yearBuilt << "\n"
       << "Square Footage: " << house.finishedSquareFootage << "\n"
       << "Price: $" << house.price << "\n"
       << "Tax: $" << house.tax;
    return os;
}

// Obviously you can use a function to print out each individual element of the struct.

void inputHouse(houseType &house) {
// Unlike an array, you must pass in a struct variable to a function by reference
    cout << "Enter style: ";
    cin >> house.style;
    cout << "Enter number of bedrooms: ";
    cin >> house.numOfBedrooms;
    cout << "Enter number of bathrooms: ";
    cin >> house.numOfBathrooms;
    cout << "Enter number of car garage: ";
    cin >> house.numOfCarGarage;
    cout << "Enter year built: ";
    cin >> house.yearBuilt;
    cout << "Enter finished square footage: ";
    cin >> house.finishedSquareFootage;
    cout << "Enter price: ";
    cin >> house.price;
    cout << "Enter tax: ";
    cin >> house.tax;
}

int main() {
	houseType myHouse = {}; // This creates a variable with the struct houseType.
	// You can set variable values in structs using the '.' notation
	// E.g myHouse.style = "Residential".
	// Similary you can also output each field this way.

	inputHouse(myHouse);
	cout << myHouse << endl;

	return 0;
}
