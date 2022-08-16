#include<stdio.h>
#include<string.h>

int main() {  
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int ans = 0,maxVal = a[0],minVal = a[0];
    for(int i=1;i<n;++i){
        if(a[i]>maxVal||a[i]<minVal)
            ans++;
        if(a[i]>maxVal)
            maxVal = a[i];
        if(a[i]<minVal)
            minVal = a[i];
    }
    printf("%d\n",ans);
}
