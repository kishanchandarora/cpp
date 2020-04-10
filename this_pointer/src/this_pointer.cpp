//============================================================================
// Name        : this_pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<string>
#include "Book.h"
#include <iostream>
using namespace std;

int main() {
	string str;
	int pages;
	float price;
	class Book b1;
	cout<<"Enter book Name : ";
	cin>>str;
	b1.setBookName(str);
	cout<<"Enter book Pages : ";
	cin>>pages;
	b1.setNoOfPages(pages);
	cout<<"Enter book Price : ";
	cin>>price;
	b1.setPrice(price);
	cout<<b1.getBookName()<<endl;
	cout<<b1.getNoOfPages()<<endl;
	cout<<b1.getPrice()<<endl;
	return 0;
}
