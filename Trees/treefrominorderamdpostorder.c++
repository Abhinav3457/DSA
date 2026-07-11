/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// same as the previon inorder and pre order but here we just take the last 
// index of the postorder as root and then find that index in the inorder and then call the left and right subtree recursively. And we just need to keep 
// track of the index of postorder so that we can take the next element as root.

/*
class Solution {
public:
    void fillitup(vector<int>&inorder,map<int,int>&store){
        for(int i=0;i<inorder.size();i++){
            store[inorder[i]]=i;
        }
    }
    TreeNode* solve(vector<int>& postorder, vector<int>& inorder,int n,int start,int end,int &pi,map<int,int>&store){
        if(pi<0 || start>end){
            return nullptr;
        }
        int ele=postorder[pi];
        pi--;
        TreeNode* root=new TreeNode(ele);
        int pos=store[ele];
        root->right=solve(postorder,inorder,n,pos+1,end,pi,store);
        root->left=solve(postorder,inorder,n,start,pos-1,pi,store);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int index=n-1;
        map<int,int>store;
        fillitup(inorder,store);
        TreeNode*ans=solve(postorder,inorder,n,0,n-1,index,store);
        return ans;
    }
};

*/