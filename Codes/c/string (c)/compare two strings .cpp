#include<stdio.h>
#include<string.h>

int main() {

    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    int idx = 0;
    while(a[idx]==b[idx] && a[idx]!='\0' && b[idx]!='\0') {
        idx++;
    }
    if(a[idx]=='\0' && b[idx]=='\0') {
        printf("Equal\n");
    } else if(a[idx]=='\0' && b[idx]!='\0') {
        printf("A is Smaller\n");
    } else if(a[idx]!='\0' && b[idx]=='\0') {
        printf("B is Smaller\n");
    } else if(a[idx]<b[idx]) {
        printf("A is Smaller\n");
    } else if(a[idx]>b[idx]) {
        printf("B is Smaller\n");
    }
    
    int val = strcmp(a,b);
    printf("%d\n",val);
}

/*

    Compare two strings
    
    strcmp :
    
    		negative : 1st string is smaller
      zero     : equal
      positive : 2nd string is smaller 

*/
