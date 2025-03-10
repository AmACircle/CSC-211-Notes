#include "salesFunctions.h"

const int NO_OF_SALES_PERSON = 6;

// By putting the functions into salesFunctions.h, we can clean up the code in main.

int main() {
	ifstream fin;
	ofstream fout;
	string inputFile;
	string outputFile;

	double totalSaleByQuarter[4];
	salesPersonRec salesPersonList[NO_OF_SALES_PERSON];

	cout << "Enter salesperson ID file name: ";
	cin >> inputFile;

	fin.open(inputFile);

	if(!fin) {
		cerr << "Unable to open ID file." << endl;
		return -1;
	}

	initialize(fin, salesPersonList, NO_OF_SALES_PERSON);
	fin.close();
	fin.clear();

	cout << "Enter sales data file name: ";
	cin >> inputFile;

	fin.open(inputFile);

	if(!fin) {
		cerr << "Unable to open data file." << endl;
		return -1;
	}

	cout << "Enter outfile file name: ";
	cin >> outputFile;

	fout.open(outputFile);
	fout << fixed << showpoint << setprecision(2);

	getData(fin, salesPersonList, NO_OF_SALES_PERSON);
	saleByQuarter(salesPersonList, NO_OF_SALES_PERSON, totalSaleByQuarter);
	totalSaleByPerson(salesPersonList, NO_OF_SALES_PERSON);
	printReport(fout, salesPersonList, NO_OF_SALES_PERSON, totalSaleByQuarter);
	maxSaleByPerson(fout, salesPersonList, NO_OF_SALES_PERSON);
	maxSaleByQuarter(fout, totalSaleByQuarter);

	fin.close();
	fout.close();

	return 0;
}
