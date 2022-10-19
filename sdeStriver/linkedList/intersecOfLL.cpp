// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
// 		unordered_map<ListNode*, int> m; //node* is nodes address
        
// 		while(headA != NULL){
// 			m[headA]++;
// 			headA = headA -> next;
// 		}
        
// 		while(headB != NULL){
// 			if(m[headB] > 0){ //if this address is already visited
// 				return headB;
// 			}
// 			headB = headB -> next;
// 		}
// 		return NULL;
//     }
// };