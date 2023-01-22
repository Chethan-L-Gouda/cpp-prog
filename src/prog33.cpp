//prog33.cpp
//program to concatenate two string

#include <iostream>
using namespace std;

int main(){
	string str1,str2;
	cout<<"Enter the string1 :";
	getline(cin,str1);
	cout<<"Enter the string2 :";
	getline(cin,str2);
	cout<<"The concatenation of both the string is "<<(str1+str2)<<endl;
	return 0;
}