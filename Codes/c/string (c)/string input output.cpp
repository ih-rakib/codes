#include<stdio.h>
#include<string.h>

int main() {

    char s[] = "I love Kashmir.";
    printf("%s\n",s);
    printf("%c\n",s[1]);
    puts(s);
    printf("\n");
    printf("Enter your name : ");

    char name[100];
    //scanf("%s",name); // & is not needed
    //printf("Hello %s.", name); 
    //gets(name);
    fgets(name,10,stdin); // to avoid buffer overflow
    printf("Hello %s.\n",name);
}

/*
    
    scanf : token by token input নেয়
    gets  : new line পর্যন্ত  নেয় ("\n")
    fgets : buffer overflow ঠেকায়
    gets এখানে কাজ করতেছেনা!
    
*/
    