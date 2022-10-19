// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
      
//         unordered_map<int, int> umap;
//         vector<int> ansVect;
//         for(int i=0; i<nums.size(); i++){
            
//             if( umap.find(target-nums[i]) != umap.end()){
                
//                 int secondElemInd= umap[target-nums[i]];
//                 ansVect.push_back(i);
//                 ansVect.push_back(secondElemInd);
//                 return ansVect;
//             }
//             umap[nums[i]] = i;
//         }
        
//         return {-1,-1};
        
//     }
// };