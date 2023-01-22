//prog17.cpp
//Find number of Digits in any number

#include <iostream>
#include <string>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	int cpy=num,count=0;
	while(cpy != 0){
		count++;
		cpy/=10;
	}
	cout<<"The number of digits in "<<num<<" is "<<count<<endl;
	return 0;
}