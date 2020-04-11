//============================================================================
// Name        : aggregate_type.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct book {
	char name[20];
	int pages;
	float price;
};

int main() {
	//int arr[5];
//	arr[0] = 10;
//	arr[1] = 20;


//	int arr[] = {10, 20};
//	int arr[5] = {10};
//	int arr[5] = {0};


//	cin>>arr[0];
//	cin>>arr[1];


	book b1 = {"kishan", 10, 20.11};

	cout<<b1.name<<endl;




	return 0;
}
