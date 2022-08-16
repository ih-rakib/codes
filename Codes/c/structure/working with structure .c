#include <stdio.h>
#include<math.h>
#include<stdbool.h>

struct Date{
    int day;
    int month;
    int year;
};

int main() {
    struct Date today = {28,5,2022};
    printf("%d-%d-%d\n",today.day,today.month,today.year);
    
    today = (struct Date) {01,05,2007};
    printf("%d-%d-%d\n",today.day,today.month,today.year);
  
    // today.day ++;
    // today.month *= 5;

}
