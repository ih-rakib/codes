#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Binary {
    char str[50];
};

char *strrev(char *str) {
    if(!str || ! *str) return str;

    int i=strlen(str)-1,j=0;
    char ch;
    while(i>j) {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

struct Binary toBinary(unsigned int x,int k) {
    struct Binary ans;
    int idx = 0;
    while(x) {
        int d = x%2;
        x /= 2;
        ans.str[idx] = '0'+d;
        idx++;
    }

    for(int i=idx; i<k; ++i) ans.str[i] = '0';
    ans.str[k] = '\0';
    strrev(ans.str);

    return ans;
}

unsigned char rightRotate(unsigned char mask,int k) {
    unsigned char lastk =(mask & (1<<k)-1);
    return ((mask>>k) | (lastk<<(8-k)));
}

int main() {
    unsigned int x;
    scanf("%d",&x);

    printf("%d = %s\n",x,toBinary(x,8).str);

    for(int i=0; i<8; ++i) {
        unsigned char R = rightRotate(x,i);
        printf("Rotate %d : %s\n",i,toBinary(R,8).str);
    }

    return 0;

}

/*

    bitmasking

    Right rotate by i

    54
    54 = 00110110
    Rotate 0 : 00110110
    Rotate 1 : 00011011
    Rotate 2 : 10001101
    Rotate 3 : 11000110
    Rotate 4 : 01100011
    Rotate 5 : 10110001
    Rotate 6 : 11011000
    Rotate 7 : 01101100

*/