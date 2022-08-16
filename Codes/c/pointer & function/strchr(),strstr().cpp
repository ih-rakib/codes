#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main() {
    char s[] = "Hello";
    char *pos = strchr(s,'l'); // 1st position বের করে
    char *pos1 = strstr(s,"el");
    if(!pos1){
        printf("Not found\n");
    }else {
        printf("Found at index %d\n", pos1-s);
    }

}
    
    
/*

    strchr(string, char) : char এর ১ম পজিশনে পয়েন্ট করে
    strstr(string, str) : string এর ১ম পজিশনে পয়েন্ট করে
    
    

*/