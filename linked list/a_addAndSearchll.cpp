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

//step 2
void insertAtTail(node* &head,int data){ // we are modifying our llist so head is taken by reference
    node* n = new node(data);//creted new node to be added that gets val in data field and null in the next field bcoz of the constructer

    if(head == NULL){ // 0 nodes in are there in current link list
        head = n;// directly insert it at head
        return;
    }

    node* temp = head;// for travering to the last node of the link list we need a iterator, so we made a pointer that points at head

    while(temp->next != NULL){// 1-->2-->null
        temp = temp->next; // move to next node till next = Null
    }// reached last element whose net is null
    temp->next = n;// point it to newly created node n
}

//step 4
void insertAtHead(node* &head,int val){
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}

//step5
bool linearSearch(node* head,int key){
    node* temp = head;//start
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//step3
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

    insertAtTail(head, 1); //if(head== null) will be true  ll now is 1->Null and head=n= 1
    insertAtTail(head, 2); // 1->  2->Null   a new node with data 2 and next Null is added ,head is still 1
    insertAtTail(head, 3); 
    display(head);

    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    display(head);

    cout<<linearSearch(head,5)<<endl;
    cout<<linearSearch(head,69)<<endl;
return 0;
}