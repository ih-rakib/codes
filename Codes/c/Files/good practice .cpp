#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");
    
    // good practice 01
    
    if(inputFile == NULL){
        fprintf(outputFile,"No file found\n");
        return 0;
    }
    
    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d",n);
    
    // good practice 02
    
    fclose(inputFile);
    fclose(outputFile);
    
}

/*

    Good practice 

*/