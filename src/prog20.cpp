//prog20.cpp
//Find Largest Number among three numbers

#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the 3 numbers : ";
	cin>>a>>b>>c;
	int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
	cout<<"The highest number is : "<<max<<endl;
	return 0;
}