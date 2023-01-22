//prog22.cpp
//Find HCF of two numbers

#include <iostream>
using namespace std;

int hcf(int a, int b){
	if(b>a) return hcf(b,a);
	if(b==0) return a;
	return hcf(b,a%b);
}
int main(){
	int x,y;
	cout<<"Enter the numbers : ";
	cin>>x>>y;
	cout<<"The hcf of "<<x<<" and "<<y<<" is "<<hcf(x,y)<<endl;
	return 0;
}