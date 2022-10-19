// class Solution {
// public:
//     int maxArea(vector<int>& height) {
        
//         int n= height.size();
//         int left=0, right=n-1;
//         int maxArea= INT_MIN;
        
//         while(left < right){
            
//             int currArea= min(height[left], height[right]) * (right-left);
            
//             if(currArea<maxArea){
                
//                 if(height[left] < height[right])
//                     left++;
//                 else
//                     right--;
//             }
            
//             else{
//                 maxArea= currArea;
                
//                 if(height[left] < height[right])
//                     left++;
//                 else
//                     right--;
                
//             }

//         }
        
//         return maxArea;
//     }
// };
