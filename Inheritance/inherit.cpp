#include<iostream>
using namespace std;

// This is a base class 
class vehicle{
	public:
		int vehicle_number;
		string name;
		int capacity;
		int mileage;
		
		void cal_mil(){
			cout << "The mileage is : " << mileage << endl;
		}
};

// This is a derived class which inherits the base class i.e. the class members of the base class can be accessed by the derived class
class bus: public vehicle{
	public:
		string school_name;
		
		void print(){
			cout << "The name of the school is: " << school_name << endl;
		}
};

int main(){
	bus a;
	
	// no mileage variable and cal_mil function is in bus class but still bus class can use them as it inherited the vehicle class members
	a.mileage = 40; 
	a.cal_mil();
	
	return 0;
}
