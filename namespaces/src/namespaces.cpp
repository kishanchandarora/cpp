//============================================================================
// Name        : namespaces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// example 8
namespace my_name_is_namespace {
	int num1 = 10;

}

namespace NA = my_name_is_namespace;



int main() {
	cout<<NA::num1<<endl;
}


//// example 7
//
//
////namespace unique1
////{
////	int num2 = 30;
////}
//
//namespace
//{
//	int num1 = 10;
//}
//
//int main() {
//	int num1 = 20;
//	cout<<::num1<<endl;
//	return 0;
//}


//
////example 6
//int num1 =10;
//int main() {
//	int num1 = 20;
//	cout<<::num1<<endl;
//	return 0;
//}


////example 5
//namespace NA {
//int num1 = 10;
//}
//int main() {
//	int num1 = 20;
//
//	using namespace NA;
//	cout<<num1<<endl;
//	cout<<NA::num1<<endl;
//	return 0;
//}



//// example 4
//namespace NA {
//int num1 = 10;
//namespace NA {
//int num1 = 20;
//}
//}
//
//int main() {
//
//	//using namespace NA;
//
//	cout<<NA::NA::num1<<endl;
//	//cout<<NB::num1<<endl;
//
//	//using namespace NB;
//	cout<<NA::num1<<endl;
//
//	return 0;
//}



//// example 3
//namespace NA {
//int num1 = 10;
//namespace NB {
//int num1 = 20;
//}
//}
//
//
//int main() {
//
//
//
//	cout<<NA::num1<<endl;
//	cout<<NA::NB::num1<<endl;
//
//	return 0;
//}




//// example 2
//namespace NA {
//int num1 = 10;
//namespace NB {
//int num2 = 20;
//}
//}
//
//
//int main() {
//
//
//
//	cout<<NA::num1<<endl;
//	cout<<NA::NB::num2<<endl;
//
//	return 0;
//}



//// example 1
//// namespace_name :: variable_name
//int main() {
//
//	namespace NA {
//		int num1 = 10;
//	}
//
//	namespace NB {
//		int num1 = 20;
//	}
//
//	cout<<NA::num1<<endl;
//	cout<<NB::num1<<endl;
//
//	return 0;
//}




