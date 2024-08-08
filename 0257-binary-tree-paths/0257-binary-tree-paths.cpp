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
    vector<string> v;
public:
    
    TreeNode* helper(TreeNode* root, string s)
    {
        if(root==NULL)
        {
            return NULL;
        }
        s+=to_string(root->val);
        s+="->";
        TreeNode* left=helper(root->left,s);
        TreeNode* right=helper(root->right,s);
        if(!left && !right)
        {
            v.push_back(s);
            
        }
        return root;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        helper(root,s);
        for(int i=0;i<v.size();i++)
        {
            int n=v[i].length()-1;
            v[i].erase(n-1,2);
        }
        return v;
    
        
    }
};