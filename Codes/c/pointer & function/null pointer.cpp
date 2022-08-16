#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Hello";
    char *ch = strchr(str,'l');
    printf("%c\n",*ch); // l
    printf("%p %d\n",ch,*ch);
    
    char *first = str;
    printf("%d\n",ch-first); // index of l : 2
    char *ch1 = strchr(str,'a');
    // printf("%c\n",*ch1); // nil or error
    // printf("%p %d\n",ch1,*ch1); // empty address or null pointer
    
    if(!ch1){
        printf("No Occurrence, found null \n");
    }else {
        printf("Found\n");
    }
    
}

/*

    Null pointer :
    
    কোনো একটা ভ্যালুর অনুপস্থিতি বুঝাতে null-pointer
    ব্যবহার করা হয়

*/