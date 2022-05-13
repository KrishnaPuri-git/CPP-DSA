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

bool isBST(Node* root,int mini,int maxi){

    //empty bst
    if(root == NULL){
        return true;
    }
    
    if(root->data >= maxi and root->data <= mini){
        return false; //invalid
    }
    
    return isBST(root->left, mini,root->data) and isBST(root->right, mini,root->data);
    // if(min != NULL and root->data <= min->data){

    //     return false;
    // }


    // if(max != NULL and root->data >= max->data){

    //     return false;
    // }

    // bool leftValid = isBST(root->left, min, root);
    // bool rightValid = isBST(root->left, max, root);

    // return leftValid and rightValid;
    
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

    int maxi= INT_MAX;
    int mini= INT_MIN;

    if(isBST(root,mini, maxi)){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"inv"<<endl;
    }

return 0;
}