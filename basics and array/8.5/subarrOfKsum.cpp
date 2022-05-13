#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    cout<<"enter array size n=";
    int n;cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter array elem=";
        cin>>arr[i];
    }
    
    cout<< "enter k="<< endl;
    int k; cin>>k;
    
    unordered_map<int, int>umap;

    umap[0]=1;
    int sum=0;
    int ans=0;

    for(int i=0; i<n; i++){

        sum=sum+arr[i];

        if(umap[sum-k]>0 and arr[i] != 0){
            
            ans=ans+umap[sum-k];
        }
        umap[sum]++;
    }

    cout<<ans<<endl;
}   
//n=15
// 3 9 -2 4 1 -7 2 6 -5 8 -3 -7 6 2 1
//k=7
//ans=7
