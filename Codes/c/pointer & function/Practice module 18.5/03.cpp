#include <stdio.h>
#include<math.h>

void reverse(int* x){
    int temp = *x;
    int rev = 0;
    while(temp){
        int last = temp % 10;
        rev = (rev*10) + last;
        temp /= 10;
    }
    printf("%d\n",rev);
}

int main()
{
    int n;
    scanf("%d",&n);
    
    reverse(&n);
    
    return 0;
}

/*

    123
    0*10 + 3 = 3
    3*10 + 2 = 32
    32*10 + 1 = 321

*/
    