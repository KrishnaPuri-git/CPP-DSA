#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int sum(int n){

    if(n==1){
        return 1;
    }

    int s=n+sum(n-1);

return s;
}

int main(){

    int rng; cin>>rng;
    cout<<sum(rng);
}