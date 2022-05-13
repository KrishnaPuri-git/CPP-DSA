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

int height(Node* root){

    if(root == NULL){
        return 0;
    }

    int lHeight = height(root->left);
    int rHeight = height(root->right);

    return max(lHeight, rHeight)+1; // +1 for current noode count 
}

bool isBAlanced(Node* root){

    if(root == NULL){
        return true;
    }

    if(isBAlanced(root->left) == false){
        return false;
    }

    if(isBAlanced(root->right) == false){
        return false;
    }

    int leftchildHIGHT = height(root->left);
    int rightchildHIGHT = height(root->right);
    if(abs(leftchildHIGHT-rightchildHIGHT) <= 1){
        return true;
    }

    else{
        return false;
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
          / \
         4   5
    */
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    if(isBAlanced(root)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
        
return 0;
}