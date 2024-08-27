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
    int getIndex(vector<int> order,int key)
    {
        for(int i=0;i<order.size();i++)
        {
            if(order[i]==key)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode* buildTree(vector<int>& preorder,vector<int> postorder, int preStart,int preEnd,int postStart,int postEnd)
    {
        if(preStart>preEnd)
        {
            return NULL;
        }
            
            TreeNode * node=new TreeNode(preorder[preStart]);
            if(preStart==preEnd)
            {
                return node;
            }
            int idx=getIndex(postorder,preorder[preStart+1]);
            int count=idx-postStart+1;
            node->left=buildTree(preorder,postorder,preStart+1,preStart+count,postStart,idx);
            node->right=buildTree(preorder,postorder,preStart+count+1,preEnd,idx+1,postEnd-1);
             return node;
        
        return NULL;
        
       
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    
    return buildTree(preorder,postorder,0,preorder.size()-1,0,postorder.size()-1);
        
    }
};