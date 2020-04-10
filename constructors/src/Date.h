/*
 * Date.h
 *
 *  Created on: 11-Apr-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_

class Date {
	int day;
	int month;
	int year;
public:
	Date();
	Date(int, int, int );
	void printDate();
	virtual ~Date();
};

#endif /* DATE_H_ */
