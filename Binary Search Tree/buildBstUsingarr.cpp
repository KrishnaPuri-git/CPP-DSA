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

Node* insertBST(Node* root, int val){

    if(root == NULL){
        return new Node(val);
    }

    if(val< root->data){
        root->left = insertBST(root->left, val);
    }

    else{
        root->right = insertBST(root->right, val);
    }
}

void inorder( Node* root){
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

int main(){
    Node* root= NULL;
    root = insertBST(root, 5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);
    cout<<endl;

    //notice here inorder to sort nodes in a bst just do its inorder traversal

return 0;
}