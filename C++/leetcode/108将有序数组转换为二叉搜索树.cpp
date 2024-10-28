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

//#include <iostream>
//#include <vector>
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
//        return used(nums, 0, nums.size() - 1);
//    }
//
//    TreeNode* used(std::vector<int>& nums, int left, int right) {
//        if (left > right) return nullptr;
//
//        // ѡȡ�м�ڵ���Ϊ���ڵ�
//        int mid = (left + right) / 2;
//
//        // ����һ����midλ��Ԫ����Ϊ�ڵ�Ԫ�ص�ƽ����
//        TreeNode* root = new TreeNode(nums[mid]);
//
//        root->left = used(nums, left, mid - 1);
//        root->right = used(nums, mid + 1, right);
//
//        // ���ع�������
//        return root;
//    }
//};