#include <stdio.h>
#include<math.h>

void sort(int *a,int *b){
    if(*a<*b) return;
    else{
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    sort(&a,&b);
   // printf("%d %d %d\n",a,b,c);
    sort(&b,&c);
   // printf("%d %d %d\n",a,b,c);
    sort(&a,&b);
    
    printf("%d %d %d\n",a,b,c);
    
    return 0;
}

/*


*/
    