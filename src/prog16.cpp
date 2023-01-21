//prog16.cpp
//Reverse a Number

#include <iostream>
#include <string>
using namespace std;

int main(){
	int num,cpy,rev=0;
	cout<<"Enter the number : ";
	cin>>num;
	cpy=num;
	while(cpy > 0){
		rev=rev*10+(cpy%10);
		cpy/=10;
	}
	cout<<"The reverse of "<<num<<" is "<<rev<<endl;
	return 0;
}
