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
    bool check(TreeNode* root, TreeNode* p,TreeNode* q)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root==p || root == q)
        {
            return true;
        }
        bool left=check(root->left,p,q);
        bool right=check(root->right,p,q);
        if( left || right )
        {
            return true;
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        TreeNode* ans;
        
        bool left=check(root->left,p,q);
        bool right=check(root->right,p,q);
        if(left && right)
        {
            return root;
        }
        else if(left)
        {
            if(root==p || root==q)
        {
            return root;
        }
            ans=lowestCommonAncestor(root->left,p,q);
        }
        else if(right)
        {
            if(root==p || root==q)
        {
            return root;
        }
            ans=lowestCommonAncestor(root->right,p,q);
        }
        else
            return nullptr;
        
        return ans;
            
    
        
    }
};