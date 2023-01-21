//prog5.cpp
//generate random numbers

#include <iostream>
using namespace std;

int main(){
	srand(time(0));
	cout<<"The generated random number is "<<rand()<<endl;
	return 0;
}