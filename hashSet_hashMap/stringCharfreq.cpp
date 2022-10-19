#include<bits/stdc++.h>
using namespace std;

int main(){

    string str= "aabbbbeeeeffggg";
    map<char, int> umap;

    for(int i=0; i<str.size(); i++){
        
        umap[ str[i] ]++;
    }

    string ans="";
    for(auto itr: umap){

        // int freq= itr.second;
        char freqInChar= itr.second + '0';
        char ch= itr.first;
        
        ans+= ch;
        ans+= freqInChar;
    }
    cout<<ans;    
    //a2b4e4f2g3
}