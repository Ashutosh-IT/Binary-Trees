class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        if(!root) return;
        swap(root->left,root->right);
        
        mirror(root->left);
        mirror(root->right);
    }
};
