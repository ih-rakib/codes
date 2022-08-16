#include <stdio.h>
#include<math.h>

int n;


void add(int a[],int b[],int sum[]) {
    printf("%d\n",n);
    for(int i=0; i<n; ++i) {
        sum[i] = a[i]+b[i];
    }
}

int main()
{
    scanf("%d",&n);
    int a[n],b[n],sum[n];
    for(int i=0; i<n; ++i) sum[i] = 0;
    for(int i=0; i<n; ++i) {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; ++i) {
        scanf("%d",&b[i]);
    }

    add(a,b,sum);

    for(int i=0; i<n; ++i) {
        printf("%d ",sum[i]);
    }

    return 0;
}

/*


*/
