#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

/*
int del(int arr[],int n,int pos){
    int newarr[n-1];
    for(int i=pos; i<n-1; i++){
        newarr[i]=arr[i+1];
    }
    return newarr;
}*/

int intsec(int arr1[], int n1, int arr2[], int n2){
    if (n1<n2){
        int ansarr[n2];
        int a=0;
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if (arr1[i]==arr2[j]){
                    ansarr[a]=arr1[i];
                    n2=n2-1;
                    arr2[n2];
                    for(int i=j; i<n2-1; i++){
                        ansarr[i]=arr2[i+1];
                    }
                    a++;
                }
            }
        }
        for(int i=0; i<a; i++){
            cout<<ansarr[i];
        }
    }
    /*else{

    }*/
    
}

int main(){
    int n1,n2;cout<<"enter size 1 and 2 =";
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];

    for(int i=0; i<n1; i++){
        cout<<"enter array 1 elem=";
        cin>>arr1[i];
    }

    for(int i=0; i<n2; i++){
        cout<<"enter array 2 elem=";
        cin>>arr2[i];
    }
    intsec(arr1,n1,arr2,n2);

}