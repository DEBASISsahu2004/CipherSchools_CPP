#include<iostream>
using namespace std;

class complex{
	public:
		float real, img;
		string name = "NULL";
		
		// constructor has name same as class name, no return type and no need to return anything
		complex(){ // This is a constructor which is called automatically when the object of the class is created
			cout << "Called automatically. " << endl;
		}
		
//		complex(string name){  // This is a parameterised constructor
//			this->name = name;
//		}
		
		void insert(float real, float img){
			this->real = real;
			this->img = img;
		}
		
		void sq(){
			float dist;
			dist = real*real + img*img;
			cout << "The distance from the origin: " << dist << endl;
			cout << name << endl;
		}
		
		// this is a destructor which executes at the end of the program.
		~complex(){
			cout << "Now the use of object is completed so the object is destroyed" << endl;
		}
		
};

int main(){
	complex a;
//	complex a("Debasis"); // if the constructor is parameterised thsn we have to pass value when creating object
	
	a.insert(2, 3);
	a.sq();
	
	return 0;
}
