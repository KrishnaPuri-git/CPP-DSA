// class Solution {
// public:
//     int numPairsDivisibleBy60(vector<int>& time) {
        
//         int count=0;
//         vector<int>v(60,0);
//         for(int i=0;i<time.size();i++)
//         {
//             int a=time[i]%60;
//             if(a==0)
//                 count+=v[0]; //if time[i] is 60, 120 (multiple of 60)
//             else
//                 count+=v[60-a]; // 60-30= 30
//             v[a]++;
//         }
//         return count;
//     }
// };