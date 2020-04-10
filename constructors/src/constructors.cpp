//============================================================================
// Name        : constructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Date.h"
#include <iostream>
using namespace std;

int main() {
	Date d2;
	class Date d1(03, 12, 1996);
	cout<<"Lalit birth date is : ";
	d1.printDate();
	cout<<"Pranshu birth date is : ";
	d2.printDate();
	return 0;
}
