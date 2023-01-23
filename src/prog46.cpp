//prog46.cpp
//Program to Find Substring in String

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[50],sub[50];
	cout<<"Enter the string : ";
	fgets(str,50,stdin);
	cout<<"Enter the sub string to find: ";
	fgets(sub,50,stdin);
	if(strstr(str,sub) != NULL){
		cout<<"Substring found .";
	}else
		cout<<"Substring not found.";
	return 0;
}