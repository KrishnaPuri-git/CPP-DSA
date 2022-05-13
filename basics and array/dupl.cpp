#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

bool test(int n,int arr[]){
        for(int i=0;i<n;i++){
            int curr=arr[i];
            int j=i-1;
            while(arr[j]>curr&&j>=0){
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1]=curr;
        }
    
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                return false;
            }
        
        }
    return true;
}

int main(){
    int n;cout<<"enter";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter array elem=";
        cin>>arr[i];
    }
    cout<<test(n,arr);
}