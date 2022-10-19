#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {

    int start=0, end=s.size()-1, flag=0;
    while(s[start] == ' ' or s[end] == ' '){
        flag=1;
        if(s[start] == ' ')
            start++;
        if(s[end] == ' ')
            end--;
    }
    if(flag == 1){
        string trimmed= "";
            for(int i= start; i<= end; i++){
                trimmed+= s[i];
            }
        return reverseWords(trimmed);
    }

    int n=s.size();
    stack<string> st;
    string currWord="";

    for(int i=0; i<n; i++){

        if(s[i] != ' '){
            currWord+= s[i];
        }

        else{
            if(currWord.size()>0)
                st.push(currWord);
            currWord="";
        }
    }
    st.push(currWord); // last word pushed 

    string ans="";
    int addSpace= st.size()-1;// word count -1

    while(!st.empty()){
        ans+= st.top();
        if(addSpace-- >0)
            ans+=" ";
        st.pop();
    }

    return ans;
}


int main(){
    string s = "  a   really good    example  ";
    cout<<reverseWords(s)<<endl;    
    return 0;
}