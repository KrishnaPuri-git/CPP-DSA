#include<bits/stdc++.h> 
using namespace std;

int main() {
   int arr[5] = {4, 1, 8, 2, 9};  
   
   int len = sizeof(arr)/sizeof(arr[0]);
   int cols = sizeof(arr) / sizeof(arr[0]); // returns cols for a matrix array
   int rows = sizeof(arr[0]) / sizeof(int); // returns rows for a matrix array
   
   cout << "The length of the array is: " << len<<endl;
   cout<<"rows="<<rows<<endl;
   cout<<"col="<<cols<<endl;
   
   /*

    vector<int> matrix;

    int totalCols=matrix.size();
    int totalRows=matrix[0].size(); 

   */
  
   return 0;
}