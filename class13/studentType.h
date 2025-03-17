#include <iostream>
#pragma once
using namespace std;

struct studentType {
	double GPA = 0.0;
};

void print(studentType& student) {
	cout << "GPA: " << student.GPA << endl;
}
