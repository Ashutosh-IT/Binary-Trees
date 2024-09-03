class Solution{
  public:
    /*You are required to complete this method*/
    
    void find(Node* root, int &ans, int curr){
        if(!root) return;
        ans = max(ans,curr);
        
        find(root->left,ans,curr+1);
        find(root->right,ans,curr+1);
    }
    
    int maxDepth(Node *root) {
        
        int ans = 1;
        find(root,ans,1);
        return ans;
        
    }
};
