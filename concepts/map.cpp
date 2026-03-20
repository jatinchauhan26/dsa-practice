#include<iostream>
#include<map>
using namespace std;
int main (){

    map<string,int> m;
    m["tree"] = 1;
    for(auto mp : m ){
        cout << mp.first <<" " << mp.second << endl; 
    }
    return 0;
}


