#include<iostream>
using namespace std;

class Student{
	public: 
	
	string name;
	int attendance;
	float total_marks;
	
	void calculate_percentage(){
		cout << total_marks << "%";
	}
};

class Bank_client{
	private:
		// class members
		string name ;
		int credit_number;
		int cvv ;
		string user_name;
		string password;
		
		public:
			// this function can be called outside as this is public function
			// Private members can be accessed inside class
			void insert(string n, int c){
				name = n;
				cvv = c;
			}
			
			void print(){
				cout << name << " " << cvv;
			}
};

int main(){
	// Student is the class and a, b, c are the object of the class
	
//	Student a, b, c;
	// We can assign these data as they are public
//	a.name = "debasis";
//	a.attendance = 93;
//	a.total_marks = 90;
//	a.calculate_percentage();
	
	Bank_client a;
	// We cannot assign these data as they are private
//	a.name = "debasis";
//	a.password = "rdadf";
//	a.cvv = 000;
//	a.credit_number = 234875933;
//	cout << a.name;
	a.insert("debasis", 4000);
	a.print(); // This function will work as this is public 
	
}
