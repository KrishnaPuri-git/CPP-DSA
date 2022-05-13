#include<iostream>
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

void fib(int n){
    int t1=0;
    int t2=1;
    int next;

    for(int i=1;i<=n;i++){
        cout<<t1<<",";
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return;
}

int fact(int n){
    int f=1;
    for(int i=2; i<=n; i++){
        f=f*i;
    }
    return f;
}

int main(){
    /*prime*/
    cout<<"enter l and u limits="<<endl;
    int l;
    int u;
    cin>>l>>u;
    
    for(int i=l; i<=u; i++){
        int ans=prime(i);
        if(ans==1){
            cout<<i<<",";
        }
    }
    cout<<endl;

    /*fib*/
    cout<<"enter n="<<endl;
    int num;
    cin>>num;
    fib(num);
    cout<<endl;

    /*fact*/
    cout<<"enter no=";
    cin>>num;
    int ans=fact(num);
    cout<<"Fact="<<ans<<endl;

    /*ncr*/
    int r;
    cout<<"enter nCr"<<endl;
    cin>>num>>r;
    ans=fact(num)/(fact(num-r)*fact(r));
    cout<<"nCr="<<ans<<endl;

    /*pascal triang*/
    cout<<"enter r=";/*r=no of rws c=no of clms ,elems in p trig = rCc*/
    int nr;
    cin>>nr;

    for(int i=0;i<nr;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j));
        }
    cout<<endl;
    }

}