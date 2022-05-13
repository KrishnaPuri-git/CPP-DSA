// check if theres a loop or cycle present in a ll
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

void insertAtHead(node* &head,int val){
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}


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


void makeCycle(node* &head, int pos){

    node* temp=head;
    node* startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;// link temp->next pointing to NULL (end of link list) to  startNode
}

bool checkCycle(node* head){

    node* slow = head;
    node* fast = head;

    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){

            return true;
        }
        return false;
    }
}

// on reaching same node point hare to head and keep tortoise at that same node ,
// then start moving then 1 node at a time till noth of theirs nexts point at same node

void removeCycle(node* &head){

    node* slow = head;
    node* fast = head;

    do{

        slow = slow->next;
        fast = fast->next->next;
    }
    while(slow != fast);

    fast = head; //taking fast to head when fast became equal to slow

    while(slow->next != fast->next){ //till both of them are not pointing to the same node
        
        slow = slow->next;
        fast = fast->next;
    }
    
    slow->next = NULL; //breaking the cycle
}

int main() {
 
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    makeCycle(head, 3);
    
    cout<<checkCycle(head)<<endl;
    removeCycle(head);
    cout<<checkCycle(head)<<endl;
return 0;
}