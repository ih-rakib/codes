#include<bits/stdc++.h>   
using namespace std;   
   
class Node{
public:
    int value;
    Node* next;
    Node* prev;
    
    Node(int val){
        value = val;
        next = NULL;
        prev = NULL;
    }
};

class Stack{

    Node* head;
    Node* top;
    int count = 0;
    
public:
    Stack(){
        head = NULL;
        top = NULL;
    }
    
    // PUSH
    void push(int val){
        Node* newNode = new Node(val);
        
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
    int pop(){
        Node* delNode;
        delNode = top;
        int check = -1;
        
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
    int Top(){
        int chk;
        if(top==NULL){
            cout << "Stack Underflow | No element in Top \n";
            chk = -1;
        }else {
            chk = top->value;
        }
        return chk;
    }
};

int main(){   
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    
    /*
    while(!st.empty()){
        cout << st.pop() << '\n';
    }
    */
    
    cout << st.size() << '\n';
    if(!st.empty()) cout << st.Top() << '\n'; // st.Top()!=-1

    return 0;   
}   
   
   
/*   
   
    Stack implementation (basic)
    
    using Doubly Linked List
      
    
     
      
   
*/   
      
     
    