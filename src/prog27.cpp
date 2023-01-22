//prog27.cpp
//Program for Pascal Triangle

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of rows : ";
	cin>>n;
	int arr[n][n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0||i==j)
				arr[i][j]=1;
			else
				arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}