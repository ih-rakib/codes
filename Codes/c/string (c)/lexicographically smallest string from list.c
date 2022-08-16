#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    char ans[] = "zzzzzzzzzz";
	char final[100] = "";
    for(int i=0;i<3;++i){
        gets(s);
        if(strcmp(s,ans)<0){
            strcpy(final,s);
        }
		for(int i=0;i<strlen(s);++i){
			ans[i] = s[i];
		}
		ans[strlen(s)] = '\0';
		
		printf("ans = %s\n",ans);
		printf("small = %s\n",final);
    }
	printf("%s",final);
}
/*
    

*/