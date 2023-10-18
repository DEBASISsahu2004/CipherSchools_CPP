#include<iostream>
using namespace std;

int main(){
	int a=4;
	float b;
	
	// using * infront of variable name we can make a pointer
	int *p=&a;  // this is a pointer which stores the address of variable
	
	cout<<"The address of a: "<< &a <<endl;
	cout<<"The address of a: "<< p <<endl;
	cout<<"The address of b: "<< &b <<endl;
	cout<<"The value of a: "<< *p << endl;
	
	return 0;
}
