#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
/* sort array if not sorted*/
int sumfunc(int arr[], int n, int target){
    int strt=0;
    int end=n;
    int flag=0;
    while(strt!=end){
        if((arr[strt]+arr[end])==target){
            flag=1;
            cout<<strt<<" "<<end<<endl;
            break;
        }

        else{
            if((arr[strt]+arr[end])<target){
                strt=strt+1;
            }

            else{
                end=end-1;
            }
        }
    }
    return flag;
}


int main(){
    int n;cout<<"enter size="<<endl;cin>>n;
    int arr[n];
    int target;cout<<"enter target="<<endl;cin>>target;

    for(int i=0;i<n;i++){
        cout<<"enter elem=";
        cin>>arr[i];
    }

    int ans=sumfunc(arr,n,target);

    if(ans==1){
        cout<<"found at above ind"<<endl;
    }

    else{
        cout<<"not found"<<endl;
    }
}