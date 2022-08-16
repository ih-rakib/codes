#include<bits/stdc++.h>
using namespace std;

class Student{
    public :
        int id;
        double gpa;
        
        Student(int x,double y){
            id = x;
            gpa = y;
        }
        
        void print(){
            cout << id << ' ' << gpa << '\n';
        }
};

int main() {
    Student Rakib(307,6.75);
    Rakib.print();
    
}

/*

     constructor 
    
     initialize objects while declaring 

*/