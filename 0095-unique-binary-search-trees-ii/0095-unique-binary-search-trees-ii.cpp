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
    
    vector<TreeNode*> solution(int start,int end)
    {
        vector<TreeNode*> ans;
        if(start>end)
        {
            return {NULL};
        }
        if(start==end)
        {
            TreeNode * root=new TreeNode(start);
            return {root};
        }
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*> leftbsts=solution(start,i-1);
            vector<TreeNode*> rightbsts=solution(i+1,end);
            
            for(auto l:leftbsts)
            {
                for(auto r:rightbsts)
                {
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                    
                }
            }
            
        }
        return ans;
       
    }
    
    vector<TreeNode*> generateTrees(int n) {
        
    return solution(1,n);
    
        
    }
};