//prog38.cpp
//Program to Swap Two Strings

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char temp[50],str1[50],str2[50];
	cout<<"Enter the string1:";
	fgets(str1,50,stdin);
	cout<<"Enter the string2:";
	fgets(str2,50,stdin);

	cout<<"Before Swapping : \n"<<"String1 = "<<str1<<"\nString2 = "<<str2<<endl;
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
	cout<<"Before Swapping : \n"<<"String1 = "<<str1<<"\nString2 = "<<str2<<endl;
	
	return 0;
}