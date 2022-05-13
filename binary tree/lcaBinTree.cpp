#include<bits/stdc++.h>
using namespace std;

    /*
             1
            / \
           2   3
          / \  / \
         4   5 6  7
        / \
       8   9
    */

// lca(9,5) = 2 (lowest common node or lowest common ancestor)

/* brute approach 

travel till 9 and store that path in a data structure = [1, 2, 4, 9]
""     till 5 "" " "                               "" = [1, 2, 5]

see last common term in these paths = 2 = lca

*/
//https://youtu.be/_-QHfMDde90  -understand

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

Node* LCA( Node* root, int n1, int n2){

    if(root == NULL){
        return NULL;
    }

    //if either n1 or n2 is not even present in the bin. tree
    if(root->data==n1 or root->data==n2){
        return root;
    }

    Node* leftLCA= LCA(root->left, n1, n2);
    Node* rightLCA= LCA(root->right, n1, n2);

    // both are not null or we can say n1, n2 are found to be present in tree
    if(leftLCA && rightLCA){
        return root;
    }
    if(leftLCA != NULL){
        return leftLCA;
    }
    return rightLCA;
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

    int n1=6, n2=7;
    Node* lca = LCA(root, n1, n2);

    //test
    if(lca == NULL){
        cout<<"LCA doesnt exist "<<endl;
    }
    else{
        cout<<" LCA ="<<lca->data<<endl;
    }

return 0;
}






