void find(Node* root, long &sum){
    if(!root) return;
    
    sum += root->key;
    
    find(root->left,sum);
    find(root->right,sum);
}

long int sumBT(Node* root)
{
    long sum = 0;
    find(root,sum);
    
    return sum;
}
