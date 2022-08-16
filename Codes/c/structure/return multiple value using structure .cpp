#include<stdio.h>

struct Result{
    int vaghfol;
    int vagshesh;
};

struct Result divide(int a,int b){
    struct Result result;
    /*
    result.vaghfol = a/b;
    result.vagshesh = a%b;
    return result;
    */
    return (struct Result) {a/b,a%b};
}

int main(){
    int a=10,b=3;
    
    struct Result result = divide(a,b);
    
    printf("%d %d\n",result.vaghfol,result.vagshesh);
    
    return 0;

}

/*

    ভাগফল ও ভাগশেষ নির্ণয় 
    10 / 3 
    ভাগফল = 3
    ভাগশেষ = 1

*/