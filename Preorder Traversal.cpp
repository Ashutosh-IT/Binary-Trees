// Recursive Approach

void find(Node* root, vector<int> &ans){
    if(!root) return;
    
    ans.push_back(root->data);
    find(root->left,ans);
    find(root->right,ans);
}

vector <int> preorder(Node* root)
{
   vector<int> ans;
   find(root,ans);
   return ans;
}


// Iterative Approach

vector <int> preorder(Node* root)
{
  vector<int> ans;
  
  stack<Node*> st;
  Node* node = root;
  
  while(true){
      if(node){
          ans.push_back(node->data);
          st.push(node);
          node = node->left;
      }
      else{
          if(st.empty()) break;
          node = st.top()->right;
          st.pop();
      }
  }
  
  return ans;
}
