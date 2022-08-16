#include<stdio.h>
#include<string.h>

void makeEqualToAverage(int *pa,int *pb){
    int avg = (*pa+*pb)/2;
    *pa = *pb = avg;
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    
    makeEqualToAverage(&a,&b);
    
    printf("%d %d\n",a,b);
}


/*

    pass by address/reference
    
*/

    
    