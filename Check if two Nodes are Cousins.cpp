void find(Node* root, int a, int b, Node* parent, int level, pair<Node*,int> &p1, pair<Node*,int> &p2 ){
    if(!root) return;
    
    if(root->data == a){
        p1 = {parent,level};
    }
    
    if(root->data == b){
        p2 = {parent,level};
    }
    
    find(root->left,a,b,root,level+1,p1,p2);
    find(root->right,a,b,root,level+1,p1,p2);
    
}

bool isCousins(Node *root, int a, int b) {
    pair<Node*,int> p1, p2;
    find(root,a,b,NULL,0,p1,p2);
    
    if(p1.first != p2.first && p1.second == p2.second){
        return true;
    }
    
    return false;
}
