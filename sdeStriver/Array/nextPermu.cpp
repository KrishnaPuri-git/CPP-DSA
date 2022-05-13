// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
        
//         int n= nums.size();
    
//         int small;
//         int greater; // remember
        
//         for(small= n-2; small >=0; small--){
            
//             if(nums[small]<nums[small+1])
//                 break;
            
//         }
        
        
//         // if n is 1 then small= 1-2 = -1
//         // eg- num= 54321 then next purmutation will be 12345 i.e reverse of 54321
//         if(small == -1) reverse(nums.begin(), nums.end());
        
//         else{
            
//             for(greater= n-1; greater> small; greater--){
                
//                 if(nums[greater] > nums [small])
//                     break;
//             }
            
        
//             swap(nums[small], nums[greater]);
//             reverse(nums.begin()+small+1, nums.end());
//         }
        
        
//     }
// };
// //https://www.youtube.com/watch?v=LuLCLgMElus&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=10