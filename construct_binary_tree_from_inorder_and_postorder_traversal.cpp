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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
    TreeNode* helper(vector<int>& inorder,int ileft,int iright, vector<int>& postorder, int pleft, int pright){
        if(ileft>iright||pleft>pright) return NULL;
        TreeNode* curr=new TreeNode(postorder[pright]);
        int i;
        for(i=ileft;i<=iright;++i){
            if(inorder[i]==postorder[pright]) break;
        }
        curr->left=helper(inorder,ileft,i-1,postorder,pleft,pleft+i-1-ileft);
        curr->right=helper(inorder,i+1,iright,postorder,pleft+i-ileft,pright-1);
        return curr;
    }
};
