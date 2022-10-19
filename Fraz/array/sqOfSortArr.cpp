// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
        
//         int n= nums.size();
        
//         int start=0;
//         int end=n-1;
        
//         int fillIndx=n-1;
//         vector<int>ans(n,0);
        
//         while(fillIndx >= 0){
            
//             if((nums[start]* nums[start]) > (nums[end]* nums[end])){
                
//                 ans[fillIndx] = pow(nums[start],2);
//                 //nums[fillIndx] = pow(nums[start],2); this wasnt working
//                 start++;
//             }
//             else{
                
//                 ans[fillIndx] = pow(nums[end],2);
//                 end--;
                
//             }
            
//             fillIndx--;
//         }
        
//         return ans;
//     }
// };