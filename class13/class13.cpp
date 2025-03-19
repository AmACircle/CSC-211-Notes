#include "clockTypeImp.cpp"
#include "studentType.h"

int main() {
	int hours, minutes, seconds;
	clockType myClock(10, 5, 30);
	clockType yourClock;
	studentType student;

	print(student);
	myClock.incrementSeconds();
	myClock.printTime();
	yourClock.setTime(10, 5, 31);
	yourClock.printTime();

	if (myClock.equalTime(yourClock)) {
		cout << "myClock has the same time as yourClock." << endl;
	} else {
		cout << "myClock does not have the same time as yourClock." << endl;
	}

	myClock.incrementHours();
	myClock.getTime(hours, minutes, seconds);
	cout << "myClock time: " << hours << " hours, " << minutes << " minutes, "
		 << seconds << " seconds." << endl;

	return 0;
}
