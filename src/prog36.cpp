//prog36.cpp
//Program to Remove Characters in String Except Alphabets

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100],fin[100]="";
	cout<<"Enter the string: ";
	fgets(str,100,stdin);
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(isalpha(str[i])){
			fin[count]=str[i];
			count++;
		}
	}
	fin[count+1]='\0';
	cout<<"The obtained string after removing everything other than alphabet:\n";
	cout<<fin<<endl;
	return 0;
}