#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    char *name[100];
    int Class;
    int roll;
    struct Date dob;
};

void printDate(struct Date date){
    printf("%d-%d-%d\n",date.day,date.month,date.year);
}

void printInfo(struct Student st){
    printf("Name : %s\n",st.name);
    printf("Class : %d\n",st.Class);
    printf("Roll : %d\n",st.roll);
    printf("Date of Birth : ");
    printDate(st.dob);
}

int main() {
    struct Student st = {
        .Class = 97,
        .roll = 901,
        .dob = {05,05,2002}
    };
    
    char name[] = "Yk Rakib";
    
    strcpy(st.name,name);
    
    printInfo(st);
    
}


/*

    

*/

