#include<stdio.h>
#include<string.h>

void swap(char *a,char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void toBinary(unsigned int x,char s[]){
    int idx = 0;
    while(x){
        int d = x%2;
        x /= 2;
        s[idx] = '0'+d;
        idx++;
    }
    s[idx] = '\0';
    
    for(int i=0;i<idx/2;++i){
        swap(&s[i],&s[idx-i-1]);
    }
    
}

int main(){
    char s[100];
    unsigned int x;
    scanf("%d",&x);
    toBinary(x,s);
    printf("%s\n",s);

    return 0;

}

/*

    10    
    ans = 1010
    7
    ans = 111

*/