#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int ele){
    int low = 0;
    int high = n;
    int res = -1;
    int firstind=-1;
    int lastind=-1;
    
    while(low<=high){
        int mid = (low + high)/2;

        if(a[mid] == ele){
            
            int newhigh = mid -1;
            firstind=mid;
            low = 0;

            while(low<=newhigh){
                int mid = (low + newhigh)/2;

                if(a[mid] == ele){
                    firstind=mid;   
                    break;
                }

                else if(a[mid] > ele){
                    newhigh = mid - 1;
                }

                else{
                    low = mid + 1;
                }
            }
            
            cout<<"first ind="<<firstind;
            
            int newlow = mid +1;
            lastind=mid;
            high = n;

            while(low<=newlow){
                int mid = (low + high)/2;

                if(a[mid] == ele){
                    lastind=mid;   
                    break;
                }

                else if(a[mid] > ele){
                    high = mid - 1;
                }

                else{
                    newlow = mid + 1;
                }

                cout<<"last ind="<<lastind;
            }
        }

        else if(a[mid] > ele){
            high = mid - 1;
        }

        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){

    int n,key;
    cout<<"Enter array size ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements ";

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter key element ";
    cin>>key;

    cout<<"Found the element "<<key<<" at position "<<BinarySearch(arr,n,key);

    return 0;
}