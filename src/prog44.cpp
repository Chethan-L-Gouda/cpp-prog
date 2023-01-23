//prog44.cpp
//Program to Delete Words from String

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100],fin[100]="";
	cout<<"Enter the string: ";
	fgets(str,100,stdin);
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(!isalpha(str[i])){
			fin[count]=str[i];
			count++;
		}
	}
	fin[count+1]='\0';
	cout<<"The obtained string after removing alphabet:\n";
	cout<<fin<<endl;
	return 0;
}