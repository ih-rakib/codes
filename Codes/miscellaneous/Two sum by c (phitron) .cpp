#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main() {

// O(n)

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);

    int *counter = (int*) calloc(n,sizeof(int));

    for(int i=0;i<n;++i){
        counter[a[i]] = i+1;
    }

    for(int i=0;i<n;++i){
        int x = target-a[i];
        if(x==a[i]) continue;
        if(x<0) continue;
        if(counter[x]) {
            printf("YES\n");
            printf("index %d & %d\n",i+1,counter[x]);
            return 0;
        }
    }
    printf("NO\n");
    
}

    /*

    Bruteforce : O(n^2)

    for(int i=0;i+1<n;++i){
        for(int j=i+1;j<n;++j){
            if(a[i]+a[j]==target){
                printf("YES\n");
                printf("%d %d\n",i,j);
                return 0;
            }
        }
    }
    printf("NO\n");



/*

    Two sum

    5
    3 12 1 4 5
    6


*/