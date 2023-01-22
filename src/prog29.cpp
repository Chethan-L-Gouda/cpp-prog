//prog29.cpp
//Find Frequency of Characters in String

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[50],ch;
	cout<<"Enter the string : ";
	fgets(str,50,stdin);
	cout<<"Enter the character : ";
	cin>>ch;
	int count=0;
	for(int i=0;i<strlen(str);i++)
		if(str[i]==ch)
			count++;
	cout<<"The character '"<<ch<<"' occurs "<<count<<" times in the string \""<<str<<"\".\n";
	return 0;
}