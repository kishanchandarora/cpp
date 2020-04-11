//============================================================================
// Name        : default_argument.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//int sum (int num1, int num2) {
//	return num1+num2;
//}
//
//int sum (int num1, int num2, int num3) {
//	return num1+num2+num3;
//}


int sum (int num1, int num2=0, int num3=0, int num4=0) {
	return num1+num2+num3+num4;
}



int main() {
//	int x; // declaration or declaration + definition
//
//	extern int x; // pure declaration
//
//
//	int x = 10 // initialization
//
//	int x;
//	x = 10 // assignment




	int x = 10;

	x = 2 + 3;

	cout<<x<<endl;
	cout<<sum(10, 20, 30, 40)<<endl;
	return 0;
}
