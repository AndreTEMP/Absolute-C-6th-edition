//============================================================================
// Name        : c01p11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int seconds;
	int hours;
	int minutes;

	cout << "Give the amount seconds. \n";
	cin >> seconds;

	hours = seconds / 3600;
	seconds = seconds % 3600;

	minutes = seconds / 60;
	seconds = seconds % 60;

	cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
	return 0;
}
