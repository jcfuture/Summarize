

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
//    void inorder(TreeNode* root, std::vector<int>& arr) {
//        if (!root) return;
//        inorder(root->left, arr);
//        arr.push_back(root->val);
//        inorder(root->right, arr);
//    }
//    std::vector<int> inorderTraversal(TreeNode* root) {
//        std::vector<int> arr;
//        inorder(root, arr);
//        return arr;
//    }
//};