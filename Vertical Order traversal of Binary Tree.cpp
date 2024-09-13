
void findLR(TreeNode* root, int &l, int &r, int curr){
    if(!root) return;
    
    l = min(l,curr);
    r = max(r,curr);
    
    findLR(root->left,l,r,curr-1);
    findLR(root->right,l,r,curr+1);
}


vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* root) {
    
    int l=0;
    int r=0;
    
    if(!root) return {};
    
    findLR(root,l,r,0);
    
    int width = r-l+1;
    vector<vector<int>> ans(width);
    
    
    queue<pair<TreeNode*,int>> q;
    q.push({root,abs(l)});
    
    while(!q.empty()){
        TreeNode* temp = q.front().first;
        int index = q.front().second;
        q.pop();
        
        ans[index].push_back(temp->val);
        if(temp->left) q.push({temp->left,index-1});
        if(temp->right) q.push({temp->right,index+1});
    }
    
    return ans;
}
