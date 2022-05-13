#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int start, int end){
    
    while(start<end){
        
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate(int arr[], int n)
{
    int k=3; //here k=1
    k=k%n;
    
    reverseArr(arr, 0, n-k-1);
    reverseArr(arr, n-k, n-1);
    reverseArr(arr, 0, n-1);
    
    for(int i=0; i<n; i++){

        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

int main(){

    cout<<"enter n="<<endl;
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cout<<"enter elem="<<endl;
        cin>>arr[i];
    }

    rotate(arr,n);

return 0;
}



/*

void rotate(vector<int>& nums, int k) {
    int pos=0;
    int arr[nums.size()];
    for(int i=0;i<nums.size();i++){
        arr[i]=nums[i];
    }
        
    for(int i=0;i<nums.size();i++){
        nums[(i+k)%nums.size()]=arr[i];
    }
}
*/