#include<iostream>
using namespace std;

class cord{
	public:
		float a, b;
		
		cord operator+(cord const& obj){
			cord z;
			
			z.a = this->a + obj.a;
			z.b = this->b + obj.b;
			
			return z;
		}
		
		void dis(float a){
			float di = (this->a - a)*(this->a - a) + (this->b - b)*(this->b - b);
			cout << di << endl;
		}
		
		void dis(float a, float b){
			float di = (this->a - a)*(this->a - a) + (this->b - b)*(this->b - b);
			cout << di << endl;
		}
		
		void dis(float a, float b, float c){
			float di = (this->a - a)*(this->a - a) + (this->b - b)*(this->b - b);
			cout << di << endl;
			cout << "Value of c is " << c << endl;
		}
};

int main(){
	cord x, y, z;
	
	x.a = 3;
	x.b = 4;
	
	x.dis(2); // Calculate the distance between point (x.a, x.b) and (2, 0)
	x.dis(2, 5); // Calculate the distance between point (x.a, x.b) and (2, 5)
	x.dis(2, 5, 6); // Calculate the distance between point (x.a, x.b) and (2, 5) and print the value of c

	y.a = 5;
	y.b = 6;
	
	z = x+y; // Add the coordinates of x and y and store the result in z

	cout << "The coordinates after addition are " << z.a << " " << z.b << endl;
	
	return 0;
}
