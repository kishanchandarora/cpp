/*
 * Test.cpp
 *
 *  Created on: 11-Apr-2020
 *      Author: sunbeam
 */

#include "Test.h"

Test::Test():x(10) {
	//this->y = 20;
	this->z = 30;
	//this->x = 10; // not allowed in constant data member
	// TODO Auto-generated constructor stub
}

void Test::readOnly() const {
//	this->z   = 50; // not allowed;

	return this->z;
}


void Test::modify() {
//	this->x = 30; // not allowed

	this->z = 40; // allowed
}


int Test::y = 20;
Test::~Test() {
	// TODO Auto-generated destructor stub
}

