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
    bool check=false;
    void hasPathSum(TreeNode* root, int targetSum,int sum)
    {
        if(root==NULL)
        {
            return;
        }
        sum+=root->val;
        if(root->left==NULL && root->right==NULL)
        {
            if(sum==targetSum)
            {
                check=true;
                return;
            }
            return;
        }
        
        hasPathSum(root->left,targetSum,sum);
        hasPathSum(root->right,targetSum,sum);
        
        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return false;
        }
        hasPathSum(root,targetSum,0);
        return check;
    
        
    }
};