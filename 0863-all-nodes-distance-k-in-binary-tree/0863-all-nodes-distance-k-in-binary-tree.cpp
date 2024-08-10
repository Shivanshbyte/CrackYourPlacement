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
        if(root==NULL)
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
    int targetatdepth(TreeNode* &root,int depth,TreeNode* target, int k)
    {
        if(root==NULL)
    {
        return -1;
    }
        if(root==target)
    {
        downones(root,k);
            return depth;
        
    }
    
    int left=targetatdepth(root->left,depth+1,target,k);
    if(left-depth==k)
    {
        v.push_back(root->val);
    }
    if(left>0 && left-depth<k)
    {
        downones(root->right,k-(left-depth)-1);

    }  
    int right=targetatdepth(root->right,depth+1,target,k);
        if(right-depth==k)
    {
        v.push_back(root->val);
    }
    if(right>0 && right-depth<k)
    {
        downones(root->left,k-(right-depth)-1);

    }
    if(left==-1 && right==-1)
    {
        return -1;
    }
    if(left==-1)
    {
        return right;
    }
        return left;
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    
        targetatdepth(root,0,target,k);
        return v;
        
    }
};