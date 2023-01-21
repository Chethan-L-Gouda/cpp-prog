//prog7.cpp
//raise any number X to power N

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double b,e;
	cout<<"Enter the base:";
	cin>>b;
	cout<<"Enter the exponent :";
	cin>>e;
	cout<<"The value of "<<b<<" raised to "<<e<<" is "<<pow(b,e)<<endl;
	return 0;
}