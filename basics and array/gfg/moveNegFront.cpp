#include <bits/stdc++.h>
using namespace std;

void move(int arr[],int n){

    int start=0;
    int end=n-1;

    while(start<end){

        if(arr[start]>0 and arr[end]<0){
            swap(arr[start], arr[end]);
        }

        if(arr[start]<0 and arr[end]<0){
            
            while(arr[start]<0){
                start++;
            }
            swap(arr[start], arr[end]);
        }

        start++;
        end--;

    } 

    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }   
    cout<<endl;
}



int main(){

    cout<<"enter n="<<endl;
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cout<<"enter elem="<<endl;
        cin>>arr[i];
    }

    move(arr,n);

return 0;
}
//n=9
//-12, 11, -13, -5, 6, -7, 5, -3, -6