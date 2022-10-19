#include <bits/stdc++.h>
using namespace std;



int main(){
        // Your code here
        int arr[10] = {3,3,0,2,1,2,4,2,0,0};
        int n=10;
        int dp[n]={-1};
        dp[n-1]=0;
        
        for(int i=n-2; i>=0; i++){
            int steps = arr[i];
            
            int min = INT_MAX;
            for(int j=1; j<=steps and i+j <n; j++){
                
                if(dp[i+j] != -1 and dp[i+j]<min){
                    min= dp[i+j];
                }
            }
            
            if(min == INT_MAX){
                dp[i]=min+1;
            }
        }
        
    cout<<dp[0]<<endl;
    cout<<"done";

return 0;
}

