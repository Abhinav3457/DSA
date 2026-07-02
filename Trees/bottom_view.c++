/*
same as the top view approach just we have to look from bottom now so we had to update 
map horizontal distance with the latest value of the node at that horizontal distance and then 
we return the values of the map in the vector which will be the bottom view of the tree
*/
/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        vector<int>ans;
        if(root==nullptr){
            return ans;
        }
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int>c=q.front();
            q.pop();
            Node*temp=c.first;
            int hd=c.second;
            m[hd]=temp->data;
            if(temp->left){
                q.push(make_pair(temp->left,hd-1));
            }
            if(temp->right){
                q.push(make_pair(temp->right,hd+1));
            }
        }
        for(auto j:m){
            ans.push_back(j.second);
        }
        return ans;
    }
};
*/