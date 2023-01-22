//prog26.cpp
//Find Power of Number

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double b,e;
	cout<<"Enter the base:";
	cin>>b;
	cout<<"Enter the exponent :";
	cin>>e;
	cout<<"The  "<<b<<" raised to power of "<<e<<" is "<<pow(b,e)<<endl;
	return 0;
}