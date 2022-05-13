#include<bits/stdc++.h>
using namespace std;

/*
     1
   2    3
  4 5  6 7

*/

//preorder traversal==>

//root
//full left subtree
//full right subtree

//preorder = 1245367


//inorder==>

//full left subtree
//root
//full right subtree

// inorder = 4251637


//postorder traversal==>

//full left subtree
//full right subtree
//root

//postorder = 4526731

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

void preorder( struct Node* root){
    //root
    //full left subtree
    //full right subtree
    //preorder = 1245367
    if (root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder( struct Node* root){
//full left subtree
//root
//full right subtree

// inorder = 4251637
    if (root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder( struct Node* root){
//full left subtree
//full right subtree
//root
//postorder = 4526731
    if (root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

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
          / \
         4   5
    */
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //preorder(root);
    //inorder(root);
    postorder(root);
   
return 0;
}