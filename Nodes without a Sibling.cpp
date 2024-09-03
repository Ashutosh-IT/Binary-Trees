void find(Node* root, vector<int> &ans){
    if(!root) return;
    
    if(!root->left && root->right) ans.push_back(root->right->data);
    if(root->left && !root->right) ans.push_back(root->left->data);
    
    find(root->left,ans);
    find(root->right,ans);
}

vector<int> noSibling(Node* root)
{
    vector<int> ans;
    find(root,ans);
    if(ans.empty()) ans.push_back(-1);
    sort(ans.begin(),ans.end());
    return ans;
}
