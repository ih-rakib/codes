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
    int a,b;
    scanf("%d %d",&a,&b);
    
    sort(&a,&b);
    
    printf("%d %d\n",a,b);
    
    return 0;
}

/*


*/
    