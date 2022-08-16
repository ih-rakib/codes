#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
};

int main(){
    Student Rakib;
    strcpy(Rakib.name, "Ikramul Hasan Rakib");
    Rakib.roll = 03;
    
    cout << Rakib.name << '\n';
    cout << Rakib.roll << '\n';
}

/*

    Class : 01

*/