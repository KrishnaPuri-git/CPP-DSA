#include<bits/stdc++.h>
using namespace std;

int main(){
    string str=""; cout<<"enter numeric str="; cin>>str; 

    sort(str.begin(), str.end(), greater<int>());
    cout<<str;

}