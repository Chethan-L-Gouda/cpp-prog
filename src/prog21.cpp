//prog21.cpp
//Check Number is Palindrome or not

#include <iostream>
using namespace std;

int main(){
	int num,cpy,rev=0;
	cout<<"Enter the number : ";
	cin>>num;
	cpy=num;
	while(cpy != 0){
		rev=rev*10+(cpy%10);
		cpy/=10;
	}
	if(num == rev)
		cout<<"The number "<<num<<" is a palindrome number.\n";
	else
		cout<<"The number "<<num<<" is not a palindrome number.\n";
	return 0;
}