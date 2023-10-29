#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> a;

    a.push(5);
    a.push(4);
    a.push(3);

    cout << a.top() << endl;

    a.pop();

    if(a.empty() == 0){
        cout << "The stack is not empty." << endl;
    }else{
        cout << "Stack is empty" << endl;
    }

    a.pop();
    a.pop();

    if(a.empty() == 0){
        cout << "The stack is not empty." << endl;
    }else{
        cout << "Stack is empty" << endl;
    }

}