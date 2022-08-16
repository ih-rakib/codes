#include<bits/stdc++.h>
using namespace std;

class Example {
public:
    int add(int x,int y){
        cout << "1st one \n";
        return x+y;
    }
    double add(double x,double y){
        cout << "2nd one \n";
        return x+y;
    }
    void add(char c){
        cout << "3rd one \n";
        cout << "Hi " << c << '\n';
    }
};

int main(){
    Example e;
    cout << e.add(2,3) << '\n';
    cout << e.add(2.1,3.7) << '\n';
    e.add('r');
}

/*

    polymorphism 
    
    function overloading 
    
    parameter এর উপর বেস করে ডিসাইড হবে কোন add() function টা কাজ করবে

*/