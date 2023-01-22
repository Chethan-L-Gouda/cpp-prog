//prog32.cpp
//Program to Reverse String

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	char str[50];
	cout<<"Enter the string : ";
	fgets(str,50,stdin);
	reverse(str,str+strlen(str)-1);
	cout<<"The reverse of the string  is \""<<str<<"\".\n";
	return 0;
}