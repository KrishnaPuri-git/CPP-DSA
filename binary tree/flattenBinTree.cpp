//https://www.youtube.com/watch?v=sWf7k1x9XR4

// TC - O(N) 
// SC - O(N)

// code-

// class Solution {
//     TreeNode* prev = NULL;
// public:
//     void flatten(TreeNode* root) {
//         if(root == NULL) return; 
        
//         flatten(root->right); 
//         flatten(root->left); 
        
//         root->right = prev;
//         root->left = NULL; 
//         prev = root; 
//     }
// };