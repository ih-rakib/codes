#include<stdio.h>
#include<string.h>

int main() {  
    int to[10];
    for(int i=0;i<10;++i){
        scanf("%d",&to[i]);
    }
    int current = 0;
    for(int i=0;i<3;++i){
        current = to[current];
    }
    printf("%d\n",current);
}
/*
    
    atcoder digit machine 
    
    after pressing button 3 times what
    will be the final position 
    
            0 1 2 3 4 5 6 7 8 9
    input : 9 0 1 2 3 4 5 6 7 8
    
        0 -> 9
        9 -> 8 
        8 -> 7
    ans = 7
    

*/