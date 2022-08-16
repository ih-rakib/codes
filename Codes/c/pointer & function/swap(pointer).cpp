#include<stdio.h>

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 13,y=97;
    swap(&x,&y);
    printf("x = %d\ny = %d\n",x,y);
}

/*

    swap two number

*/