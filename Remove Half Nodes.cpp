class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        
        if(!root) return root;
        
        if(!root->left && !root->right) return root;
        
        if(!root->left) return RemoveHalfNodes(root->right);
        if(!root->right) return RemoveHalfNodes(root->left);
        
        root->left = RemoveHalfNodes(root->left);
        root->right = RemoveHalfNodes(root->right);
        
        return root;
    }
};
