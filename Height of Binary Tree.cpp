class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(!node) return 0;
        
        int l = height(node->left);
        int r = height(node->right);
        
        return max(l,r) + 1;
    }
};
