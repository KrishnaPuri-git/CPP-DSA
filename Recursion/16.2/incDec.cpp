#include <bits/stdc++.h>
using namespace std;

void decPrint( int n){

    if(n == 0 ){
        return;
    }
    cout<<n<<",";
    decPrint(n-1);
    
}

void incPrint( int n){
    
    if( n == 0){
        return;
    }
    
    incPrint(n-1);
    cout<<n<<",";

}

int main(){
    int n; cin>>n;
    decPrint(n);

    cout<<endl;
    
    incPrint(n);
}