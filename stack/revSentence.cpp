#include <bits/stdc++.h>

using namespace std;

void reverseSentence(string s){
    stack<string> st;

    for(int i = 0; i<s.length(); i++){
        string word ="";
        while(s[i] != ' ' && i<s.length()){
            word+= s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main(){
    string s = "kaise ho sab log?";
    reverseSentence(s);    
    return 0;
}