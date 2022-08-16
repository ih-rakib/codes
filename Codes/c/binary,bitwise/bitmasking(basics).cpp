#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Binary{
    char str[50];
};

char *strrev(char *str){
    if(!str || ! *str) return str;
    
    int i=strlen(str)-1,j=0;
    char ch;
    while(i>j){
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

struct Binary toBinary(unsigned int x,int k){ 
    struct Binary ans;
    int idx = 0; 
    while(x){ 
        int d = x%2; 
        x /= 2; 
        ans.str[idx] = '0'+d; 
        idx++; 
    } 
     
    for(int i=idx;i<k;++i) ans.str[i] = '0'; 
    ans.str[k] = '\0'; 
    strrev(ans.str);
    
    return ans;
} 

bool getBit(unsigned int mask,int k){
    return (mask & (1<<k));
}

unsigned int setBit(unsigned int mask,int k){
    return (mask | (1<<k));
}

unsigned int clearBit(unsigned int mask,int k){
    return (mask & ~(1<<k));
}

unsigned int flipBit(unsigned int mask,int k){
    return (mask ^ (1<<k));
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d = %s\n",n,toBinary(n,8).str);
    
    for(int i=0;i<8;++i){
        printf("%d'th bit = %d\n",i,getBit(n,i));
        printf("Clear : %s\n",toBinary(clearBit(n,i),8).str);
        printf("Set : %s\n",toBinary(setBit(n,i),8).str);
        printf("Flip : %s\n",toBinary(flipBit(n,i),8).str);
    }
    
    return 0;

}

/*

    bitmasking
    
    get i'th bit
    set i'th bit         // make 1
    clear i'th bit       // make 0
    flip i'th bit        // 0->1,1->0
    
*/