//prog41.cpp
//Program to Convert Uppercase String to Lowercase

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100];
	cout<<"Enter the String in uppercase : ";
	fgets(str,100,stdin);
	for(int i=0;i<strlen(str);i++){
		if(isalpha(str[i]))
			str[i]=tolower(str[i]);
	}
	cout<<"The string in lowercase is :\n";
	cout<<str;
	return 0;
}