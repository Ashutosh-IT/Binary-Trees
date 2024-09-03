class Solution{
public:
      int distance(int X, int Y)
      {
          int leftNode = X;
          int rightNode = Y;
          
          int ans = 0;
          
          while(leftNode != rightNode){
              if(leftNode > rightNode){
                  leftNode /= 2;
              }
              else rightNode /= 2;
              ans++;
          }
          
          return ans;
      }
};
