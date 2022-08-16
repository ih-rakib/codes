#include <stdio.h>
#include<math.h>
 
int main ()
{
    int a,b;
    int sum[100];
    
    scanf("%d %d",&a,&b);
    
    int index = 0,remainder=0;
    
    while(a!=0 || b!=0){
        sum[index] = ((a%10)+(b%10)+remainder)%2;
        remainder = ((a%10)+(b%10)+remainder)/2;
        index++;
        a /= 10;
        b /= 10;
    }
    if(remainder){
        sum[index] = remainder;
    }
    
    while(index>=0){
        printf("%d",sum[index]);
        index--;
    }
 
    return 0;
}

/*

    Binary Addition 
    
    Binary subtraction
    
    int res = a + (~b+1);

*/