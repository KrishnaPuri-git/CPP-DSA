#include<bits/stdc++.h>
using namespace std;

void Tprime(int arr[], int n){

    for(int i=0; i<n; i++){

        int count=0;
        for(int j=2; j<arr[i]; j++){

            if(arr[i] %j == 0){
                count++;
                if(count>1){
                    break;
                }
            }
        }
        if(count == 1){
            cout<<arr[i]<<" Yes"<<endl;
        }
        else{
            cout<<arr[i]<<" NO"<<endl;
        }
    }
}

int main(){
    
    int n; cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Tprime(arr, n);
}