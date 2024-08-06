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
    TreeNode* helper(vector<int>& nums, int start,int end)
    {
        int center=(start+end)/2;
        TreeNode * node=new TreeNode(nums[center]);
        if(start>end)
        {
            return NULL; 
        }
        
        node->left= helper(nums,start,center-1);
        node->right=helper(nums,center+1,end);
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    int start=0;
    int end=nums.size()-1;
    return helper(nums,start,end);
    
    
        
    }
};