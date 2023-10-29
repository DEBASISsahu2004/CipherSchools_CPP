#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Vector is an array whose size is not fixed and will allocate memory space every time a new element is added to it
    vector<int> arr;

    for(int i=0; i<5; i++){
        arr.push_back(i+1);
    }

    cout << "The size of the vector is " << arr.size() << endl;

    arr.pop_back();
    cout << "The size of the vector is " << arr.size() << endl;

    cout << "The first element of the vector is " << arr[0] << endl;

    for(auto j=arr.begin(); j<arr.end(); j++){
        cout << *j << " ";
    }

    cout << endl << "The capacity of the vector is " << arr.capacity() << endl;

    return 0;
}