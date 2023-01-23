//prog47.cpp
//Program for Permutation of String

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void perm(string &a,int l,int r){
	if(l==r)
		cout<<a<<endl;
	else{
		for(int i=l;i<=r;i++){
			swap(a[l],a[i]);
			perm(a,l+1,r);
			swap(a[l],a[i]);
		}
	}
}
int main(){
	string str;
	cout<<"Enter the string :";
	getline(cin,str);
	int num=str.length()-1;
	cout<<"The permutations are :\n";
	perm(str,0,num);
	return 0;
}