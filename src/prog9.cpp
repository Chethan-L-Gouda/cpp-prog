//prog9.cpp
//find cube of number using macros

#include <iostream>
#ifndef cube
#define cube(x)(x*x*x)
#endif

using namespace std;

int main(){
	int x;
	cout<<"Enter the number to be cubed : ";
	cin>>x;
	cout<<"The cube of number "<<x<<" is "<<cube(x)<<endl;
	return 0;
}