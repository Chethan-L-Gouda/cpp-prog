//prog23.cpp
//find LCM of two numbers

#include <iostream>
using namespace std;

int hcf(int a, int b){
	if(b>a) return hcf(b,a);
	if(b==0) return a;
	return hcf(b,a%b);
}
int lcm(int a,int b){
	int h = hcf(a,b);
	return (a*b)/h;
}
int main(){
	int x,y;
	cout<<"Enter the numbers : ";
	cin>>x>>y;
	cout<<"The lcm of "<<x<<" and "<<y<<" is "<<lcm(x,y)<<endl;
	return 0;
}