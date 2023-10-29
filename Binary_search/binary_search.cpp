#include<iostream>
using namespace std;

void simple(int* arr, int l, int r, int val){
    // We have to check whether val is present in the array between the indexes l and r

    // Here we are comparing the "val" which we have to search with each and every element in the array
    for(int i=l; i<r+1; i++){
        if(arr[i] == val){
            cout << "Congrats, your value " << val << " is present in the array" << endl;
            return;
        }
    }

    cout << "Sorry, your value " << val << " is not present in the array" << endl;
    return;
}

int binary(int* arr, int l, int r, int val){
    if(r >= l){
        int mid = l + (r - l) / 2;

        if(arr[mid] == val){
            return mid;
        }else if(arr[mid] > val){
            // Then the val will definitely lie on the left side of the array
            return binary(arr, l, mid-1, val);
        }else{
            return binary(arr, mid+1, r, val);
        }
    }

    return -1;
}

int main(){
    int arr[7] = {1, 2, 4, 5, 8, 11, 23};
    int size = 7;

    simple(arr, 0, 6, 13); // 13 is not present in the array
    simple(arr, 0, 6, 23); // 23 is present in the array

    int a = binary(arr, 0, 6, 13);
    int b = binary(arr, 0, 6, 23);

    if(a == -1){
        cout << "Your value 13 is not present in the array" << endl;
    }

    if(b != -1){
        cout << "Your value 23 is present in the array" << endl;
    }
    return 0;
}