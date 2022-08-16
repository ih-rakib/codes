#include<stdio.h>
#include<string.h>

void strrev(char *s){
   int len = strlen(s);
 
   for (int i = 0; i < len/2; i++){        
      char temp   = s[i];
      s[i] = s[len-i-1];
      s[len-i-1] = temp;
   }
}

int main() {
    char a[100],b[100];
    scanf("%s",&a);
    
    strcpy(b,a);
    strrev(b);
    
    int x = strcmp(a,b);
    if(x==0){
        printf("Palindrome\n");
    }else {
        printf("Not Palindrome\n");
    }
    
}

/*

    check if a string is palindrome
    
*/
    