// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
// 		// if head is NULL then return false;
//         if(head == NULL)
//             return false;
        
// 		// making two pointers fast and slow and assignning them to head
//         ListNode *fast = head;
//         ListNode *slow = head;
        
// 		// till fast and fast-> next not reaches NULL
// 		// we will increment fast by 2 step and slow by 1 step
//         while(fast != NULL && fast ->next != NULL)
//         {
//             fast = fast->next->next;
//             slow = slow->next;
            
			
// 			// At the point if fast and slow are at same address
// 			// this means linked list has a cycle in it.
//             if(fast == slow)
//                 return true;
//         }
        
// 		// if traversal reaches to NULL this means no cycle.
//         return false;        
//     }
// };


// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if(head == NULL||head->next == NULL)
//             return NULL;
        
//         ListNode* fast = head;
//         ListNode* slow = head;
        
//         while(fast->next != NULL&&fast->next->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
            
//             if(slow == fast) {
//                 fast=head;
//                 while(slow != fast){
//                     slow = slow->next;
//                     fast = fast->next;
//                 }
//             return slow;
//             }
//         }
//     return NULL;
//     }
// };