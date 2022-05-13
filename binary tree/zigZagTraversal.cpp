    /*
             1
            / \
           2   3
          / \  / \
         4   5 6  7 
    */

// lvl order = 1,
//            2,3,
//          4,5,6,7


//zig-zag    = 1,  
//            3,2,  
//          4,5,6,7


/* for lvl order take 1 que and 1 vector of vector
    1. push 1 in empty que

    2. Iterate que and take out all elem.s present(here only 1 is present) of que and push its ->left and ->right in que , 
       now since only 1 was at curr lvl put it in vector of vectors

    3.again iterate que and take out ekems present( here 2 ,3 ) take their left and right put them in que
      then put 2, 3 in vect of vect

    4. again iterate que take 4,5,6,7 out push their respective lefts and right in que( here there are no lefs and rights)
       so we dont anything in que, now put 4,5,6,7 in v of v
    
    5. que - empty now so lvl order traversal completed and stored in vect ot=f of vect
*/


/*
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> ans; 
    
    if(root == NULL) return ans; // if empty tree bheja toh empty vector return kr do

    queue<Node*> q; 
    q.push(root);
    

    while(!q.empty()) {
        int size = q.size();
        vector<int> level; 
        for(int i = 0;i<size;i++) {

            Node *node = q.front(); //take same lvl elems one by one from front of que( rememer que is lifo so front is bottomost elem)
            q.pop(); //pop them 1 by one

            if(node->left != NULL) q.push(node->left); // push left and right of curr front of que if they're not null
            if(node->right != NULL) q.push(node->right); 
            level.push_back(node->data); //push curr fron elem of curr lvl
        }
        ans.push_back(level); //push the vector cantaining all elems of curr lvl
    }
    return ans; 
}


vector<vector<int>> ZigZaglevelOrder(Node* root) {
    vector<vector<int>> ans; 
    
    if(root == NULL) return ans; // if empty tree bheja toh empty vector return kr do

    queue<Node*> q; 
    q.push(root);
    bool leftToRight = true; //flag for order

    while(!q.empty()) {
        int size = q.size();
        vector<int> level; 

        for(int i = 0;i<size;i++) {

            Node *node = q.front(); //take same lvl elems one by one from front of que( rememer que is lifo so front is bottomost elem)
            q.pop(); //pop them 1 by one

            int index = (leftToRight) ? i :(size-1); // in which order we have to fill in que
            level[index] = node->data;

            if(node->left != NULL) q.push(node->left); // push left and right of curr front of que if they're not null
            if(node->right != NULL) q.push(node->right); 
            level.push_back(node->data); //push curr fron elem of curr lvl
        }

        //change order after each lvl
        leftToRight = !leftToRight;
        ans.push_back(level); //push the vector cantaining all elems of curr lvl
    }
    return ans; 
}
*/