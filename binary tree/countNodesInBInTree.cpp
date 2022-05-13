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

int countNodes( Node* root){

    if(root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;

}

int sumAllNodes(Node* root){

    if(root == NULL){
        return 0;
    }

    return sumAllNodes(root->left) + sumAllNodes(root->right) + root->data;

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

         sum = 1+2+3+4+5+6+7 = 28
         no = 7 (1 to 7)
    */
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<countNodes(root)<<endl;
    cout<<sumAllNodes(root)<<endl;

        
return 0;
}