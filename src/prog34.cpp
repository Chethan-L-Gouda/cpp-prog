//prog34.cpp
//Program to Copy String into Another String

#include <iostream>
using namespace std;

int main(){
	string str,cpy;
	cout<<"Enter the string : ";
	getline(cin,str);
	cpy=str;
	cout<<"The contents in the copied string is \""<<cpy<<"\".\n";
}