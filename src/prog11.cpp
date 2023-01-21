//prog11.cpp
//Find All Roots of a Quadratic Equation

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a,b,c,disc,r1,r2,ip,rp;
	cout<<"Enter the coefficients of the unknown : ";
	cin>>a>>b>>c;
	if(a==0){
		cout<<"It is not a quadratic equation.\n";
		exit(0);
	}
	disc=(b*b)-(4*a*c);
	if(disc==0){
		cout<<"The roots are real and equal.\n";
		r1=(-b)/(2*a);
		cout<<"Root1 = Root2 = "<<r1<<endl;
	}else if(disc>0){
		cout<<"The roots are real and distinct.\n";
		r1=(-b+sqrt(disc))/(2*a);
		r2=(-b-sqrt(disc))/(2*a);
		cout<<"Root1 = "<<r1<<"\nRoot2 = "<<r2<<endl;
	}else if(disc<0){
		cout<<"The roots are real and distinct.\n";
		rp=(-b)/(2*a);
		ip=(sqrt(-disc))/(2*a);
		cout<<"Root1 = "<<rp<<"+"<<ip<<"i"<<"\nRoot2 = "<<rp<<"-"<<ip<<"i"<<endl;
	}
	return 0;
}