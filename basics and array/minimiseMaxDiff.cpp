// int getMinDiff(int arr[], int n, int k) {
//         // code here
        
//         sort(arr, arr + n);
        
//         int maxi = arr[n-1];
//         int mini = arr[0];
//         int ans= maxi - mini;
        
//         //we know that prev(smaller elem of the two) ko +k krke 
//         //and next(greater elem of the two) ko -k krke hi diff minimize hoga
//         //toh isi set criteria me modify krna hoga to get min diff
//         //ab bas ye modification krne pe jo current maxi and current 
//         //mini elem.s arahe h unhe store karo and unka diff store karo
//         //jis bhi modification pe min ans(maximum diff minimised) aye use return krdo
        
//         for(int i=0; i<n-1; i++){
            
//             maxi= max(arr[i]+k, arr[n-1]-k); // curr maxi
//             mini= min(arr[i+1]-k, arr[0]+k); //curr mini
            
//             ans= min(ans, maxi - mini);
//         }
        
//         return ans;
//     }