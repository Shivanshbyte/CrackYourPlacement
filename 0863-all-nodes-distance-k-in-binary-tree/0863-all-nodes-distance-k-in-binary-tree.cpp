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
    vector<int> v;
    void downones(TreeNode* &root,int dis)
    {
        if(root==NULL || dis<0)
        {
            return;
        }
        if(dis==0)
        {
            v.push_back(root->val);
            return;
        }
        downones(root->left,dis-1);
        downones(root->right,dis-1);
        return;
        
    }
    int targetatdepth(TreeNode* &root,TreeNode* target, int k)
    {
        if(root==NULL)
    {
        return -1;
    }
        if(root==target)
    {
        downones(root,k);
            return 0;
        
    }
    
    int left=targetatdepth(root->left,target,k);
    
    if(left!=-1 )
    {
        if(left+1==k)
        {
            v.push_back(root->val);
        }
        else
        downones(root->right,k-left-2);
        return left+1;

    }  
    int right=targetatdepth(root->right,target,k);
    
    if(right!=-1)
    {
        if(right+1==k)
        {
            v.push_back(root->val);
        }
        else
            downones(root->left,k-right-2);
        return right+1;

    }
    return -1;
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    
        targetatdepth(root,target,k);
        return v;
        
    }
};