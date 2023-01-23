//prog42.cpp
//Program to Remove Spaces from String

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100],nstr[100];
	cout<<"Enter the string : ";
	fgets(str,100,stdin);
	int count =0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' ')
			continue;
		nstr[count]=str[i];
		count++;
	}
	nstr[count]='\0';
	cout<<"The string without spaces is :\n";
	cout<<nstr;
	return 0;
}