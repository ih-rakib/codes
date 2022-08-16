#include<bits/stdc++.h>
using namespace std;

class Student{
    public : 
        int marks[5];
        float gpa;
        
        Student (int a[]){
            double sum = 0.0;
            for(int i=0;i<3;++i){
                marks[i] = a[i];
                if(a[i]>=80){
                    sum += 5;
                }else if(a[i]>=70){
                    sum += 4;
                }else if(a[i]>=60){
                    sum += 3.5;
                }else if(a[i]>=50){
                    sum += 3;
                }else if(a[i]>=40){
                    sum += 2;
                }else {
                    sum += 0;
                }
            }
            gpa = sum/3.0;
            
        }
};

Student *store_marks(int n){
    cout << "Enter marks for student no " << n << '\n';
    int a[5];
    for(int i=0;i<3;++i){
        cin >> a[i];
    }
    
    Student *student = new Student(a);
    return student;
}

int main()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;
    
    Student *student[n+7];
    
    for(int i=0;i<n;++i){
        student[i] = store_marks(i+1);
    }
    
    for(int i=0;i<n;++i){
        cout << "GPA of student " << i+1 << " : " << student[i]->gpa << '\n';
        cout << "Marks of student " << i+1 << '\n';
        for(int j=0;j<3;++j){
            cout << student[i]->marks[j] << " ";
        }
        cout << '\n';
    }
    
    

    return 0;

}


/*

    

*/