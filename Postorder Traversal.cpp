// Recursive Approach

void find(Node* root, vector<int> &ans){
    if(!root) return;
    
    find(root->left,ans);
    find(root->right,ans);
    ans.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
  vector<int> ans;
  find(root,ans);
  return ans;
  
}


// Iterative Approach

vector <int> postOrder(Node* root)
{
   vector<int> ans;
   
   stack<Node*> st;
   Node* node = root;
   
   while(true){
       if(node){
           ans.push_back(node->data);
           st.push(node);
           node = node->right;
       }
       else{
           if(st.empty()) break;
           node = st.top()->left;
           st.pop();
       }
   }
   
   reverse(ans.begin(),ans.end());
   return ans;
}

