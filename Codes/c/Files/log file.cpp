#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
    FILE *logFile = fopen("log.txt","a");
    //printf("Hello at 12:00AM\n");
    // run করলে log file এ 
    // Hello at 12:00 AM থাকবে
    // এরপর চেঞ্জ করে এটা দিলে,
    fprintf(logFile,"Hello at 12:07AM\n");
    
    // log file এ থাকবে
    
    // Hello at 12:00AM
    // Hello at 12:07AM
        
}

/*

    log file
    
    এটা কোডের মধ্যকার চেঞ্জ এর হিস্টোরি সেভ রাখে।
    
    printf("Hello at 12:00 AM\n");
    এটা দিলে log file এ Hello at 12:00 AM
    সেভ হবে।এরপর চেঞ্জ করে এটা লিখলে,
    printf("Hello at 12:07 AM\n");
    তখন log file এ থাকবে এরকম,
    
    Hello at 12:00 AM
    Hello at 12:07 AM

*/