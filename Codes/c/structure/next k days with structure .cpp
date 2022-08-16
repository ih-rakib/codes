#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

int daysInmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    struct Date start;
    printf("Starting date : ");
    scanf("%d %d %d",&start.day,&start.month,&start.year);

    struct Date nextDate = start;

    int days;
    printf("How many days : ");
    scanf("%d",&days);

    for(int i=0; i<days; ++i) {
        if(nextDate.day!=daysInmonth[nextDate.month-1]) {
            nextDate.day++;
        } else if(nextDate.month!=12) {
            nextDate.month++;
            nextDate.day = 1;
        } else {
            nextDate.day = 1;
            nextDate.month = 1;
            nextDate.year++;
        }

        printf("Next Date : %d-%d-%d\n",nextDate.day,nextDate.month,nextDate.year);

    }


}


/*

    Date with structure

    next k days


*/