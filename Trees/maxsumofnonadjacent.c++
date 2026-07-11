/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

// we just using pair in ehich first take all the sum include with that root or the second one is all the
//  sum of the left and right child without including that root node. So we just take the max of both the sum and return it.

/*
class Solution {
  public:
    pair<int,int>solve(Node* root){
        if(root==nullptr){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        pair<int,int>l=solve(root->left);
        pair<int,int>r=solve(root->right);
        
        pair<int,int>ans;
        ans.first=root->data+l.second+r.second;
        ans.second=max(l.first,l.second)+max(r.first,r.second);
        return ans;
    }
    int getMaxSum(Node *root) {
        // code here
        pair<int,int>ans=solve(root);
        return max(ans.first,ans.second);
    }
};
*/