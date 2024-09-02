// Recursive Approach

class Solution {
  public:
  
    void find(Node* root, vector<int> &ans){
        if(!root) return;
        find(root->left,ans);
        ans.push_back(root->data);
        find(root->right,ans);
    }
    
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        
        vector<int> ans;
        find(root,ans);
        return ans;
    }
};



// Iterative Approach

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        
        vector<int> ans;
        if(!root) return ans;
        
        stack<Node*> st;
        st.push(root);
        
        Node* node = root->left;
        
        while(true){
            if(node){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty()) break;
                ans.push_back(st.top()->data);
                node = st.top()->right;
                st.pop();
            }
        }
        
        return ans;
    }
};
