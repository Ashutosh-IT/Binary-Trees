class Solution
{
public:
    vector<Node *> nodesAtOddLevels(Node *root)
    {
        vector<Node*> ans;
        queue<Node*> q;
        q.push(root);
        
        int level = 1;
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node* temp = q.front();
                q.pop();
                
                if(level) ans.push_back(temp);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            
            level = (level+1)%2;
        }
        
        return ans;
    }
};
