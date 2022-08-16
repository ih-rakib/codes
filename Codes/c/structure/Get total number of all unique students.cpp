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
    
    printf("\n");
    for(int i=0;i<k;++i){
        printf("%s %d %d\n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
    }
}

/*

    Get total number of all unique students 

*/