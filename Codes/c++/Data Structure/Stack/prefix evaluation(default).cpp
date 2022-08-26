#include<bits/stdc++.h> 
using namespace std;

int prefixEvaluation(string s){
    stack<int> st;
    
    for(int i=s.length()-1;i>=0;--i){
        // operand : 0-9
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }else {
        // operator ( +,-,*, /,^)
            int a = st.top();
			st.pop();
            int b = st.top();
			st.pop();
            
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
    return st.top();
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