#include<bits/stdc++.h>
using namespace std;

class Parent {
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk,int pass){
        taka = tk;
        password = pass;
    }
    friend void tellSecret(Parent *ptr); // friend function 
};

void tellSecret(Parent *ptr){
    cout << ptr->taka << " " << ptr->password << '\n';
}

int main(){
    Parent pt(1700,2597);
    tellSecret(&pt);
}

/*

     friend function 

*/