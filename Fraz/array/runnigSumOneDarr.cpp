// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
        
//         int prevSum=0;
        
//         for(int i=0; i<nums.size(); i++){
            
//             int currNum = nums[i];
//             nums[i] = nums[i]+prevSum;
//             prevSum= prevSum+currNum;
//         }
//         return nums;        
//     }
// };