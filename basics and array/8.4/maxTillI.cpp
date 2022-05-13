#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    cout<<"enter array size n=";
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter array elem=";
        cin>>arr[i];
    }

    int mx= INT_MIN;
    for(int i=0; i<n; i++){

        mx= max( mx,arr[i]);
        cout<< mx << endl;
    }

return 0;
}