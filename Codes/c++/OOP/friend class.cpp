#include<bits/stdc++.h>
using namespace std;

class Parent {
private:
    int taka;
public:
    Parent(int tk){
        taka = tk;
    }
    friend class AbburBondhu; // এটা না লিখলে এক্সেস করা যাবেনা
};

class AbburBondhu{
public:
    void tellSecret(Parent *ptr){
        cout << ptr->taka << '\n';
    }
};

int main(){
    Parent pt(1700);
    AbburBondhu bondhu;
    bondhu.tellSecret(&pt);
}

/*

     friend class

*/