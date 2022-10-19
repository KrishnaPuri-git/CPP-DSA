// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
        
//         int n= nums.size();
//         int totalSum=0;
//         int leftSum=0;
        
//         for(int i=0; i< n; i++){
            
//             totalSum= totalSum+nums[i];
//         }
        
//         for(int i=0; i< n; i++){
            
//             if( (totalSum - nums[i] - leftSum) == leftSum){
//                 return i;
//             }
            
//             leftSum=leftSum+nums[i];
//         }
        
//         return -1;       
//     }
// };