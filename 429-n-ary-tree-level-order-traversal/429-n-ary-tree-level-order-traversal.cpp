/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)
            return {};
        vector<vector<int>> ans;
        ans.push_back({root->val});
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                Node* currNode = q.front();
                q.pop();
                
                int n = currNode->children.size();
                for(int j=0;j<n;j++){
                    if(currNode->children[j]){
                        temp.push_back(currNode->children[j]->val);
                        q.push(currNode->children[j]);
                    }
                }
            }
            if(!temp.empty())
                ans.push_back(temp);
        }
        return ans;
    }
};