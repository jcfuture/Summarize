//#include <iostream>
//
//struct TreeNode
//{
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() :val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) :val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//    void flatten(TreeNode* root) {
//        if (!root) return ;
//
//        // �ֱ�ݹ������������
//        flatten(root->right);
//        flatten(root->left);
//
//        // ����ǰ�����������ҽڵ�ָ�� cur
//        root->right = cur;
//        // ����˵�����������ӽڵ㣬�����ӽڵ����Ϊ��
//        root->left = nullptr;
//        // �� cur ����ƶ�һλ��������ӽ��
//        cur = root;
//    }
//
//private:
//    TreeNode* cur = nullptr;
//};              