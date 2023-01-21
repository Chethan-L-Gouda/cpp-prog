//prog8.cpp
//Convert Days Into Years, Weeks and Days

#include <iostream>
using namespace std;

int main(){
	int days;
	cout<<"Enter the number of days : ";
	cin>>days;
	int y,m,w;
	y=days/365;
	days=days%365;

	m=days/30;
	days=days%30;

	w=days/7;
	days=days%7;

	cout<<y<<" years,"<<m<<" months,"<<w<<" weeks,"<<days<<" days.\n";

	return 0;
}