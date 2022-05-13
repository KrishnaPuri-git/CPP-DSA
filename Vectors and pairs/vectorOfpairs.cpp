#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cout<<"n="<<endl;cin>>n;
    vector<pair<string,string>> v;
    for(int i=0; i<n; i++){

        string x, y;
        cin>>x>>y;

        v.push_back({x,y});
    }
    string str = "codeforces contest letter contest ";
    string word="";
    int i=0;

    for(int i=0; i<str.length(); i++){

        if(str[i]!= ' '){
            
            word= word+str[i];
        }
        
        else{
            for(int i=0; i<n; i++){

                if(v[i].first == word || v[i].second == word){

                    int l1= (v[i].first).length();
                    int l2= (v[i].second).length();

                    if(l1<l2){
                        cout<<v[i].first<<" ";
                        word="";
                        break;
                    }

                    else if(l1==l2){
                        cout<<v[i].first<<" ";
                        word="";
                        break;
                    }

                    else{
                        cout<<v[i].second<<" ";
                        word="";
                        break;
                    }
                }
            }
        }
    }
return 0;
}