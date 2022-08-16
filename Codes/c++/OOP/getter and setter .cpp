#include<bits/stdc++.h>
using namespace std;

class Example {
private:
    int x;
    int pass;
    
public:
    Example(int p){
        pass = p;
    }
    
    void setter(int a,int p){
        if(pass == p){
            x = a;
        }else {
            cout << "password didn’t match\n";
        }
    }
    
    int getter(int p){
        if(pass == p){
            return x;
        }else{
            cout << "password didn’t match\n";
            return -1;
        }
    }
    
};

int main(){
    Example r(241);
    r.setter(13,241);
    cout << r.getter(241) << '\n';
}

/*

    constructor
    
    getter and setter 
    
    private data retrive করে

*/