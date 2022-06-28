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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL)
            return {};
        vector<double> ans;
        ans.push_back(root->val);
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<double> temp;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left){
                    temp.push_back(node->left->val);
                    q.push(node->left);
                }
                
                if(node->right){
                    temp.push_back(node->right->val);
                    q.push(node->right);
                }
            }
            if(!temp.empty()){
                double sum = 0;
                for(int i=0;i<temp.size();i++){
                    sum+=temp[i];
                }
                sum/=temp.size();
                ans.push_back(sum);
            }
        }
        return ans;
    }
};