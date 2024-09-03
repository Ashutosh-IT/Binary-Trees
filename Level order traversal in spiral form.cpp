vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    
    while(!st1.empty() || !st2.empty()){
        if(!st1.empty()){
            while(!st1.empty()){
                Node* temp = st1.top();
                st1.pop();
                ans.push_back(temp->data);
                if(temp->right) st2.push(temp->right);
                if(temp->left) st2.push(temp->left);
            }
        }
        
        else{
            while(!st2.empty()){
                Node* temp = st2.top();
                st2.pop();
                ans.push_back(temp->data);
                if(temp->left) st1.push(temp->left);
                if(temp->right) st1.push(temp->right);
            }
        }
    }
    
    return ans;
}
