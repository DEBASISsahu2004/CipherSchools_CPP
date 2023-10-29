#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> a;

    a["debasis"] = 1;
    a["programming"] = 2;
    a["sahu"] = 3;

    cout << "The value of debasis in the hash table is " << a["debasis"] << endl;
    cout << "The value of c++ in the hash table is " << a["c++"] << endl;

    for(auto j = a.begin(); j!=a.end(); j++){
        cout << "The key will be " << j->first << " The value of key will be " << j->second << endl;
    }

    return 0;
}