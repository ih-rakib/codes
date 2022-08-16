#include <stdio.h>
#include<math.h>
#include<string.h>

int Strlen(char s[]){
    int idx = 0,length=0;
    while(s[idx]!='\0'){
        idx++;
        length++;
    }
    return length;
    
    // pointer দিয়েও করা যাবে
    /*
    
    int ans = 0;
    char *ptr = s;
    while(*ptr!=\0'){
        ptr++;
        ans++;
    }
    return ans;
    
    এরকম করলেও হয়!
    
    while(*ptr != '\0'){
        ptr++;
    }
    return ptr-s;
    
    */
}

int main()
{
    char str[] = "Hello World";
    int len = Strlen(str);
    printf("Length = %d\n", len);
}

/*

    Implementing string functions manually

*/