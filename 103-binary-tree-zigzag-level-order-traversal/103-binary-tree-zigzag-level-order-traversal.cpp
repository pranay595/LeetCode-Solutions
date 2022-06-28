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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         if(root==NULL)
            return {};
        
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        ans.push_back({root->val});
        int i = 0;
        
        while(!q.empty()){
            int size = q.size();
            
            vector<int> temp;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                    temp.push_back(node->left->val);
                }
                if(node->right){
                    q.push(node->right);
                    temp.push_back(node->right->val);
                }
                
            }
            if(temp.size()!=0){
                i++;
                if(i%2!=0)
                    reverse(temp.begin(),temp.end());
                    ans.push_back(temp);
            }
        }
        
        return ans;
    }
};