//prog48.cpp
//Program to reverse all strings stored in an array

#include <iostream>
#include <algorithm>
using namespace std;

void display(string str[],int n){
	for(int i=0;i<=n;i++)
		cout<<str[i]<<endl;
}
int main(){
	string str[20];
	cout<<"Enter the number of strings : ";
	int num;cin>>num;
	for(int i=0;i<=num;i++){
		getline(cin,str[i]);
	}
	cout<<"The entered strings are : \n";
	display(str,num);

	for(int i=0;i<=num;i++)
		reverse(str[i].begin(),str[i].end());

	cout<<"After revering : \n";
	display(str,num);
	return 0;
}