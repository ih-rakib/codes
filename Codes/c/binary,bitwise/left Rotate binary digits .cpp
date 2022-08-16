#include <stdio.h>
#include<math.h>

#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE*2-1

void decToBin(int num){
    int rem,bin=0,base=1;
    while(num!=0){ 
        rem = num%2; 
        bin = bin+(rem*base); 
        base = base*10; 
        num = num/2; 
    } 
    
    printf("Binary = %d\n",bin);
}

int rotateLeft(int a,int rotate){
    rotate %= INT_BITS;
    int MSB;
    
    while(rotate--){
        MSB = a&(1<<INT_BITS);
        a = a<<1;
        a |= MSB;
    }
    return a;
}
 
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    decToBin(a);
    
    int x = rotateLeft(a,b);
    printf("After Rotation ");
    decToBin(x);
    
    return 0;
}

/*

    Rotate left
    9 : 00001001
    left rotate 1 = 00010010 = 18

*/