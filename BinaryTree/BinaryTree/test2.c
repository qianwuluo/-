//
//  struct TreeNode {
//      int val;
//      struct TreeNode *left;
//      struct TreeNode *right;
//  };
// 
// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
//#include<stdio.h>
//#include<malloc.h>
//int TreeSize(struct TreeNode* root)
//{
//    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//void _preOvder(struct TreeNode* root, int* a, int i)
//{
//    if (root == NULL)
//        return;
//    a[i] = root->val;
//    i++;
//    _preOvder(root->left, a, i);
//    _preOvder(root->right, a, i);
//
//}
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int size = TreeSize(root);
//    int* a = (int*)malloc(size * sizeof(int));
//    int i = 0;
//    _preOvder(root, a, i);
//    *returnSize = size;
//    return a;
//
//}
//
//
//int main(void)
//{
//
//}