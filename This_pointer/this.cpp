#include<iostream>
using namespace std;

class Student{
	public: 
	
	string name;
	int attendance;
	float total_marks;
	
	void insert(string name, int attendence, float total_marks){
		// This is a pointer which points to the members variable of the class
		this->name = name;
		this->attendance = attendence;
		this->total_marks = total_marks;
	}
	
	void print(){
		cout << this->name << " ";
		cout << this->attendance << " ";
		cout << this->total_marks << " ";
	}
	
};

int main(){
	Student a;
	
	a.insert("debasis", 95, 99);
	a.print();
	
	return 0;
}
