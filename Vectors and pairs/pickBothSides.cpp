#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vect{ 10, 20, 30, -40, -10, -15, 50};
    
    int start=0;
    int end= vect.size()-1;
    int b=4;
    int sum=0;

    while(b!=0){

        if(vect[start]>vect[end]){

            sum=sum+vect[start];
            start++;
            b--;
        }

        else{
            sum=sum+vect[end];
            end--;
            b--;
        }
    }
    cout<<sum;
}

