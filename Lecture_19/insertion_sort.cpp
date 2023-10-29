#include <iostream>
using namespace std;

int main(){
	int a[6];

    cout << "Enter 6 elements: ";
	for(int i = 0; i < 6; i++){
		cin >> a[i];
	}

	int key;
	for(int j = 1; j < 6; j++){
		key = a[j];
		int i = j - 1;
		
		while(a[i] > key && i >= 0){
			a[i+1] = a[i];
			i--;
		}	
		a[i+1] = key;
	}
	
    cout << "Sorted elements are: ";
	for(int i = 0; i < 6; i++){
		cout << a[i] << " ";
	}
    
	return 0;
}