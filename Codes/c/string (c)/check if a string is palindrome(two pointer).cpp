#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    scanf("%s",&a);
    
    int l=0,r=strlen(a)-1;
    while(l<r){
        if(a[l]!=a[r]) {
            printf("Not Palindrome\n");
            return 0;
        }
        ++l,--r;
    }
    printf("Palindrome\n");
}

/*

    check if a string is palindrome(two pointer)
    
*/
    