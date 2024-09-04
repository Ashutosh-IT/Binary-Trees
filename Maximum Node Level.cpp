int maxNodeLevel(Node *root)
{
    int ans = 0;
    int maxi = 0;
    
    queue<Node*> q;
    q.push(root);
    
    int level = 0;
    
    while(!q.empty()){
        int size = q.size();
        if(size > maxi){
            maxi = size;
            ans = level;
        }
        
        while(size--){
            Node* temp = q.front();
            q.pop();
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        
        level++;
    }
    
    return ans;
}
