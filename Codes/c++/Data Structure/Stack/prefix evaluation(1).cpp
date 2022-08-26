
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

int prefixEvaluation(string s){
    Stack<int> st;
    
    for(int i=s.length()-1;i>=0;--i){
        // operand : 0-9
        if(s[i]>='0' and s[i]<='9'){
            st.push(s[i]-'0');
        }else {
        // operator ( +,-,*, /,^)
            int a = st.pop();
            int b = st.pop();
            
            switch(s[i]){
                case '+':
                    st.push(a+b);
                    break;
                case '-':
                    st.push(a-b);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                case '/':
                    st.push(a/b);
                    break;
                case '^':
                    st.push(pow(a,b));
                    break;
                default:
                    break;
            }
        }
    }
    return st.Top();
}

int main(){
    string s;
    cin >> s;
    
    int result = prefixEvaluation(s);
    
    cout << result << '\n';

    return 0;
}
    
    
/*

    +*423 // এটা হলো প্রিফিক্স নোটেশন বা পোলিশ নোটেশন
    
    এটাকে ইনফিক্স নোটেশনে(মনুষ্য) প্রকাশ করলে হয়,
    ডান থেকে চেক করবো,
    " operator operand operand "
    
    operator পাইলেই সেটার বেসিসে পরবর্তী ২টা operand নিয়ে কাজ করবো
    
    ইনফিক্স নোটেশন
    
    ((4*2)+3) = 11
    
    

*/