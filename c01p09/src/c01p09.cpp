//============================================================================
// Name        : c01p09.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int coupons;
	int candy;
	int gumballs;

	cout << "Give the number of coupons. \n";
	cin >> coupons;

	candy = coupons / 10;
	coupons = coupons % 10;

	gumballs = coupons / 3;
	coupons = coupons % 3;

	cout << "You can get " << candy << " candybars, " << gumballs << " gumballs, and " << coupons << " coupons.";

	return 0;
}
