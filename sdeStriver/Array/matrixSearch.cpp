// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         int i=0;
//         int rows= matrix[0].size();
//         int j=rows-1;
        
//         while(i<matrix.size() and j>=0){
            
//             if(matrix[i][j] == target){
//                 return true;
//             }
            
//             else if(target < matrix[i][j]){
//                 j--;
//             }
            
//             else
//                 i++;
//         }
//         return false;        
//     }
// };