class Solution {
  public:
  
    void find(Node* root, int &count){
        if(!root) return;
        
        if(!root->left && !root->right) return;
        
        count++;
        find(root->left,count);
        find(root->right,count);
    }
    
    int countNonLeafNodes(Node* root) {
        int count = 0;
        find(root,count);
        
        return count;
    }
};
