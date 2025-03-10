#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct salesPersonRec {
    string ID;
    double saleByQuarter[4];
    double totalSale;
};

void initialize(ifstream& indata, salesPersonRec list[], int listSize) {
    for (int index = 0; index < listSize; index++) {
        indata >> list[index].ID;
        for (int quarter = 0; quarter < 4; quarter++) {
            list[index].saleByQuarter[quarter] = 0.0;
        }
        list[index].totalSale = 0.0;
    }
}

void getData(ifstream& infile, salesPersonRec list[], int listSize) {
    string sID;
    int month;
    double amount;

    // Read all sales records from the file
    while (infile >> sID >> month >> amount) {
        // Find the salesperson with this ID
        int i;
        for (i = 0; i < listSize; i++) {
            if (sID == list[i].ID) {
                break;
            }
        }

        // Determine which quarter the month belongs to
        int quarter;
        if (1 <= month && month <= 3) {
            quarter = 0;  // Q1: Jan-Mar
        } else if (4 <= month && month <= 6) {
            quarter = 1;  // Q2: Apr-Jun
        } else if (7 <= month && month <= 9) {
            quarter = 2;  // Q3: Jul-Sep
        } else {
            quarter = 3;  // Q4: Oct-Dec
        }

        // Add the sale amount to the appropriate person and quarter
        if (i < listSize) {
            list[i].saleByQuarter[quarter] += amount;
        } else {
            cout << "Invalid salesperson's ID: " << sID << endl;
        }
    }
}

void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]) {
    // Initialize totals to zero
    for (int quarter = 0; quarter < 4; quarter++) {
        totalByQuarter[quarter] = 0.0;
    }

    // Sum up sales for each quarter across all salespeople
    for (int quarter = 0; quarter < 4; quarter++) {
        for (int i = 0; i < listSize; i++) {
            totalByQuarter[quarter] += list[i].saleByQuarter[quarter];
        }
    }
}

void totalSaleByPerson(salesPersonRec list[], int listSize) {
    for (int i = 0; i < listSize; i++) {
        list[i].totalSale = 0.0;  // Reset total to avoid double-counting
        for (int quarter = 0; quarter < 4; quarter++) {
            list[i].totalSale += list[i].saleByQuarter[quarter];
        }
    }
}

void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double salesByQuarter[]) {
    outfile << "----------- Annual Sales Report ---------"
            << "----" << endl;
    outfile << endl;
    outfile << "  ID         QT1         QT2      QT3       "
            << "QT4      Total" << endl;
    outfile << "____________________________________________"
            << "_________________" << endl;

    for (int i = 0; i < listSize; i++) {
        outfile << list[i].ID << "   ";

        for (int quarter = 0; quarter < 4; quarter++) {
            outfile << setw(10) << list[i].saleByQuarter[quarter];
        }

        outfile << setw(10) << list[i].totalSale << endl;
    }

    outfile << "Total   ";

    for (int quarter = 0; quarter < 4; quarter++) {
        outfile << setw(10) << salesByQuarter[quarter];
    }

    outfile << endl << endl;
}

void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize) {
    int maxIndex = 0;

    for (int i = 1; i < listSize; i++) {
        if (list[maxIndex].totalSale < list[i].totalSale) {
            maxIndex = i;
        }
    }

    outData << "Max Sale by SalesPerson: ID = "
            << list[maxIndex].ID
            << ", Amount = $" << list[maxIndex].totalSale
            << endl;
}

void maxSaleByQuarter(ofstream& outData, double salesByQuarter[]) {
    int maxIndex = 0;

    for (int quarter = 1; quarter < 4; quarter++) {
        if (salesByQuarter[maxIndex] < salesByQuarter[quarter]) {
            maxIndex = quarter;
        }
    }

    outData << "Max Sale by Quarter: Quarter = "
            << maxIndex + 1
            << ", Amount = $" << salesByQuarter[maxIndex]
            << endl;
}