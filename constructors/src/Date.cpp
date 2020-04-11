/*
 * Date.cpp
 *
 *  Created on: 11-Apr-2020
 *      Author: sunbeam
 */

#include "Date.h"
#include<iostream>
using namespace std;

Date::Date() {
	this->day = 14;
	month = 10;
	year = 1996;

	// TODO Auto-generated constructor stub

}


Date :: Date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

void Date::printDate()
{
	cout<<day<<" - "<<month<<" - "<<year<<endl;
}


Date::~Date() {
	// TODO Auto-generated destructor stub
}

