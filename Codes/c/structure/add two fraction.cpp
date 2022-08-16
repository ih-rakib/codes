#include<stdio.h>

struct Fraction {
    int num; // lob
    int denom; // hor
};

struct Fraction inputFraction(){
    struct Fraction f;
    scanf("%d %d",&f.num,&f.denom);
    return f;
}

struct Fraction add(struct Fraction a,struct Fraction b){
    struct Fraction ans;
    ans.num = (a.num*b.denom) + (b.num*a.denom);
    ans.denom = a.denom * b.denom;
    return ans;
}

int gcd(int a,int b){
    while(b){
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

struct Fraction reduce(struct Fraction f){
    int g = gcd(f.num,f.denom);
    f.num /= g;
    f.denom /= g;
    return f;
}

void printFraction(struct Fraction f){
    printf("%d/%d",f.num,f.denom);
}

int main(){
    struct Fraction a,b;
    a = inputFraction();
    b = inputFraction();
    
    a = reduce(a);
    b = reduce(b);
    
    
    printFraction(a);
    printf(" + ");
    printFraction(b);
    printf(" = ");
    
    struct Fraction sum = add(a,b);
    
    sum = reduce(sum);
    
    printFraction(sum);
    printf("\n");
    
    return 0;

}

/*

    a/b + c/d = (ad+bc)/bd

*/