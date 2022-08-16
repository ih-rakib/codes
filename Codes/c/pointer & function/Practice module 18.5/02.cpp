#include <stdio.h>
#include<math.h>

int number;

void set(int val){
    number = val;
   // printf("%d\n",number);
}

void print(){
    printf("%d\n",number);
}

void makeDouble(){
    number *= 2;
    // printf("%d\n",number);
}

int main()
{
    set(10);  
    set(5); 
    print();
    makeDouble();
    makeDouble();
    print();

    return 0;
}
