//============================================================================
// Name        : references.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


// swap using third variable

// call by value , call by pointer/address, call by reference




void swapByValue(int x, int y) {
	int t = x;
	x = y;
	y = t;
}

void swapByPtr(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}



void swapByRef(int &x, int &y) {
	int t = x;
	x = y;
	y = t;
}


int main() {
	int x = 10, y = 20;
	swapByRef(x, y);
	cout<<x<<"  "<<y<<endl;
	return 0;
}


//
// //const int num1 = 10;
// //int &num2 = num1;
//
//  int num1 = 10;
 // int &num2 = num1;
//int &num3 = num2;
//		//	int var1 = 10, var2 = 20;
//		//int &arr[2] = {var1, var2} // not allowed
//  // int *ptr = &num1;

// // int arr[2] = {1, 2};
// // int &arrRef = arr;


//  // int &num3 = ptr;
//
//class Test {
//	double &num3;
//
//	Test(double& num2): num3(num2){
//
//	}
//};
//
//
//int main() {
//	int num1 = 10;
//	Test t(num1);
//}

num1 and num3 10
