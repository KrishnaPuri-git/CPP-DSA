// class Solution {
// public:
//     vector<int> minOperations(string boxes) {
//         int n=boxes.length(); //str.legth()
//         vector<int> answer(n, 0);
        
//         for(int i=0; i<n; i++){
            
//             for(int j=0; j<n; j++){
                
//                  if(boxes[j]=='1' and j != i){
//                      answer[i]= answer[i]+ abs(j-i);
//                  }
//             }
//         }
//         return answer;
//     }
// };