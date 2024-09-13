TreeNode* Solution::flatten(TreeNode* root) {

    TreeNode* temp = root;
    
    while(temp){
        if(temp->left){
            TreeNode* right = temp->right;
            temp->right = temp->left;
            temp->left = NULL;
            TreeNode* temp1 = temp->right;
            while(temp1->right) temp1 = temp1->right;
            temp1->right = right;
            temp = temp->right;
        }
        else{
            temp = temp->right;
        }
    }
    
    return root;
}
