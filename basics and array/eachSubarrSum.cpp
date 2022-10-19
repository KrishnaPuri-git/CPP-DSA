#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){

    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cout<<"elem"<<i<<"="<<endl;
        cin>>arr[i];

    }

    for( int i=0; i<n; i++){

        int s=0;
        for( int j=i; j<n; j++){

            cout<<arr[j];
            s = s+arr[j];
        }
        cout<<" sum = "<<s<<endl;
    }
}