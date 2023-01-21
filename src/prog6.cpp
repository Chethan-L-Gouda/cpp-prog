//prog6.cpp
//convert inches into yard, feet and inches

#include <iostream>
using namespace std;

int main(){
	double inch;
	cout<<"Enter the measurment in inches :";
	cin>>inch;
	cout<<"feets = "<<(inch/12)<<"\nyard = "<<(inch/36)<<endl;
	return 0;
}