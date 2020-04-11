/*
 * Test.cpp
 *
 *  Created on: 11-Apr-2020
 *      Author: sunbeam
 */

#include "Test.h"
#include <iostream>
using namespace std;

Test::Test():z(y), y(x), x(10) {
//
//	this->z = this->y;
//	this->y = this->x;
//	this->x = 10;

	for(int i=0; i<5; i++) {
		this->arr[i] = 0;
	}
	// TODO Auto-generated constructor stub

}

void Test::printData() {
	cout<<"x : "<<x<<" y : "<<y<<" z : "<<z<<endl;
}

Test::~Test() {
	// TODO Auto-generated destructor stub
}

