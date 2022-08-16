#include<stdio.h>

void makeDouble(int *x){
    *x *= 2;
}

int main(){
    int x = 13;
    makeDouble(&x);
    printf("%d\n",x);
}

/*

    make double

*/