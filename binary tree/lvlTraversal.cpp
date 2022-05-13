#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){

        data =val;
        left = NULL;
        right = NULL;

    }
};

void printLvlOrder(Node* root){

    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* node= q.front();
        q.pop();

        if(node != NULL){
            cout<<node->data<<" ";

            if(node->left){ //if nodes left is not null then push it
                q.push(node->left);
            }

            if(node->right){
                q.push(node->right);
            }
        }

        else if(!q.empty()){ //if node == NULL check if its not empty
            q.push(NULL);
        }
    }
}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    /*
             1
            / \
           2   3
    */

   root->left->left = new Node(4);
   root->left->right = new Node(5);
    /*
             1
            / \
           2   3
          / \  / \
         4   5 6  7 
    */
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLvlOrder(root);
        
return 0;
}