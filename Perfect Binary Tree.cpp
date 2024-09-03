class Solution
{
public:

    void find(Node* root, bool &ans,int &leafLvl, int lvl){
        if(!ans) return;
        if(!root) return;
        
        if(!root->left && !root->right){
            if(leafLvl == -1){
                leafLvl = lvl;
                return;
            }
            
            if(leafLvl != lvl){
                ans = false;
            }
            return;
        }
        
        if(!root->left || !root->right){
            ans = false;
            return;
        }
        
        find(root->left,ans,leafLvl,lvl+1);
        find(root->right,ans,leafLvl,lvl+1);
    }
    
    bool isPerfect(Node *root)
    {
        bool ans = true;
        int leafLvl = -1;
        find(root,ans,leafLvl,1);
        return ans;
    }
};
