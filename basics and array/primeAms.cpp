#include<bits/stdc++.h> 
using namespace std;

int prime(int n){
    if(n<2){
        return 0;
    }
    int flag=1;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            flag=0;
            return 0;
        }
    }
    if(flag=1)
        return 1;
}

int rev(int n){
    int no=n;
    int rev=0;
    while(no!=0){
        rev=(rev*10)+(no%10);
        no=no/10;
    }
    return rev;
}

int ams(int n){
    int no=n;
    int s=0;
    while(no!=0){
        int dig=no%10;
        s=s+(dig*dig*dig);//s=s+(dig)^3;//s=s+pow(dig,3);//
        no=no/10;
    }
    return s;
}

int main(){
    int num;
    cout<<"enter num=";
    cin>>num;
    int ans=prime(num);
    if(ans==1)
        cout<<"PRIME"<<endl;
    else
        cout<<"NOT PRIME"<<endl;

    int revnum=rev(num);
    cout<<"REVERSE="<<revnum<<endl;

    if(revnum==num)
    cout<<"PALINDROME"<<endl;

    int amsnum=ams(num);   
    if(amsnum==num){
        cout<<"AMSTRONG";
    }



}
