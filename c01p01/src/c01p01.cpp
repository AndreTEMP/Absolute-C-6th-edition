//============================================================================
// Name        : c01p01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double cereal;

	cout << "Enter how much your cereal weighs in ounces.\n";
	cin >> cereal;

	cout << "Your cereal weighs " << cereal << " ounces. \n";
	cout << "Your cereal weighs " << cereal/35273.92 << " tons.\n";
	cout << "It would take " << 35273.92/cereal << " cereal boxes to weigh 1 ton.";

	return 0;
}
