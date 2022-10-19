#include<bits/stdc++.h> 
using namespace std;

int main(){

    int n=50;

    vector<bool> mark(n+1, true);// intially mark all no.s are prime
    mark[0]= false, mark[1]= false; // 1 and 0 are not prime

    for(int i=2; i<=n; i++){

        if(mark[i] == true){ // if a number is marked prime make its all multiples false/ not prime

            for(int j=2*i ; j<= n; j= i+j)
                mark[j] = false;
        }

    }

    for(int i=1; i<=50; i++){

        if(mark[i]== true){
            cout<<i<<" ";
        }
    }

return 0;
//1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, and 47.
}