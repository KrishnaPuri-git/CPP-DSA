#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

// array size is limited so lilnk list implementation is better
//front = points to first elem , back = """" last elem  and its next points to null
// enque insert at back
// dequeue remove at front( point front to net elem and del previous elem)
//peek() elem at front
//empty() tells if link list is empty or not front ahead of back after dequeing thus points to backs->next which is null

class node{
    public:
    int data;
    node* next;

    node( int val){

        data= val;
        next = NULL;
    }
};

class Queue{

    node* front;
    node* back;

    public:
    Queue(){
        front=NULL;
        back =NULL;
    }

    void push(int x){
        node* n=new node(x);
        if(front==NULL){//empty queue
            back=n;
            front=n;
        }
        back->next=n; // store at next
        back = n; //move back at n node we added at last
    }

    void pop(){

        if( front ==NULL){
            cout<<"Queue underflow no elem to pop"<<endl;
            return;
        }

        node* todelete = front; //store current front
        front = front->next; // point front to next

        delete todelete; //delete previous front
    }

    int peek(){
        if( front ==NULL){
            cout<<"Queue underflow no elem to pop"<<endl;
            return -1;
        }

        return front->data;
    }

    bool empty(){
         if( front ==NULL){
            cout<<"Queue underflow no elem to pop"<<endl;
            return 1;
        }
        else 
        return 0;

    }
};

int main(){

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout<<q.peek()<<endl;// 1
    q.pop();//pop 1

    cout<<q.peek()<<endl; // 2
    q.pop(); //3
    q.pop(); //underflow, empty queue

    cout<<q.empty()<<endl;
}