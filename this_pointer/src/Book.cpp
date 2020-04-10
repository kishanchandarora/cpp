/*
 * Book.cpp
 *
 *  Created on: 10-Apr-2020
 *      Author: sunbeam
 */

#include "Book.h"

Book::Book() {
	// TODO Auto-generated constructor stub
	this->bookName = "";
	this->noOfPages = 0;
	this->price = 0.0;

}

Book :: Book(string bookName, int noOfPages, float price) {
	this->bookName = bookName;
	this->noOfPages = noOfPages;
	this->price = price;
}


const string& Book :: getBookName() const {
	return bookName;
}

void Book :: setBookName(const string& bookName) {
	this->bookName = bookName;
}

int Book ::  getNoOfPages() const {
	return noOfPages;
}

void Book :: setNoOfPages(int noOfPages) {
	this->noOfPages = noOfPages;
}

float Book :: getPrice() const {
	return price;
}

void Book :: setPrice(float price) {
	this->price = price;
}

Book::~Book() {
	// TODO Auto-generated destructor stub
}

