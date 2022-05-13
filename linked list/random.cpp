class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        
        ListNode *cur=head;
        int len=1;
        
        while(cur->next!=NULL){
            cur=cur->next;
            len++;
        }
        //now curr is at last node
        //make curr->next point to head(starting elem of orignal LL)so that LL is now circular LL
        cur->next=head;
        k=k%len;
        k=len-k; 
        //if we rotate LL of len 5 , 12 times after 10 times(multiple of len) it becomes as oringnal(k%Len) so we only gotta rotate it 2 times
        
        while(k--){ //make curr reach at len - k th elem
            cur=cur->next;
        }
        head=cur->next; //point head to curr-> next this is new head
        cur->next=NULL; //
        return head;        
    }
};