#include<stdio.h>

void rotateByOne(int a[],int n){
    int first = a[0];
    for(int i=0;i<n-1;++i){
        a[i] = a[i+1];
    }
    a[n-1] = first;
}

void rotateByk(int a[],int n,int k){
    for(int i=0;i<k;++i){
        rotateByOne(a,n);
        printf("Iteration %d\n",i+1);
        for(int i=0;i<n;++i){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    /* rotateByOne(a,n);
    
    for(int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
    
    */
    
    printf("\n");
    rotateByk(a,n,k);

}


/*

    rotate by 1
    
    1 2 3 4 5
    2 3 4 5 1
    
    rotate by k


*/

    
    