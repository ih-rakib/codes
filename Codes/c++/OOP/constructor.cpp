#include<bits/stdc++.h>
using namespace std;

class Example {
public:
    int x,y,z;
    
    Example(int a,int b,int c){
        x = a;
        y = b;
        z = c;
    }
    
};

int main(){
    Example r(1,2,3);
    
    cout << r.x << " " << r.y << " " << r.z << '\n';
}

/*

    constructor
    
    যে নামের ক্লাস সে নামের অবজেক্ট! 

*/