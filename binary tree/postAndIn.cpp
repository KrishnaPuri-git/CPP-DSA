// const. a binary tree from its given post and inorder traversal
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

int search(int inorder[], int start, int end, int curr){

    for(int i=start; i<=end; i++){

        if(inorder[i] == curr){

            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[], int inorder[], int start, int end){

    static int idx = 4; //array size -1

    if(start > end){ //represents pair of invalid pointers 

        return NULL;
    }

    int curr= postorder[idx];
    idx --;

    Node* node = new Node(curr);

    if(start == end){ //only 1 elem in inorder

        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->right = buildTree(postorder, inorder, pos+1, end);
    node->left = buildTree(postorder, inorder, start, pos-1);
    
    return node;
}

void inorderPrint( struct Node* root){ //just for checking if our prog. is right

    if (root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);

}

int main(){

    int postorder[]= {4, 2, 5, 3, 1};
    int inorder[]=  {4, 2, 1, 5, 3};

    //buildTree(preorder, inorder, 0, 4);
    Node* root = buildTree(postorder, inorder, 0, 4);
    inorderPrint(root);

return 0;
}