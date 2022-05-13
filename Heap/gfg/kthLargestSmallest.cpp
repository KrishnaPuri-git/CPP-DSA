#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n, int k){

    priority_queue <int, vector<int>, greater<int>> minHeap;
        //in min heap smallest elem among all its elems is at the root node
        
        for(int i=0; i<k;  i++){
            
            minHeap.push(arr[i]);
        }
        
        for(int i=k; i<n;  i++){
            
            if(arr[i]>minHeap.top()){
                minHeap.pop();//if top most elem(kth largest elem in priority queue)
                minHeap.push(arr[i]);//k sabse bade nodes me jo sabse chota h wo top pe hoga
                
            }
        }
        
        return minHeap.top();
}


int smallest(int arr[],int n, int k){

    priority_queue <int, vector<int>> maxHeap;
        //in min heap smallest elem among all its elems is at the root node
        
        for(int i=0; i<k;  i++){
            
            maxHeap.push(arr[i]);
        }
        
        for(int i=k; i<n;  i++){
            
            if(arr[i]<maxHeap.top()){
                maxHeap.pop();//if top most elem(kth largest elem in priority queue)
                maxHeap.push(arr[i]);//k sabse bade nodes me jo sabse chota h wo top pe hoga
                
            }
        }
        
        return maxHeap.top();
}

int main(){

    int arr[6]={1,0,3,-4,5,-6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<largest(arr, n, 3)<<endl;
    cout<<smallest(arr, n, 4)<<endl;

return 0;
}