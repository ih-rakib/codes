#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    scanf("%s",&a);
    
    int counter[26] = {0};
    
    for(int i=0;i<strlen(a);++i){
        counter[a[i]-'a'] = 1;
    }
    
    int size = sizeof(counter)/sizeof(counter[0]);
    
    for(int i=0;i<26;++i){
        if(counter[i]==0){
            printf("Does not contain all alphabet\n");
            return 0;
        }
    }
    printf("Contains all alphabet\n");
}

/*

    string contain all alphabet or not
    
    for(char value='a';value<='z';++value){
        if(counter[value-'0']==0){
            printf("Does not contain all alphabet\n");
            return 0;
        }
    }
    printf("Contains all alphabet\n");
    
*/
    