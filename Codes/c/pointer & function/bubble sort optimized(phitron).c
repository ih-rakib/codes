#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

void swap(int *a,int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool is_sorted(int n,int a[]){
    for(int i=0;i+1<n;++i){
        if(a[i]>a[i+1]) return false;
    }
	return true;
}

void bubbleSort(int a[],int n) {
    for(int steps = 0; steps<n; ++steps) {
        for(int j=0; j+1<n; ++j) {
            if(a[j]>a[j+1]) {
                swap(&a[j],&a[j+1]);
                printf("swap %d with %d\n",j,j+1);
                for(int i=0; i<n; ++i) {
                    printf("%d ",a[i]);
                }
                printf("\n");
            }
            
        }
		printf("Steps no. %d done\n\n",steps);
		if(is_sorted(n,a)) return;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i) {
        scanf("%d",&a[i]);
    }

    bubbleSort(a,n);

    for(int i=0; i<n; ++i) {
        printf("%d ",a[i]);
    }

}
