//prog35.cpp
//Program to Find Number of Vowels, Consonants, Digits, Spaces in String

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
	char str[100];
	cout<<"Enter the string : ";
	fgets(str,100,stdin);
	int ns=0,nv=0,nc=0,nd=0;
	for(int i=0;i<strlen(str);i++){
		if(isalpha(str[i])){
			str[i]=tolower(str[i]);
			if(str[i] == 'a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
				nv++;
			else
				nc++;
		}
		else if(isdigit(str[i]))
			nd++;
		else if(str[i]==' ')
			ns++;
	}
	cout<<"The string has : \n"<<nv<<" vowels\n"<<nc<<" consonants\n"<<nd<<" digits\n"<<ns<<" spaces\n";
	return 0;
}