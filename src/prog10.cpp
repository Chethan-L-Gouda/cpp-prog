//prog10.cpp
//Check Character is Uppercase, Lowercase, Digit or Special Character

#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char ch;
	cout<<"Enter the character : ";
	cin>>ch;
	if(isdigit(ch))
		cout<<"It is a digit.\n";
	else if(isupper(ch))
		cout<<"It is upper case character.\n";
	else if(islower(ch))
		cout<<"It is lower case character.\n";
	else
		cout<<"It is a special character.\n";
	return 0;
}