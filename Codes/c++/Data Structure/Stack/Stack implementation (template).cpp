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

int main(){   
/*
    Stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    while(!st.empty()){
        cout << st.Top() << '\n';
        st.pop();
    }
    
    st.Top();
    st.pop();
    

    Stack<char> st;
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('d');
    st.push('e');
    
    while(!st.empty()){
        cout << st.Top() << '\n';
        st.pop();
    }
    
    st.Top();
    st.pop();
    

    Stack<string> st;
    st.push("Akib Zaman");
    st.push("Hasan Rakib");
    st.push("Adib Hasan");
    
    while(!st.empty()){
        cout << st.Top() << '\n';
        st.pop();
    }
    
    st.Top();
    st.pop();
    
*/

    Stack<pair<int,char>> st;
    st.push(make_pair(1,'a'));
    st.push(make_pair(2,'b'));
    st.push(make_pair(3,'c'));
    
    while(!st.empty()){
        cout << st.Top().first << " " << st.Top().second << '\n';
        st.pop();
    }
    
    st.Top().first;
    st.pop().first;

    return 0;   
}   
   
   
/*   
   
    Stack implementation (template)
    
    using Doubly Linked List
      
    
     
      
   
*/   
      
     
    