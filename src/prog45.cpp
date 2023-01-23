//prog45.cpp
//Program to Delete Vowels from String

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100],fin[100]="";
	cout<<"Enter the string: ";
	fgets(str,100,stdin);
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(!(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='u'||str[i]=='U'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O')){
			fin[count]=str[i];
			count++;
		}
	}
	fin[count+1]='\0';
	cout<<"The obtained string after removing vowels:\n";
	cout<<fin<<endl;
	return 0;
}