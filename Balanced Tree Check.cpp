class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int find(Node* root, bool &ans){
        if(!ans) return 0;
        if(!root) return 0;
        
        int l = find(root->left,ans);
        int r = find(root->right,ans);
        
        if(abs(l-r) > 1){
            ans = false;
            return 0;
        }
        
        return max(l,r)+1;
    }
    
    bool isBalanced(Node *root)
    {
        bool ans = true;
        find(root,ans);
        
        return ans;
    }
};
