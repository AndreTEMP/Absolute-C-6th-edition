//============================================================================
// Name        : c01p03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const double pay_increase = .076;

	double annual_pay;

	cout << "Insert your current annual pay. \n";
	cin >> annual_pay;

	cout << "From an annual pay of " << annual_pay;

	annual_pay = ((annual_pay * pay_increase + annual_pay) + annual_pay)/2;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << " your new annual pay is " << annual_pay << ". \n";
	cout << "Your new monthly salary is " << annual_pay/12 << ".";


	return 0;
}
