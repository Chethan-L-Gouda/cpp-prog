//prog37.cpp
//Program to Sort Elements in Lexicographical Order
#include <iostream>
#include <cstring>
using namespace std;
void display(char [][50],int);
int main(){
	char str[20][50];
	cout<<"Enter the number of element :";
	int num;
	cin>>num;
	for(int i=0;i<=num;i++){
		fgets(str[i],50,stdin);
	}
	cout<<"The entered words are : \n";
	display(str,num);char temp[50];
	for(int i=0;i<=num;i++){
		for(int j=0;j<num;j++)
			if(strcmp(str[j],str[j+1])>0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
	}
	cout<<"After lexicological arrangment :\n";
	display(str,num);
}
void display(char str[][50],int n){
	for(int i=0;i<=n;i++)
		cout<<str[i];
}