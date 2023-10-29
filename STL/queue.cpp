#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> a;

    a.push(5);
    a.push(4);
    a.push(3);

    cout << a.front() << endl;

    a.pop();

    cout << a.back() << endl;

    if(a.empty() == 0){
        cout << "The queue is not empty." << endl;
    }else{
        cout << "Queue is empty" << endl;
    }

    a.pop();
    a.pop();

    if(a.empty() == 0){
        cout << "The Queue is not empty." << endl;
    }else{
        cout << "Queue is empty" << endl;
    }

}