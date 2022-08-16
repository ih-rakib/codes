#include<stdio.h>
#include<string.h>

void swap(char *a,char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void toBinary(unsigned int x,char s[],int k){
    int idx = 0;
    while(x){
        int d = x%2;
        x /= 2;
        s[idx] = '0'+d;
        idx++;
    }
    
    for(int i=idx;i<8;++i) s[i] = '0';
    s[k] = '\0';
    
    for(int i=0;i<k/2;++i){
        swap(&s[i],&s[k-i-1]);
    }
    
    
}

int main(){
    char sx[100],sy[100],sand[100],sor[100],sxor[100],sleft[100],sright[100];
    unsigned int x,y;
    scanf("%d %d",&x,&y);
    toBinary(x,sx,8);
    toBinary(y,sy,8);
 
    printf("sx = %s\n",sx);
    printf("sy = %s\n",sy);
    

    toBinary(x&y,sand,8);
    toBinary(x|y,sor,8);
    toBinary(x^y,sxor,8);
    toBinary(x<<1,sleft,8);
    toBinary(x>>1,sright,8);
  
    printf("And = %d : %s\n",x&y,sand);
    printf("Or = %d : %s\n",x|y,sor);
    printf("Xor = %d : %s\n",x^y,sxor);
    printf("Left shift = %d : %s\n",x<<1,sleft);
    printf("Right shift = %d : %s\n",x>>1,sright);
    
    
    return 0;

}

/*

    And : & -> যেকোন ১টা ০ হলে ০
    Or : | -> যেকোন ১টা ১ হলে ১
    Xor : ^ -> ২টাই সেম হলে ০
    Not : ~ -> ০ কে ১, ১ কে ০ করে
    
    Left shift : << -> সবাইকে বামে সরায়(শেষে ০)
    Right shift : >> -> সবাইকে ডানে সরায়(শুরুতে ০)
    
    35 :     00100011
    35<<1 :  01000110
    35>>1 :  00010001 // ২ দিয়ে ভাগ

*/