#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

void swap(int *a,int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[],int n) {
    for(int steps = 0; steps<n; ++steps) {
        int minElement = a[steps],pos=steps;
        for(int j=steps; j<n; ++j) {
            if(a[j]<minElement) {
                minElement = a[j];
                pos = j;
            }
        }
        swap(&a[steps],&a[pos]);

        printf("Steps = %d\n",steps);
        printf("Min : %d at pos %d\n",minElement,pos);
        for(int i=0; i<n; ++i) {
            printf("%d ",a[i]);
        }
        printf("\n\n") ;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i) {
        scanf("%d",&a[i]);
    }

    selectionSort(a,n);

    for(int i=0; i<n; ++i) {
        printf("%d ",a[i]);
    }

}
