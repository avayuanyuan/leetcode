/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        //BFS
        vector<vector<int>> res;
        if(!root) return res;
        vector<TreeNode*> curr,next;
        curr.push_back(root);
        while(!curr.empty()){
            res.push_back({});
            for(TreeNode* node:curr){
                res.back().push_back(node->val);
                if(node->left) next.push_back(node->left);
                if(node->right) next.push_back(node->right);
            }
            curr.swap(next);
            next.clear();
        }
        return res;
    }
};
