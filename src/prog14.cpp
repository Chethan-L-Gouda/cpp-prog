//prog14.cpp
//find Factorial of a Number

#include <iostream>

using namespace std;

int fact(int n){
	if(n>1)
		return n*fact(n-1);
	return 1;
}
int main(){
	int num;
	cout<<"Enter th number : ";
	cin>>num;
	cout<<"The factorial of "<<num<<" is "<<fact(num)<<endl;
	return 0;
}