//prog39.cpp
//Program to Convert Lowercase to Uppercase

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100];
	cout<<"Enter the String in lowercase : ";
	fgets(str,100,stdin);
	for(int i=0;i<strlen(str);i++){
		if(isalpha(str[i]))
			str[i]=toupper(str[i]);
	}
	cout<<"The string in uppercase is :\n";
	cout<<str;
	return 0;
}