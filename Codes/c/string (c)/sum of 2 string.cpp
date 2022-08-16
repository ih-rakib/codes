#include<stdio.h>
#include<string.h>

void strrev(char *s,int n){
   char *begin = s, *end = s;
 
   for (int i = 0; i < n - 1; i++)
      end++;
 
   for (int i = 0; i < n/2; i++)
   {        
      char temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}

int main() {
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    
    int len_a = strlen(a);
    int len_b = strlen(b);
    strrev(a,len_a);
    strrev(b,len_b);
    
   // printf("%s %s",a,b);
    
    int i=0,j=0,k=0,baki=0;
    char sum[107];
    
    while(i<len_a && j<len_b){
        int current_sum = (a[i]-'0')+(b[j]-'0')+baki;
        sum[k] = (current_sum%10) + '0';
        baki = current_sum/10;
        ++i,++j,++k;
    }
    while(i<len_a){
        int current_sum = (a[i]-'0')+baki;
        sum[k] = (current_sum%10) + '0';
        baki = current_sum/10;
        ++i,++k;
    }
    while(i<len_b){
        int current_sum = (b[i]-'0')+baki;
        sum[k] = (current_sum%10) + '0';
        baki = current_sum/10;
        ++j,++k;
    }
    
    if(baki>0){
        sum[k] = baki + '0';
        ++k;
    }
    
    
    int len_sum = strlen(sum);
    strrev(sum,len_sum);
    printf("%s",sum);
    
}

/*

    sum of 2 string
    "127" + "35" = "162"
    
    721
    53
    261
    
*/
