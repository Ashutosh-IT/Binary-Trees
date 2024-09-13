void findN(TreeNode* root, int curr, int &n){
    if(!root) return;
    n = max(n,curr);
    
    findN(root->left,curr+1,n);
    findN(root->right,curr,n);
}

void find(TreeNode *root, int index, vector<vector<int>>&ans){
    if(!root) return;
    
    ans[index].push_back(root->val);
    find(root->left,index+1,ans);
    find(root->right,index,ans);
}

vector<int> Solution::solve(TreeNode* root) {
    if(!root) return {};
    
    int n = 0;
    findN(root,0,n);
    
    vector<vector<int>> ans(n+1);
    find(root,0,ans);
    
    vector<int> a;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            a.push_back(ans[i][j]);
        }
    }
    
    return a;
}
