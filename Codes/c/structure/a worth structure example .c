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

struct Date inputDOB(){
    struct Date date;
    scanf("%d %d %d",&date.day,&date.month,&date.year);
    return date;
}

void printDate(struct Date date){
    printf("%d-%d-%d\n",date.day,date.month,date.year);
}

struct Student inputStudentInfo(){
    struct Student st;
    printf("Name : ");
    //getchar();
    //gets(st.name);
    scanf("%s",st.name);
    printf("Class : ");
    scanf("%d",&st.Class);
    printf("Roll : ");
    scanf("%d",&st.roll);
    printf("Date of Birth : ");
    st.dob = inputDOB();
	return st;
}


void printStudentInfo(struct Student st){
    printf("Name : %s\n",st.name);
    printf("Class : %d\n",st.Class);
    printf("Roll : %d\n",st.roll);
    printf("Date of Birth : ");
    printDate(st.dob);
}


int main() {
    int n;
    printf("How many students : ");
    scanf("%d",&n);
    
    struct Student students[n];
    
    for(int i=1;i<=n;++i){
        printf("Student %d'th info : \n\n",i);
        students[i-1] = inputStudentInfo();
    }
    
    for(int i=1;i<=n;++i){
        printf("Student %d'th info : \n\n",i);
        printStudentInfo(students[i-1]);
    }
    
}


/*

    

*/

