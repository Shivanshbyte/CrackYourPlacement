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
    
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
    void utility(TreeNode* root, int & maxi)
    {
         if(root==NULL)
    {
        return;
    }
    utility(root->left,maxi);
    utility(root->right,maxi);
    
    
    int lh= height(root->left);
    int rh= height(root->right);
    int currdiam=lh+rh;
    maxi=max(maxi,currdiam);
           
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
    int maxi=0;
    utility(root,maxi);
    return maxi;
   
        
    }
};