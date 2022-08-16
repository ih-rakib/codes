#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

// Using pointer

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",a+i); // a+i=&a[i]=&*(a+i)
    }
    int prod = 1;
  
    for(int i=0;i<n;++i){
        prod *= *(a+i);
    }
    printf("%d\n",prod);
    
}
    