void find(Node* root, long long &sum, long long currNum){
    if(!root) return;
    
    if(!root->left && !root->right){
        sum += currNum;
        return;
    }
    
    if(root->left){
        find(root->left,sum,currNum * 10 + root->left->data);
    }
    
    if(root->right){
        find(root->right,sum,currNum * 10 + root->right->data);
    }
}

long long treePathsSum(Node *root)
{
    long long sum = 0;
    
    find(root,sum,root->data);
    return sum;
}
