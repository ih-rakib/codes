#include <stdio.h>
#include<math.h>

/*

Noamal :

void makeSquare(int square[],int n){
    for(int i=1;i<=n;++i){
        square[i] = i*i;
    }
}

*/

// Using dynamic memory allocation 

int *makeSquare(int n){
    int *square = (int*) malloc(n*sizeof(int));
    for(int i=1;i<=n;++i){
        square[i] = i*i;
    }
    return square;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *sq;
    
    sq = makeSquare(n);
    
    for(int i=1;i<=n;++i){
        printf("%d ",sq[i]);
    }
}

/*

    Dynamic memory allocation 
    
    normal arrray store হয় stack এ
    dynamically করলে স্টোর হয় heap এ।

*/