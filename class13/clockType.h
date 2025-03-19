#include <iostream>
#pragma once
using namespace std;

class clockType {
	public:
		void setTime(int, int, int);
		void getTime(int&, int&, int&) const;
		void printTime() const;
		void incrementSeconds();
		void incrementMinutes();
		void incrementHours();
		bool equalTime(const clockType&) const;
		clockType(int, int, int);
		clockType();

	private:
		int hr;
		int min;
		int sec;
};
