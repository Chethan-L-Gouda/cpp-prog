//prog2.cpp
//swap 2 numbers without 3rd variable

#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter the values of a and b : ";
	cin>>a>>b;
	cout<<"Before Swapping:\na = "<<a<<"\nb = "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping:\na = "<<a<<"\nb = "<<b<<endl;
	return 0;
}