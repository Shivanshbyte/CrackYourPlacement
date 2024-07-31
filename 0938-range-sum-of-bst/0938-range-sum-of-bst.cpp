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
    int calsum(TreeNode* root, int low, int high,int &sum)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->val>=low && root->val<=high)
        {
            sum=sum+root->val;
            calsum(root->left,low,high,sum);
            calsum(root->right,low,high,sum);
        }
        else if(root->val<low)
        {
            calsum(root->right,low,high,sum);
        }
        else if(root->val>high)
        {
            calsum(root->left,low,high,sum);
        }
        
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
    return calsum(root,low,high,sum);
    
        
    }
};