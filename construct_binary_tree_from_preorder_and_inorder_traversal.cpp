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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
    TreeNode* helper(vector<int>&preorder, int pleft, int pright,vector<int>&inorder,int ileft,int iright){
        if(ileft>iright||pleft>pright) return NULL;
        TreeNode* curr=new TreeNode(preorder[pleft]);
        int i;
        for(i=ileft;i<=iright;++i){
            if(inorder[i]==preorder[pleft]) break;
        }
        curr->left=helper(preorder,pleft+1,pleft+i-ileft,inorder,ileft,i-1);
        curr->right=helper(preorder,pleft+i-ileft+1,pright,inorder,i+1,iright);
        return curr;
    }
};
