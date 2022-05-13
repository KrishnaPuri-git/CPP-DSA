// height of a bin tree = depth of the tree's deepest node
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

int hght(Node* root){

    if(root == NULL){
        return 0;
    }

    int lHeight = hght(root->left);
    int rHeight = hght(root->right);

    return max(lHeight, rHeight)+1; // +1 for current noode count 
}

// diameter of bin tree = no of nodes in the longest path between any 2 leaves

// we calc diameter of left subtree and then its right subtree diameter and also calc the height of left and right subtree
// if our diameter goes thru our current node then diameter = L subtree hgt + R subtree hgt +1
// else when our diameter does not goes thru our current node then diameter = max(L diameter, R diameter)

int dia(Node* root){

    if(root == NULL){
        return 0;
    }    

    int lHeight = hght(root->left);
    int rHeight = hght(root->right);
    int currDia= lHeight + rHeight +1;


    int lDia = dia(root->left);
    int rDia = dia(root->right);

    return max(currDia, lDia, rDia);
    
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

    cout<<hght(root);
    cout<<dia(root);
        
return 0;
}