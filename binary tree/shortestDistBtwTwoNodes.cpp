// 1. find lowest common node or lc ancestor (lcn/lca) common for n1 and n2
// 2. find dist. of n1 from lcn = d1
// 3.""      ""     n2 ""   ""    d2
// 4. return d1+d2

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
Node* LCA (Node *root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }

    if(root->data == n1 or root->data == n2){
        return root;
    }
    // if lca not found find lca in our left sbtree
    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);

    //when LCAs are found and are not null
    if(left != NULL and right != NULL){
        return root;
    }
    
    // if both left and right are = NULL then return NULL
    if(left == NULL and right == NULL){
        return NULL;
    }

    if(left != NULL and right == NULL){
        return LCA(root->left, n1, n2);
    }

    return LCA(root->right, n1, n2);
}

int findDist(Node *root, int k, int dist){

    if(root == NULL){
        return -1;
    }
    
    //lvl till we reach kth node from lca = dist of kth node from LCA

    if(root->data == k){
        return dist;
    }
    
    int left = findDist(root->left, k, dist+1);
    if(left != -1){
        return left;
    }

    return findDist(root->right, k, dist+1);
}

int dist(Node *root, int n1, int n2){
    Node *lca= LCA(root, n1, n2);

    int d1= findDist(lca, n1, 0);
    int d2= findDist(lca, n2, 0);

    return d1+d2;

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

    //test
    cout<<dist(root, 4, 6)<<endl;
        
return 0;
}