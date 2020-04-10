/*
 * Book.h
 *
 *  Created on: 10-Apr-2020
 *      Author: sunbeam
 */

#include<string>
#include<iostream>
using namespace std;
#ifndef BOOK_H_
#define BOOK_H_

class Book {
	string bookName;
	int noOfPages;
	float price;
public:
	Book();
	Book(string bookName, int noOfPages, float price);
	virtual ~Book();

	const string& getBookName() const ;

	void setBookName(const string& bookName);

	int getNoOfPages() const;

	void setNoOfPages(int noOfPages);

	float getPrice() const ;

	void setPrice(float price);
};

#endif /* BOOK_H_ */
