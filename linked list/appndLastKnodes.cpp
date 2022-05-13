// append last k nodes of the link list
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


int length(node *head){

    int l=0;
    node* temp = head;

    while( temp != NULL){

        l++;
        temp =temp->next;
    }
    return l;
}

node* kappend( node* &head, int k){

    node* newHead;
    node* newTail;
    node* tail=head;

    int l = length(head);
    k=k%l; //if in case they give k > length 
    int count = 1;

    while ( tail->next != NULL){

        if( count == l-k ){
            newTail = tail;
        }

        if( count == (l-k)+1 ){
            newHead = tail;
        }

        tail = tail->next;
        count++;

    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;

}
