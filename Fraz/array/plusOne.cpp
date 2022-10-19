// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
        
//         int n=digits.size();
//         int ninesCount=0;
//         for(int i=n-1; i>=0; i--){
            
//             if(digits[i]== 9){
                
//                 digits[i]=0;
//                 ninesCount++;
//             }
            
//             else{
//                 digits[i] = digits[i] +1;
//                 break;
//             }
//         }
        
//         if(ninesCount == n){
            
//             digits.resize(n+1);
//             digits[0]=1;
//         }
        
//         return digits;
        
//     }
// };