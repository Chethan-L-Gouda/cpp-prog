//prog31.cpp
//Program to Compare Two Strings

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1,str2;
	cout<<"Enter the string1 : ";
	getline(cin,str1);
	cout<<"Enter the string2 : ";
	getline(cin,str2);

	string eq=(str1==str2)?"same":"not same";
	cout<<"Both the string are "<<eq<<endl;

	return 0;
}