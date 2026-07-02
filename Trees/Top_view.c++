/*
in this problem top view i used the approach in which we measure the horizontal distance and check if 
a horizontal distance is already present in the map or not if it is not present then we add it to the map and 
then we push the left and right child of the node into the queue with horizontal distance -1 and +1 respectively
and then we finally return the values of the map in the vector which will be the top view of the tree
*/

/*
class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int>ans;
        if(root==nullptr){
            return ans;
        }
        
        map<int,int>topnode;
        queue<pair<Node*,int>>q;
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int>temp=q.front();
            q.pop();
            Node*front=temp.first;
            int hd=temp.second;
            if(topnode.find(hd)==topnode.end()){
                topnode[hd]=front->data;
            }
            if(front->left){
                q.push(make_pair(front->left,hd-1));
            }
            if(front->right){
                q.push(make_pair(front->right,hd+1));
            }
            
        }
        for(auto i:topnode){
            ans.push_back(i.second);
        }
        return ans;
    }
};
<<<<<<< HEAD
*/
=======
*/
>>>>>>> 44afe508222ec0daaca97b1c1bd9a5ea1a865c26
