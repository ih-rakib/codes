#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
    int year;
    scanf("%d",&year);
    for(int i=year+1; ; ++i){
        int temp = i;
        int freq[10]={0};
        bool flag = true;
        while(temp){
            int d = temp%10;
            temp/=10;
            freq[d]++;
            if(freq[d]>=2){
                flag = false;
            }
        }
  
        if(flag){
            printf("%d\n",i);
            break;
        }
    }
}
