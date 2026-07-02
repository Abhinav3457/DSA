/*
in this just we have to look the level as it is is unique then add the current pointing node data and 
then we will check that our arraywas filled upto to that level like if level is 2 so our vector has 2 value and if level was 2 again and our ans sie was 2 so we didnpt take that value in it .
hence we get that answer vector then we return it as the left view of the tree.

*/

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

class Solution {
  public:
    void solve(Node* root,vector<int>&ans,int level){
        if(root==nullptr){
            return;
        }
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        solve(root->left,ans,level+1);
        solve(root->right,ans,level+1);
    }
    vector<int> leftView(Node *root) {
        vector<int>ans;
        solve(root,ans,0);
        return ans;
        
    }
};
*/