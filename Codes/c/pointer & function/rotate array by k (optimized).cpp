#include<stdio.h>

void rotateByOne(int a[],int n){
    int first = a[0];
    for(int i=0;i<n-1;++i){
        a[i] = a[i+1];
    }
    a[n-1] = first;
}

void rotateByk(int a[],int n,int k){
    k = k%n;
    for(int i=0;i<k;++i){
        rotateByOne(a,n);
    }
}

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    rotateByk(a,n,k);
    
    for(int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
}


/*

    rotate by 1
    
    1 2 3 4 5
    2 3 4 5 1
    
    rotate by k

    array কে তার length এর সমসংখ্যক বার 
    রোটেট করলে আগের অ্যারেটাই পাওয়া যায়।
    অর্থাৎ k বার রোটেট করা আর k%n বার
    রোটেট করা সেম কাজ।
    
    এতে কোড অপটিমাইজড হয়।
    
*/

    
    