#include<bits/stdc++.h>
using namespace std;

class Parent {
public:
    int x;

private:
    int y;
 
protected:
    int z;
   
public:
    Parent(int a,int b,int c){
        x = a;
        y = b;
        z = c;
    }
};

class Child : public Parent { // এখানে public বা private দ্বারা বুঝায় parent এর public data গুলো child এ কীরকম(public নাকি private) হবে?
public:
    int xx;
    Child(int aa,int a,int b,int c) : Parent(a,b,c){
        xx = aa;
    }
    
    void tellMe(){
        cout << "protected value : " << z << '\n';
        // y isn't accessible cause it’s private
    }
    
};

int main(){
    Parent p(10,20,30);
    Child ch(300,10,20,30);
    ch.tellMe();
}

/*

    constructor
    
    getter and setter 02
    
    private data retrive করে

*/