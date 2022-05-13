#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="eeaaahhhhhibbccc";
    int freq[26]={0};

    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a']++;
    }

    char c;
    int maxfreq=0;

    for(int i=0; i<26; i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            c=i+'a';
        }
    }   

    cout<<c<<" has maxfreq of "<<maxfreq<<endl;

return 0;
}