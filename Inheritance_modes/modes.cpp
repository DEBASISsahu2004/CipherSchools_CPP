#include<iostream>
using namespace std;

class Vehicle{
    public:
        int mileage = 65;

        void display1(){
            cout << "The mileage is: " << mileage << endl;
        }

    private:
        string c_name = "Toyota";

        void display2(){
            cout << "Company name is: " << c_name << endl;
        }

    protected:
        int seater = 4;

        void display3(){
            cout << "This Vehicle is " << seater << " seater" << endl;
        }
};

class Bus : public Vehicle{
    public:
        void display(){
            cout << "Mileage: " << mileage << endl;
            // c_name is private in the base class and cannot be accessed here
            cout << "Seater: " << seater << endl;
        }
};

class Car : private Vehicle{
    public:
        void display(){
        cout << "Mileage: " << mileage << endl;
        // c_name is private in the base class and cannot be accessed here
        cout << "Seater: " << seater << endl;
        }
};

class Auto : protected Vehicle{
    public:
        void display(){
        cout << "Mileage: " << mileage << endl;
        // c_name is private in the base class and cannot be accessed here
        cout << "Seater: " << seater << endl;
        }
};

int main(){
    Bus a;
    Car b;
    Auto c;

    a.mileage = 25;
    // a.c_name = "Mazda"; // private member variable it is hidden
    // a.seater = 5; // protected member variable
    a.display();

    // b.mileage = 36; // private member variable
    // b.c_name = "Mazda"; // private member variable it is hidden
    // b.seater = 5; // private member variable
    b.display();

    // c.mileage = 40; // protected member variable
    // c.c_name = "Mazda"; // private member variable it is hidden
    // c.seater = 5; // protected member variable
    c.display();

    return 0;
}
