//prog15.cpp
//Print Table of any Number

#include <iostream>
using namespace std;

int main(){
	int num,l;
	cout<<"Enter the number : ";
	cin>>num;
	cout<<"Enter the last multiple : ";
	cin>>l;
	for(int i =1;i<=l;i++)
		cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
	return 0;
}