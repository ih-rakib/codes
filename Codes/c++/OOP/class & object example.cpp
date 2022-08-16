#include<bits/stdc++.h>
using namespace std;

class Student{
    public :
        int id;
        double gpa;
        
        void setValue(int x,double y){
            id = x;
            gpa = y;
        }
        
        void print(){
            cout << id << ' ' << gpa << '\n';
        }
};

int main() {
    Student Rakib;
    Rakib.setValue(307,6.75);
    Rakib.print();
    
}

/*

     

*/