//#include <iostream>
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    // head���ڴ洢���������õ���
//    // temp����ָ���ƶ��������ֵ
//    TreeNode* head = new TreeNode(-1) , *temp = head;
//
//    TreeNode* convertBiNode(TreeNode* root) {
//        if (root == nullptr) return nullptr;
//        preTraver(root);
//        return head->right;
//    }
//
//    void preTraver(TreeNode* root)
//    {
//        if (root == NULL) return;
//        preTraver(root->left);
//        temp->right = root;
//        temp->left = nullptr;
//        temp = root;
//        preTraver(root->right);
//    }
//};#include <iostream>
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    // head���ڴ洢���������õ���
//    // temp����ָ���ƶ��������ֵ
//    TreeNode* head = new TreeNode(-1) , *temp = head;
//
//    TreeNode* convertBiNode(TreeNode* root) {
//        if (root == nullptr) return nullptr;
//        preTraver(root);
//        return head->right;
//    }
//
//    void preTraver(TreeNode* root)
//    {
//        if (root == NULL) return;
//        preTraver(root->left);
//        temp->right = root;
//        temp->left = nullptr;
//        temp = root;
//        preTraver(root->right);
//    }
//};