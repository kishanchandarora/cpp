//============================================================================
// Name        : dynamic_allocation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Point {
	int a;
	int b;

public:
	Point() {
		a = 10;
		b = 20;
	}

	Point(int x, int y) {
		a = x;
		b = y;
	}

	void print_data() {
		cout<<"a : "<<a<<" b: "<<b<<endl;
	}

};


int main() {
	// stack
//	int n = 10;

	// heap
	// for single element
	int *ptr = new int(3);

	delete ptr;


	int *ptr1 = new int[5];

	// code write here

	delete[] ptr1;




	int **ptr2 = new int*[3];
	for(int index_of_row =0; index_of_row<3; index_of_row++) {
		ptr2[index_of_row] = new int[4];
	}

	for(int i=0; i<3; i++)
		delete[] ptr2[i];

	delete[] ptr2;


	Point *ptr3 = new Point; // parameter less cons. call

	delete ptr3;

	Point *ptr4 = new Point(); // parameter less cons. call

	delete ptr4;

	Point *ptr5 = new Point(10, 20); // parametertize cons. call

	delete ptr5;



	// 1d array of objects
	Point *ptr6 = new Point[5];
	// Point *ptr6 = (Point *):: operator new[](sizeof(Point)*5);


	// 2d array of objects

	Point **ptr7 = new Point*[3];
	// Point **ptr7 = (Point **):: operator new[](sizeof(Point*)*3);


	for(int i=0; i<3; i++) {
		ptr7[i] = new Point[4]{Point(1, 2), Point(3, 4), Point(5, 6), Point(7, 8)};
	}


	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			ptr7[i][j].print_data();

			//(*(ptr7 + i) + j)->print_data();
		}
		//ptr7[i]->print_data();
	}


	for(int i=0; i<3; i++) {
			delete[] ptr7;
	}

	delete[] ptr;


	int n;
	cin>>n;
	int m;
	cin>>m;
	Point *arr[m];
	for(int i=0; i<m; i++) {
		arr[i] = new Point[n];
	}





	return 0;
}
