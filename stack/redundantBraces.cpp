#include<bits/stdc++.h> 
using namespace std;

int main(){

    string s;cin>>s;
    stack<char> st;
    bool ans = 0;

    for(int i=0; i<s.length(); i++){

        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '%'){
            st.push(s[i]);
        }
        else{
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(s[i] == ')'){

                    if(st.top() == '('){ //redundant brace found
                        ans = 1;
                    }

                    while(st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/' or st.top() == '%'){
                        st.pop();
                    } //remove operators 

                    st.pop(); //remove the corresponding opening bracket for this closing bracket encountered
                }
            }
        }
    }
    cout<<"Ans="<<ans<<endl;
}
//enter this for o/p ((a+b))