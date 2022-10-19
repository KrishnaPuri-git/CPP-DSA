// //LL1 is 2->4->3->NULL
// //LL1 is 5->6->7->9->NULL
// //sumLL  7->0->1->0->1

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//         ListNode *dummy= new ListNode(0); //to point at head(dummy->next) of sumLL for returning
//         ListNode *temp= dummy;// for iteration in sumLL
        
//         int carry=0;
        
//         while( l1 != NULL or  l2 != NULL or carry != 0){ //if this is false then it means both l1 and l2 are null and carry is 0 so there's nothing to add and we are done
            
//             int sum=0;
//             if( l1 != NULL){
                
//                 sum= sum+ l1->val;
//                 l1= l1->next;
//             }
            
//              if( l2 != NULL){
                
//                 sum= sum+ l2->val;
//                 l2= l2->next;
//             }
            
//             sum= sum+carry;
//             carry= sum/10;
            
//             ListNode *sumNode= new ListNode(sum%10);
            
//             temp->next = sumNode;
//             temp= temp->next;
//         }
//         return dummy->next;
//     }
// };