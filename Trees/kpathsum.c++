/*
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


//  in this we just travel through every node and store a path then check sum and every time iget tarfget sum we increase the count and return the count at the end
 /*
    class Solution {
    public:
        void solve(TreeNode*root,int k,int &count,vector<int>path){
            if(root==nullptr){
                return;
            }
            path.push_back(root->val);
            solve(root->left,k,count,path);
            solve(root->right,k,count,path);
            int size=path.size();
            long long sum=0;
            for(int i=size-1;i>=0;i--){
                sum=sum+path[i];
                if(sum==k){
                    count++;
                }
            }
            path.pop_back();
        }
        int pathSum(TreeNode* root, int targetSum) {
            int count=0;
            vector<int>path;
            solve(root,targetSum,count,path);
            return count;
        }
    };
*/