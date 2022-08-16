#include<stdio.h>
#include<math.h>

void printCall(){
    static int num = 0;
    num++;
    printf("Called %d times\n",num);
}

int main() {
    printCall();
    printCall();
    printCall();
}


    
    