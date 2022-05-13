/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n=";
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j =0; j<=i; j++){
            if((i+j)%2==0)
            cout<<"1";
            else
            cout<<"0";
        }
    cout<<endl;    
    }
return 0;    
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n-2; j>=i; j--){
            cout<<" ";
        }    
        for(int k=0; k<n; k++){ 
            cout<<"*";  
        }
    cout<<endl;    
    }
return 0;    
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=0; i<n; i++){
        int a=i+1;
        for(int l=n-1; l>i; l--){
            cout<<" ";
        }

        for(int j=0; j<=i; j++){
            if(a>=1){
                cout<<a--;
            }
        }
        a=2;
        for(int k=0; k<i; k++){ 
            cout<<a++;
        }
    cout<<endl;    
    }
return 0;    
}
*/

