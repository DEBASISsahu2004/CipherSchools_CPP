#include<iostream>
using namespace std;

int sum(int a, int b); //this is function declaration in which body is not written and is declared above main function, which is known as function prototype

int main(){
	int a,b;
	
	a=3;
	b=5;
	
	int c;
	cout<<a<<" "<<b<<endl;  //value of a and b before calling function
	c = sum(3,3);   //function call with parameters 3 & 3
	
	cout<<c<<endl;
	cout<<a<<" "<<b<<endl;   //value of a and b after calling function
	return 0;
}

int sum(int a, int b){   //function definition
	a=10;
	b=11;
	return a+b;  //10+11
}
