//prog13.cpp
//Check given number is Prime number or not

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	bool prime=true;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			prime=false;
			break;
		}
	}
	if(prime)
		cout<<num<<" is a prime number.\n";
	else
		cout<<num<<" is not a prime number.\n";
	return 0;
}