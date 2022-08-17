
#include<bits/stdc++.h>    
using namespace std;    
 
template<typename T> 
class Node{ 
public: 
    T value; 
    Node* next; 
    Node* prev; 
     
    Node(T val){ 
        this->value = val; 
        next = NULL; 
        prev = NULL; 
    } 
}; 
 
template<typename T> 
class Stack{ 
    Node<T> *head; 
    Node<T> *top; 
    int count = 0; 
     
public: 
    Stack(){ 
        head = NULL; 
        top = NULL; 
    } 
     
    // PUSH 
    void push(T val){ 
        Node<T> *newNode = new Node<T>(val); 
         
        if(head==NULL){ 
            head = top = newNode; 
            count++; 
            return; 
        } 
         
        top->next = newNode; 
        newNode->prev = top; 
        top = newNode; 
        count++; 
    } 
     
    // POP 
    T pop(){ 
        Node<T> *delNode; 
        delNode = top; 
        T check; 
         
        // There is no element in the Stack 
        if(head==NULL){ 
            cout << "Stack Underflow\n"; 
            return check; 
        }else if(top==head){ // Only 1 element 
            head = top = NULL; 
        } else { // more than 1 element 
            top = delNode->prev; 
            top->next = NULL; 
        } 
        check = delNode->value; 
        delete delNode; 
        count--; 
        return check; 
    } 
     
    // EMPTY  
    bool empty(){ 
        if(head==NULL){ 
            return true; 
        } 
        return false; 
    } 
     
    // SIZE 
    int size(){ 
        return count; 
    } 
     
    // TOP 
    T Top(){ 
        T chk; 
        if(top==NULL){ 
            cout << "Stack Underflow | No element in Top \n"; 
        }else { 
            chk = top->value; 
        } 
        return chk; 
    } 
}; 

int globalId = 100;

class Person{
    string name;
    int id;
    double salary;

public:
    Person(){
        name = "";
        id = -1;
        salary = -1.0;
    }
    
    void setName(string name){
        this->name = name;
    }
    
    void setSalary(double salary){
        this->salary = salary;
    }
    
    Person(string name,double salary){
        setName(name);
        setSalary(salary);
        this->id = globalId;
        globalId++;
    }
    
    string getName(){
        return name;
    }
    
    double getSalary(){
        return salary;
    }
    
    int getId(){
        return id;
    }
    
    void print(){
        cout << name << " | " << id << " | " << salary << '\n';
    }
    
};
 
int main(){    
    Stack<Person> st;
    
    Person a ("I H Rakib", 917.9);
    Person b ("Adib Hasan", 539.3);
    Person c ("Akib Jaman", 337.9);
    
    st.push(a);
    st.push(b);
    st.push(c);
    
    cout << st.size() << '\n';
    
    while(!st.empty()){
        Person printObj = st.Top();
        printObj.print();
        st.pop();
        
    }

    return 0;    
}    
    
    
/*    
    
    
     stack (class object)
      
       
    
*/    
       
      
     
