/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* buildTree(struct TreeNode* root, int* arr, int start, int end){
    if(start>end)return NULL;
    root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    int mid=(start+end)/2;
    root->val=arr[mid];
    root->left=buildTree(root, arr, start, mid-1);
    root->right=buildTree(root, arr, mid+1, end);
    return root;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if(numsSize==0)return NULL;
    struct TreeNode* root;
    return buildTree(root, nums, 0, numsSize-1);
}