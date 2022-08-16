#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

/*
void makeCopy(int n,int in[],int out[]){
    for(int i=0;i<n;++i) out[i] = in[i];
}
*/

// Using pointer

int *makeCopy(int n,int in[]){
    int *out = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;++i) out[i] = in[i];
    return out;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int *b = makeCopy(n,a);
    for(int i=0;i<n;++i){
        printf("%d ",b[i]);
    }

}
    