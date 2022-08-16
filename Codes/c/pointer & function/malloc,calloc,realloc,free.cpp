#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int *a = (int*) malloc(n*sizeof(int));
    a = realloc(a,n*2*sizeof(int));
    for(int i=0;i<n*2;++i){
       a[i] = 7;
    }
    
    for(int i=0;i<n*2;++i){
        printf("%d ",a[i]);
    }
}
    
    
/*

    Memory 
    
    1. Stack : Compile time memory
    2. Heap : Runtime memory
    
    calloc(n,sizeof(int));
    calloc 0 দিয়ে initialize করে নেয়।
    malloc garbage ভ্যালু দিয়ে মেমোরী নেয়
    free(a) এটা মেমোরীকে ফ্রী করে দেয়,
    অর্থাৎ garbage নিয়ে আসে calloc এর গুলোতেও
    
    
    int *a = (int*) calloc(n,sizeof(int));
    
    malloc : dynamic allocate 
    calloc : initialize 0
    realloc : new size allocation 
    free : clean up memory 

*/