
 
#include<bits/stdc++.h> 
using namespace std; 
 
template<typename T> 
class Node { 
public: 
    T value; 
    Node* next; 
    Node* prev; 
 
    Node(T val) { 
        this->value = val; 
        next = NULL; 
        prev = NULL; 
    } 
}; 
 
template<typename T> 
class Stack { 
    Node<T> *head; 
    Node<T> *top; 
    int count = 0; 
 
public: 
    Stack() { 
        head = NULL; 
        top = NULL; 
    } 
 
    // PUSH 
    void push(T val) { 
        Node<T> *newNode = new Node<T>(val); 
 
        if(head==NULL) { 
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
    T pop() { 
        Node<T> *delNode; 
        delNode = top; 
        T check; 
 
        // There is no element in the Stack 
        if(head==NULL) { 
            cout << "Stack Underflow\n"; 
            return check; 
        } else if(top==head) { // Only 1 element 
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
    bool empty() { 
        if(head==NULL) { 
            return true; 
        } 
        return false; 
    } 
 
    // SIZE 
    int size() { 
        return count; 
    } 
 
    // TOP 
    T Top() { 
        T chk; 
        if(top==NULL) { 
            cout << "Stack Underflow | No element in Top \n"; 
        } else { 
            chk = top->value; 
        } 
        return chk; 
    } 
}; 
 
int prefixEvaluation(string s) { 
    Stack<int> st; 
 
    for(int i=s.length()-1; i>=0; --i) { 
        // operand : 0-9 
        if(s[i]>='0' and s[i]<='9') { 
            st.push(s[i]-'0'); 
        } else { 
            // operator ( +,-,*, /,^) 
            int a = st.pop(); 
            int b = st.pop(); 
 
            switch(s[i]) { 
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

int postfixEvaluation(string s) { 
    Stack<int> st; 
 
    for(int i=0; i<s.length(); ++i) { 
        // operand : 0-9 
        if(s[i]>='0' and s[i]<='9') { 
            st.push(s[i]-'0'); 
        } else { 
            // operator ( +,-,*, /,^) 
            int a = st.pop(); 
            int b = st.pop(); 
 
            switch(s[i]) { 
            case '+': 
                st.push(b+a); 
                break; 
            case '-': 
                st.push(b-a); 
                break; 
            case '*': 
                st.push(b*a); 
                break; 
            case '/': 
                st.push(b/a); 
                break; 
            case '^': 
                st.push(pow(b,a)); 
                break; 
            default: 
                break; 
            } 
        } 
    } 
    return st.Top(); 
} 
 
int precisionCalc(char c) { 
    if(c=='^') 
        return 3; 
    else if(c=='*' or c=='/') 
        return 2; 
    else if(c=='+' or c=='-') 
        return 1; 
    else 
        return -1; 
} 
 
string infixToPrefix(string s) { 
    reverse(s.begin(),s.end()); 
    Stack<char> st; 
    string result; 
 
    for(int i=0; i<s.length(); ++i) { 
        if(s[i]>='0' and s[i]<='9') { 
            result += s[i]; 
        } else if(s[i] == ')') { 
            st.push(s[i]); 
        } else if(s[i]=='(') { 
            while(!st.empty() and st.Top()!=')') { 
                result += st.pop(); 
            } 
            if(!st.empty()) 
                st.pop(); 
        } else { 
            while(!st.empty() and (precisionCalc(st.Top()) >= precisionCalc(s[i]))) { 
                result += st.pop(); 
            } 
            st.push(s[i]); 
        } 
    } 
    while(!st.empty()) { 
        result += st.pop(); 
    } 
 
    reverse(result.begin(),result.end()); 
    return result; 
} 

string infixToPostfix(string s){
    Stack<char>st;
    string result;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            result+=s[i];
        }
        else if(s[i]=='('){
                st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.Top()!='(')
            {
                result+=st.pop();
            }
            if(!st.empty()){
                st.pop();
            }

        }
        else{
            while(!st.empty() && precisionCalc(st.Top())>=precisionCalc(s[i])){
                result+=st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        result+=st.pop();
    }
    return result;

}
 
int main() { 
    string infix; 
    cin >> infix; 
    cout << "infix : " << infix << '\n'; 
    string prefix; 
    prefix = infixToPrefix(infix); 
    cout << "prefix : " << prefix << '\n'; 
    int prefix_result = prefixEvaluation(prefix); 
    cout << prefix_result << "\n\n"; 
    
    string postfix;
    postfix = infixToPostfix(infix); 
    cout << "postix : " << postfix << '\n'; 
    int postfix_result = postfixEvaluation(postfix); 
    cout << postfix_result << '\n'; 
    
    
 
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
 
    -+7*45+20 = 25 -> infix : (7+(4*5))-(2+0) 
 
 
    ☞ infix to prefix conversion 
 
    s1 : reverse করবো 
    s2 : কন্ডিশন 
         -> 0-9 হলে প্রিন্ট 
         -> opening(")")  পাইলে  push 
         -> closing("(")  পাইলে যতক্ষণ opening(")") পাবোনা ততক্ষণ pop 
         ☞ opeartor 
         -> less precedence এর কাউকে পেলে push 
         -> more precedence এর কেউ হলে যতক্ষণ less precedenc এর কাউকে পাবোনা ততক্ষণ pop 
    s3 : while(!empty()) st.pop() -> print 
    s4 : reverse 
 
*/ 
    