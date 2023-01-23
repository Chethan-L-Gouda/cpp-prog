//prog40.cpp
//Program to Convert Uppercase Character to Lowercase

#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char ch;
	cout<<"Enter the uppercase character : ";
	cin>>ch;
	if(isalpha(ch))
		ch=tolower(ch);
	cout<<"The lower case of character is : "<<ch<<endl;
	return 0;
}