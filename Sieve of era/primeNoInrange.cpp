#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){

    int rng;cout<<"enter range = ";cin>>rng;
    int arr[rng];

    for(int i=0; i<=rng; i++){

        arr[i]=0;
    }

    for(int i=2; i<=rng; i++){

        for(int j=i*i; j<=rng; j=j+i){

            arr[j]=1;
        }
    }

    for(int i=2; i<=rng; i++){

        if(arr[i]==0){
            cout<<i<<" ";
        }
    }

return 0;
}