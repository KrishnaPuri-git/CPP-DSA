// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         unordered_set<int>uset;
//         for(int num : nums){
//             uset.insert(num);
//         }
//         int longestStreak=0;
        
//         for(int num : nums){
//             if(!uset.count(num-1)){
                
//                 int currNum=num;
//                 int currStreak=1;
                
//                 while(uset.count(currNum+1)){
//                     currNum = currNum+1;
//                     currStreak = currStreak+1;
//                 }
                
//                 longestStreak = max(longestStreak, currStreak);
//             }
//         }
//         return longestStreak;        
//     }
// };