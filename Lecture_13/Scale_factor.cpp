#include<iostream>
using namespace std;
int main(){
	int a=5;
	
	int *x;
	x=&a;
	
	cout<<"The address of a, which is stored in the pointer x is: "<<x<<endl;
	cout<<"The value of x+1 is: "<<x+1<<endl;
	cout<<"The value of x+2 is: "<<x+2 << endl;
	
	int b[5];
	int *z = &b[0];
	
	for(int i=0;i<5;i++){
		cout<<&b[i]<<endl;
	}
	return 0;
}
