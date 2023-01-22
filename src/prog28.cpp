//prog28.cpp
//Program to Print entered String

#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cout<<"Enter the string : ";
	getline(cin,str);
	cout<<"The  entered string is :\n"<<str<<endl;	
	return 0;
}