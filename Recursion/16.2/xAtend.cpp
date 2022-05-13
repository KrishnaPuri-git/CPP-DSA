#include <bits/stdc++.h>

using namespace std;

string movex(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = movex(s.substr(1));
    if(ch =='x'){
        return ans+ch;
    }    
    return ch+ans;
}

int main(){
    cout<<movex("xxxaabbbxxbddxxddccceeexxxdxdddd");
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// string movex(string s,string xs,string ans){
//     if(s.length() == 0){
//         return ans+xs;
//     }
    
//     if(s[0] =='x'){
//         xs = xs+"x";
//     } 

//     else{
//         ans=ans+s[0];
//     }
//     return(s.substr(1),xs,ans);
// }

// int main(){
//     cout<<movex("xxxaabbbxxbddxxddccceeexxxdxdddd", "", "");
//     return 0;
// }