//prog30.cpp
//program to Find Length of String

#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cout<<"Enter the string : ";
	getline(cin,str);
	cout<<"The length of the string \""<<str<<"\" is "<<str.length()<<endl;
	return 0;
}