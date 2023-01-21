//prog12.cpp
//Check Whether a character is Vowel or Consonant

#include <iostream>
#include <cctype>

using namespace std;

int main(){
	char ch;
	cout<<"Enter the character : ";
	cin>>ch;
	if(isalpha(ch)){
		ch=tolower(ch);
		if(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			cout<<"It is an vowel.\n";
		else
			cout<<"It is a consonant.\n";
	}else
		cout<<"The character might not be a alphabet.\n";
	return 0;
}