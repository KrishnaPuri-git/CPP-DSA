#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    int n1,n2,rng;
    cout<<"Enter n1 , n2, range = "; cin>>n1>>n2>>rng;

    int c1=rng/n1; 
    int c2=rng/n2; 
    int c3=rng/(n1*n2); 
    
    cout<<(c1+c2)-c3<<endl;

return 0;
}