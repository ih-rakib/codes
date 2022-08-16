#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Students{
    char name[100];
    int id;
    int marks;
};

struct Unique_Students{
    char name[100];
    int id;
    int total;
};

int main() {
    int n;
    scanf("%d",&n);
    struct Students student[100];
    struct Unique_Students unique_student[100];
    int k = 0;
    
    for(int i=0;i<n;++i){
        scanf("%s %d %d",&student[i].name,&student[i].id,&student[i].marks);
        bool found = false;
        for(int j=0;j<k;++j){
            if(unique_student[j].id == student[i].id){
                unique_student[j].total += student[i].marks;
                found = true;
            }
        }
        if(found == false){
            unique_student[k].total = student[i].marks;
            unique_student[k].id = student[i].id;
            strcpy(unique_student[k].name,student[i].name);
            ++k;
        }
    }
    
    for(int i=0;i+1<k;++i){
        for(int j=i+1;j<k;++j){
            if(unique_student[i].total<unique_student[j].total){
                struct Unique_Students temp = unique_student[i];
                unique_student[i] = unique_student[j];
                unique_student[j] = temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<k;++i){
        printf("%s %d %d\n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
    }
}

/*

    unique students number sorting 
    
    5   
    Akib 11 87
    Sakib 5 86
    Rakib 7 99
    Akib 11 95
    Rakib 7 98
    

*/