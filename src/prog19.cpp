//prog19.cpp
//Check given number is Armstrong or Not

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int num,arm=0,cpy,count=0;
	cout<<"Enter the number : ";
	cin>>num;
	cpy=num;
	while(cpy != 0){
		cpy/=10;
		count++;
	}
	cpy=num;
	while(cpy != 0){
		arm=arm+pow(cpy%10,count);
		cpy/=10;
	}

	if(num == arm)
		cout<<"The number "<<num<<" is an armstrong number.\n";
	else
		cout<<"The number "<<num<<" is not an armstrong number.\n";
	return 0;
}