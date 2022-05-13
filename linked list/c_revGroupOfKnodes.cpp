#include <bits/stdc++.h>
using namespace std;

class node{ //Node structure
    public:
    int data; 
    node* next; // pointer
    node(int val){ 
        data = val; //constructor to fill provided val in data field
        next = NULL; //and put null in next(pointer) field 
    }
};
/*
1->2->3->4->5->6

eg k=2

1) rev first 2 nodes  1  <-  2   3->4->5->6
                      |      |
                    head    prev                                    ___________ 
                                                                    |          |
2) point head -> recursively reversed (group wise) rest of the list 1  <-  2   4->3->6->5
                                                                    |      |
                                                                   head    prev

3)prev is the new head
*/
//////////////////////////////////////////////////////////////////////////
node* revGroupOfKnodes( node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;

    while (currptr!=NULL && count<k) // reversed first k nodes
    {
        nextptr = currptr ->next;
        currptr -> next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count ++;
    }

    if(nextptr!=NULL){
        head -> next = revGroupOfKnodes(nextptr , k);
    }
    return prevptr;
}
//////////////////////////////////////////////////////////////////////////////////////////////





void insertAtTail(node* &head,int data){ // we are modifying our llist so head is taken by reference
    node* n = new node(data);//creted new node to be added that gets val in data field and null in the net field bcoz of the constructer

    if(head == NULL){ // 0 nodes in are there in current link list
        head = n;// directly insert it at head
        return;
    }

    node* temp = head;// for travering to the last node of the link list we need a iterator, do we made a pointer that points at head

    while(temp->next != NULL){// 1-->2-->null
        temp = temp->next; // move to next node till next = Null
    }// reached last element whose net is null
    temp->next = n;// point it to newly created node n
}


void display(node* head){// call by ref bcoz here werent modifying
    
    node* temp = head; //pointer to start iterating from head
    while(temp != NULL){ // till we reach the end of li.list
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);
    int k=2;
    node* newhead= revGroupOfKnodes(head, k);
    display(newhead);
}