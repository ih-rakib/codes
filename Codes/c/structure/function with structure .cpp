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

bool isFirstDayOfYear(struct Date date){
    return (date.day==1 && date.month==1);
}

struct Date getFirstDate(int year){
    struct Date ans = {01,01,year};
    return ans;
}

void printDate(struct Date date){
    printf("%d-%d-%d\n",date.day,date.month,date.year);
}

int main() {
    struct Date date = getFirstDate(2023);
    
    printDate(date);
    
    if(isFirstDayOfYear(date))
        printf("Die\n");
    else 
        printf("Smile\n");
    
}


/*

    

*/

