#include<iostream>
using namespace std;
// Execute AND and OR statements and print out the boolean :
int main(){
	
	int a, b;
	int c, d;
	
	cout << "Input 4 integers a,b,c and d"<<endl;
	
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	// statement : a>b
	
	cout << (a>b && c>d) << endl;
	cout << (a>b || c>d) << endl;
	
	//c++ interprets true as 1
	//c++ interprets false as 0
	return 0;
}
