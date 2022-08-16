#include<stdio.h>
#include<string.h>

unsigned int toDecimal(char s[]){
    int len = strlen(s);
    unsigned int ans = 0;
    
    // way 2
   
    for(int i=0;i<len;++i){
        int bit = s[i]-'0';
        ans = (ans*2)+bit;
    }
    
    // way 1
    /*
    int p = 1;
    for(int i=len-1;i>=0;--i){
        if(s[i]-'0') ans += p;
        p *= 2;
         printf("bit = %d,i=%d,ans = %d,p=%d\n",s[i]-'0',i,ans,p);
    }
    */
    return ans;
}

int main(){
    char s[100];
    scanf("%s",s);
    printf("%d\n",toDecimal(s));

    return 0;

}

/*

    1 0 1 0
    
    way 1 :
    
    i=3,bit=0,ans=0,p=2
    i=2,bit=1,ans=2,p=4
    i=1,bit=0,ans=2,p=8
    i=0,bit=1,ans=10,p=16
    
    way 2 :
    
    i=0,ans=1
    i=1,ans=2
    i=2,ans=5
    i=3,ans=10

*/