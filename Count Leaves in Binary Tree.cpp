void find(Node* root, int &count){
    if(!root) return;
    
    if(!root->left && !root->right){
        count++;
        return;
    }
    
    find(root->left,count);
    find(root->right,count);
}

int countLeaves(Node* root)
{
  int count = 0;
  find(root,count);
  return count;
}
