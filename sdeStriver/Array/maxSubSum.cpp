// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
        
//         int n=nums.size();
//         int currSum=0;
        
//         int maxElem=INT_MIN;
//         int negElems=0;
//         int maxSum=INT_MIN;
        
//         if(n==0) return 0;
        
//         for(int i=0; i<n; i++){
            
//             if(nums[i]<0) negElems++;
//             maxElem=max(maxElem, nums[i]);
            
//             currSum=currSum+ nums[i];
            
//             if(currSum < 0) currSum=0;
            
//             maxSum= max(maxSum,currSum);
//         }
        
//         if(negElems == n) maxSum=maxElem;
        
//         return maxSum;
//     }
// };