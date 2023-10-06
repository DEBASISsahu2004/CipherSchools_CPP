#include<iostream>
using namespace std;

int main(){
	
	int a[5];
	int i;
	cout<<"Enter 5 integers:"<<endl;
	
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	
	cout<<"The 5 given inputs are: "<<endl;
	
	for(i=0;i<5;i++){
		cout<<a[i];
	}
	
	return 0;
}
