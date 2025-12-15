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
    int getheight(TreeNode* cur){
        if(cur==nullptr)return 0;
        int lefttree=getheight(cur->left);
        if(lefttree==-1)return -1;
        int righttree=getheight(cur->right);
        if(righttree==-1)return -1;
        if(abs(righttree-lefttree)>1)return -1;
        return 1+max(lefttree,righttree);
    }
    bool isBalanced(TreeNode* root) {
        if(getheight(root)==-1)return false;
        else return true;
    }

};

