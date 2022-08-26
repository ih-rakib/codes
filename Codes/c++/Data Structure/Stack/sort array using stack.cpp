
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

Stack<int> Sort(Stack<int> st){
    Stack<int> res;
    while(!st.empty()){
        int topElement = st.Top();
        st.pop();
        
        while(!res.empty() and res.Top()<topElement){
            st.push(res.Top());
            res.pop();
        }
        res.push(topElement);
    }
    return res;
}

void solve(int a[],int n){
    Stack<int> temp;
    for(int i=0;i<n;++i){
        temp.push(a[i]);
    }
    
    Stack<int> res = Sort(temp);
    
    while(!res.empty()){
        cout << res.Top() << ' ';
        res.pop();
    }
}

int main(){
    int n;
    cin >> n;
    int a[n+7];
    for(int i=0;i<n;++i) cin >> a[i];
    
    solve(a,n);
   
}
       
      
     
    