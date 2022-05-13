#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){

    int n; cin>>n; int a[n];

    for( int i=0; i<n; i++){

        cin>>a[i];
    }

    int mx = INT_MIN;

    for( int i=0; i<n; i++){

        if( a[i] > mx){

            mx= max( a[i], mx);
        }

        if(i+1<n && mx == a[i] && a[i] > a[i+1]){

            cout<< a[i] <<",";
        }

        if(i == n-1 && a[i]> a[i-1]){

            cout<< a[i];
        }
    }
}
