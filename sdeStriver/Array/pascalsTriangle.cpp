// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
        
//         int n= numRows;
//         vector<vector<int>> ans(n);             // initialize n rows
        
//         for(int i = 0; i < n; i++) {
//                             // (size, value)
//             ans[i] = vector<int>(i+1,1);        // ith row(0-indexed) has i+1 elements
//             for(int j = 1; j < i; j++)          // 1st and last elements will be 1, rest will be   
//                 ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1]; //sum of two elements from above row        
//         }
//         return ans;
//     }

// };
