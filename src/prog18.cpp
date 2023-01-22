//prog18.cpp
//find Fibonacci Series

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of element to be printed from the series : ";
	cin>>n;
	int arr[50];
	arr[0]=0;arr[1]=1;
	for(int i=2;i<n;i++)
		arr[i]=arr[i-1]+arr[i-2];
	cout<<"The fibonacci series is : \n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	return 0;
}