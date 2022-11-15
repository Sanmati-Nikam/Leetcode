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
    int noOfNodes(TreeNode* root,int n){
if(root==nullptr){
return 0;
}
int l = noOfNodes(root->left,n)+1;
int r = noOfNodes(root->right,n)+1;
return l+r;
}
int countNodes(TreeNode* root) {
return noOfNodes(root,0)/2;
}
};