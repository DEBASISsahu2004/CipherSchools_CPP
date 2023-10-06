#include<iostream>
using namespace std;

int main(){
	
	int count = 0;
	
//	while(1){  // the condition in the while loop, until it is true, the loop will run
//		cout<<"choclates ";
//		count++;
//		if(count > 100){
//			break;
//		}
//	}

    for(int i=0; ;i++){  // This statement gets executed when i is 101
        cout << i << " ";
        if(i > 100){
        	break;
    	}
	}
	
	return 0;
}
