#include<iostream>
using namespace std;

int main(){
	
	//	int i = 1;  		//Initialization
	//	while( i < 101){   //condition
	//		cout << i << " ";   //loop
	//		i++;  //update
	//	}
	
    int input;
    
    //guess the number 65 
    //the user has 100 chances
    
    int i = 100;
    
    for(i=1; i<101; i++){
    	cin >> input;
    	if(input == 65){   //only takes place if input is exactly 65
    		cout << "congrats you have guessed correct";
    		break;
		}
	}
	
	return 0;
}
