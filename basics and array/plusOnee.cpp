#include<bits/stdc++.h> 
using namespace std;

int main(){

    cout<<"enter array size n=";
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"enter array elem=";
        cin>>arr[i];
    }

    string ansstr = "";
    for(int i=0; i< n; i++){
            
        ansstr =ansstr + to_string(arr[i]);
    }
    
    int stoint = stoi(ansstr) + 1; cout<< "stoint=" <<stoint <<endl;
    string itostr = to_string(stoint); cout<< "itostr=" <<itostr <<endl;
    
    int i= itostr.size() -1;
    int arr2[itostr.size()];
    while ( stoint != 0){

        arr2[i] = stoint % 10;
        stoint= stoint/10;
        i--;
    }
    for(int i=0; i< itostr.size(); i++){
            
        cout<< arr2[i] << ",";
    }
}