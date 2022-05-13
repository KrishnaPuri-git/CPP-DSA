#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int fact(int n){

    if(n==0){
        return 1;
    }
    int f= n*fact(n-1);
return f;
}

int main(){

    int n;
    cin>>n;
    cout<<fact(n);
}