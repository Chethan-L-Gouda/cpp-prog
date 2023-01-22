//prog25.cpp
//find sum of digits of a number

#include <iostream>
using namespace std;

int main(){
	int num,cpy,sum=0;
	cout<<"Enter the number : ";
	cin>>num;
	cpy=num;
	while(cpy != 0){
		sum=sum+(cpy%10);
		cpy/=10;
	}
	cout<<"The sum of the digits in "<<num<<" is "<<sum<<endl;
	return 0;
}