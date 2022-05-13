#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    /*
    char arr[5+1]= "apple"; // we take n+1 size in char arrays to store null char as well

    int i=0;
    while( arr[i] != '\0'){

        cout<<arr[i]<<endl;
        i++;
    }
    */
    
    
    cout<<"Enter size="<<endl;// 2nd way to ip/op
    int n; cin>>n;

    char arr2[n+1];
    int i=0;
    while(i<n){
        cout<<"enter elem="<<endl;
        cin>>arr2[i];
        i++;
    }
    cout<<arr2<<endl;
    
    char arr[100];// 3rd way
    cout<<"enter char arr=";
    cin>>arr;
    cout<<arr<<endl;

    cout<<"char at ind 1 is = "<<arr[1];



return 0;
}