class Solution
{
public:

    int findGCD(int a, int b){
        while(a != 0){
            int temp = a;
            a = b%a;
            b = temp;
        }
        
        return b;
    }
    
    void find(Node* root, int &ans, int &maxi){
        if(!root) return;
        
        if(!root->left && !root->right) return;
        if(!root->left){
            find(root->right,ans,maxi);
            return;
        }
        
        if(!root->right){
             find(root->left,ans,maxi);
             return;
        }
        
        // both child exists
        int num1 = root->left->data;
        int num2 = root->right->data;
        
        int gcd = findGCD(num1,num2);
        if(gcd == maxi) ans = max(ans,root->data);
        if(gcd > maxi){
            maxi = gcd;
            ans = root->data;
        }
        
       find(root->left,ans,maxi);
       find(root->right,ans,maxi);
        
    }
    int maxGCD( Node* root)
    {
        int ans = 0;
        int maxi = 0;
        find(root,ans,maxi);
        return ans;
    }
};
