// an array and int k (window) given
//see eplaination of aditya verma yt and code of apna college

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;

    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }

    deque<int> dq;
    vector<int> ansv;

    for(int i=0; i<k; i++){
        
        //agar jo elem ham push krne ja rahe h usse chote jo bhi elem dal rakhe h pehle se dq me wo useless elems pop krdo 
        while(!dq.empty() and a[dq.back()] < a[i]){
            dq.pop_back();
        }
        //ab jo front elem h dq ka wo currently jis idx tak window iterate ho chuki h max elem h toh use push krdo
        dq.push_back(i);
    }

    //ab jo elem front me h dq ke k size ki sliding window ka max elem h toh uska INDEX answer vectr me push krdo
    ansv.push_back(a[dq.front()]);

    // we have got the max elem for first window or first k elems now working for rest 
    for(int i=k; i<n; i++){

        if(dq.front() == i-k){ //erasing elems of prev window
            dq.pop_front();
        }

        while(!dq.empty() and a[dq.back()] < a[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        ansv.push_back(a[dq.front()]);
    }


    //printing ans
    for(auto i: ansv){
        cout<<i<<" ";
    }
    cout<<endl;


}

//4 6 7 1 2 5 8
//7 7 7 5 8