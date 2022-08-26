#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    stack<char> st;
    
    for(int i=0;i<s.length();++i){
        if(st.empty()){
            st.push(s[i]);
        }else if(
            st.top()=='(' and s[i]==')' or
            st.top()=='{' and s[i]=='}' or
            st.top()=='[' and s[i]==']'
            )
        {
            st.pop();
        }else {
            st.push(s[i]);
        }
    }
    
    if(st.empty()){
        return true;
    }else {
        return false;
    }

}

int main(){
    string s;
    cin >> s;
    
    bool check = isBalanced(s);
    
    if(check){
        cout << "Balanced\n";
    }else {
        cout << "Not Balanced\n";
    }

    return 0;
}

/*

    Balanced Parentheses 

*/