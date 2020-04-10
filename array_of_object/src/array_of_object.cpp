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
//	Book arr[100000L];
	Book arr[3]; // parameter less constructor
//	Book arr[3] = {
//			Book("C with denins", 200, 100.0),
//			Book("C with denins", 300, 100.0),
//			Book("C with denins", 400, 100.0)
//	};
	// parameter constructor


	for(int i=0; i<3; i++) {
		string str;
		int pages;
		float price;
		cin>>str;
		arr[i].setBookName(str);
		cin>>pages;
		arr[i].setNoOfPages(pages);
		cin>>price;
		arr[i].setPrice(price);
	}

	for(int i=0; i<3; i++) {
		cout<<arr[i].getBookName()<<endl;
		cout<<arr[i].getNoOfPages()<<endl;
		cout<<arr[i].getPrice()<<endl;
	}
	return 0;
}

