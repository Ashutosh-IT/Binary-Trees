class Solution {
  public:
  
    void find(Node* node, int &count){
        if(!node) return;
        
        count++;
        
        find(node->left,count);
        find(node->right,count);
    }
    
    int getSize(Node* node) {
        
        int count = 0;
        find(node,count);
        return count;
    }
};
