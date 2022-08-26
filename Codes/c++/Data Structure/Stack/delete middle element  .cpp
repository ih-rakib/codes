
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

void solve(Stack<int> &st,int n,int current){
    if(st.empty() or current == n)
        return;
        
    int topElement = st.Top();
    st.pop();
    
    solve(st,n,current+1);
    
    int d = (n%2 ? (n/2) : (n/2-1));
    
    cout << "current = " << current << '\n';
    if(current!=d){
        st.push(topElement);
        cout << topElement << " pushed\n";
    }
}

int main(){
    Stack<int> st;
    int n; cin >> n;
    for(int i=0;i<n;++i) {
        int x; cin >> x; st.push(x);
    }
    
    solve(st,n,0);
    int m = st.size(), a[m];
    while(!st.empty()){
        m--;
        a[m] = st.Top();     
        st.pop();
    }
    
    for(auto o : a)
        cout << o << ' ';
    cout << '\n';
}



/*

    delete middle element 

*/
       
      
     
    