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
// ............................................................................................................................................................
// take every index of the prorder as root and find that index in the inorder and then call the left and right 
// subtree recursively. And we just need to keep track of the index of preorder so that we can take the next element as root.
// .............................................................................................................................................................
/*
    void fillitup(vector<int>&inorder,map<int,int>&store){
        for(int i=0;i<inorder.size();i++){
            store[inorder[i]]=i;
        }
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int n,int start,int end,int &pi,map<int,int>&store){
        if(pi>=n || start>end){
            return nullptr;
        }
        int ele=preorder[pi];
        pi++;
        TreeNode* root=new TreeNode(ele);
        int pos=store[ele];
        root->left=solve(preorder,inorder,n,start,pos-1,pi,store);
        root->right=solve(preorder,inorder,n,pos+1,end,pi,store);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        int n=preorder.size();
        map<int,int>store;
        fillitup(inorder,store);
        TreeNode*ans=solve(preorder,inorder,n,0,n-1,index,store);
        return ans;
    }
};

*/