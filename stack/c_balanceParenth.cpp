#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

bool isValid(string s){
    stack<char> st;
    bool ans=1;
    for(int i=0; i<s.length(); i++){
        if(s[i]== '{' or s[i]== '[' or s[i]== '(' ){
            st.push(s[i]);
        }

        else{
            if(s[i]== '}'){
                if(!st.empty() and st.top()== '{'){
                    st.pop();
                }
                else{
                    ans= 0; break;
                }
            }

            if(s[i]== ']'){
                if(!st.empty() and st.top()== '['){
                    st.pop();
                }
                else{
                    ans = 0; break;
                }
            }

            if(s[i]== ')'){
                if(!st.empty() and st.top()== '('){
                    st.pop();
                }
                else{
                 ans= 0; break;
                }
            }
        }
    }

    if(st.empty() and ans == 1){
        return 1;
    }     
    else{
        return 0;
    }
}


int main(){
    string s="[{()}]";//s="[{(])}"; 
    if(isValid(s)){
        cout<<"Valid"<<endl;
    }

    else{
        cout<<"invalid"<<endl;
    }
}