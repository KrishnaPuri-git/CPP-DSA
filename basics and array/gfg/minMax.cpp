#include <bits/stdc++.h>
using namespace std;

void findMaxMin(int arr[],int n){

    int i=0;
    int maxi=INT_MIN;
    int mini=INT_MAX;

    if(n==0){
        maxi=0;
        mini=0;
        //no elems
        cout<<maxi<<","<<mini<<endl;
        return;
    }

    else if(n==1){
            maxi=arr[i];
            mini=arr[i];
            cout<<maxi<<","<<mini<<endl;
            return;
    }

    else{ //n=2 and above
        
        maxi=max(arr[i], arr[i+1]);
        mini=min(arr[i], arr[i+1]);

        if(n==2){
            cout<<maxi<<","<<mini<<endl;
            return;
        }

        for(int i=1; i<n-1; i=i+2){

            int first=i;
            int second=i+1;

            maxi=max(maxi,arr[first]);
            maxi=max(maxi,arr[second]);
            
            mini=min(mini, arr[first]);
            mini=min(mini, arr[second]);
        }

    }
    cout<<maxi<<","<<mini<<endl;
    return;    
}



int main(){

    cout<<"enter n="<<endl;
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cout<<"enter elem="<<endl;
        cin>>arr[i];
    }

    findMaxMin(arr,n);

return 0;
}