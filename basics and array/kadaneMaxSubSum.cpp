#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int maxSubSum(int arr[],int n){
    int maxsum=0; int currsum=0;
    int maxi=INT_MIN; int negCount=0;

    for(int i=0; i<n; i++){
            
        if(arr[i]<0){ //check if all elems are neg then maxsum= max elem of all
            maxi=max(maxi,arr[i]);
            negCount++;
        }
            
        currsum=currsum+arr[i];

        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
        
    if(negCount == n){
        maxsum=maxi;
    }
    
return maxsum;
}

int invMaxSubSum(int arr[],int n){
    int maxsum=0; int currsum=0;

    for(int i=0; i<n; i++){
        currsum=currsum+(-(arr[i]));// notice difference

        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int maxCirSubSum(int arr[],int n){
    int invmaxsubsum=invMaxSubSum(arr,n);
    int invarrsum=0;
    int count=0;
    int mini= INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]<0){ // all elements are -ve nos in arr then most positive or larger neg no out of them = maxCircularSubSum
            count=count+1;
            mini=max(arr[i],mini);
        }
        invarrsum=invarrsum+(-1*arr[i]);
    }
    cout<<"invarrsum="<<invarrsum<<endl;
    cout<<"maxsubsum="<<invmaxsubsum<<endl;
    int ans=0;
    if(count==n){
        ans=mini;
    }
    else{
        ans= -(invarrsum-invmaxsubsum);
    }
    return ans;  

}


int main(){
    int n;cout<<"enter size=";cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter elem=";
        cin>>arr[i];
    }
    cout<<maxCirSubSum(arr,n);
    /*cout<<maxSubSum(arr,n);*/
    /*subarr(arr,n);*/
}