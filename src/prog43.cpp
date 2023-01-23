//prog43.cpp
//Program to Count Words in String

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100];
	cout<<"Enter the string : ";
	fgets(str,100,stdin);
	int count =0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' ')
			count++;
	}
	cout<<"The number of words is : "<<count+1<<endl;
	return 0;
}