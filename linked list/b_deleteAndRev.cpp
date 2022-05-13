/*
 limitations in array-
 1. fixed size
 2. contiguous ( if have 20 block of memory somewhere and 30 block memory in diff pos then we can not allocate array of 50 memory)
 3. insertion & deletion is costly 
*/
#include <bits/stdc++.h>
using namespace std;

//step 1
class node{ //Node structure
    public:
    int data; 
    node* next; // pointer
    node(int val){ 
        data = val; //constructor to fill provided val in data field
        next = NULL; //and put null in next(pointer) field 
    }
};

void deleteAtHead(node* &head){// if we have to del 1st node only then how will we access n-1 th node like we are doing in void deletion func.
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteion(node* head, int val){ // suppose nth node is to be deleted 

    if(head==NULL){// empty linked list no element can be deleted
        return;
    }

    if(head->next==NULL){ // only 1 (head node) node present in link lisr so neither n-1 nor n+1 is there

        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while (temp->next->data != val){ // iteerate till rech n-1 th node 1 2 3 4 5 to del 5,  4->next->data ==5
        temp=temp->next;
    }
    node* todelete = temp->next; // node to be deleted is stored
    temp->next=temp->next->next; //link of n-1 th node changed to n+1 th node
    //n-1          //n    //n+1
    //point next of n-1 th node to n + 1th node

    delete todelete;
}

node* reverse(node* &head) {
    node* prevptr = NULL;
    node* curptr = head;
    node* nextptr;

    while(curptr != NULL){
        nextptr = curptr ->next;
        curptr -> next = prevptr;

        prevptr = curptr;
        curptr = nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head) {
    if(head == NULL || head -> next == NULL){ // 0 or 1 elem in link list
        return head;
    }
    node* newhead = reverseRecursive(head -> next);
    head -> next ->next = head;
    head -> next = NULL;
    return newhead;
}

void display(node* head){// call by ref bcoz here werent modifying
    node* temp = head; //pointer to start iterating from head
    while(temp != NULL){ // till we reach the end of li.list
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
// node* revGroupOfKnodes( node* &head, int k){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;

//     int count=0;

//     while (currptr!=NULL && count<k)
//     {
//         nextptr = currptr ->next;
//         currptr -> next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//         count ++;
//     }

//     if(nextptr!=NULL){
//         head -> next = revGroupOfKnodes(nextptr , k);
//     }

// }


int main(){

    node* head=NULL;

    deleteion(head, 3);
    deleteAtHead(head);
    display(head);

    node* newhead = reverse(head);
    display(newhead);

    node* newhead = reverseRecursive(head);
    display(newhead);

return 0;
}
