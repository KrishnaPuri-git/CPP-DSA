// class Solution {
// public:
//     int maxScore(vector<int>& cards, int k) {
        
//         int n = cards.size();
//         int slideSum = 0;
        
//         for(int i = n - k; i < n; i++) //last k elems ka sliding window ka sum
//             slideSum += cards[i];
        
//         int maxSum = slideSum;
//         for(int i = 0; i < k; i++)
//         {
//             maxSum -= cards[n - k + i]; //sliding window ke left se elems sub karo
//             maxSum += cards[i]; //age ke elems add karo 
//             slideSum = max(slideSum, maxSum);
//         }
        
//         return slideSum;
//     }
// };