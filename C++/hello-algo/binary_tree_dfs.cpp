//#include "basic.h"
//
//class binaryTreeDfs
//{
//public:
//	// ǰ�����
//	void preOrder(TreeNode* root)
//	{
//		if (root == nullptr) return;
//		// �������ȼ������ڵ� -> ������ -> ������
//		vec.push_back(root->val);
//		preOrder(root->left);
//		preOrder(root->right);
//	}
//
//	// �������
//	void inOrder(TreeNode* root)
//	{
//		if (root == nullptr) return;
//		// �������ȼ��������� -> ���ڵ� -> ������
//		inOrder(root->left);
//		vec.push_back(root->val);
//		inOrder(root->right);
//	}
//
//	// �������
//	void postOrder(TreeNode* root)
//	{
//		if (root == nullptr) return;
//		// �������ȼ��������� -> ������ -> ���ڵ�
//		postOrder(root->left);
//		postOrder(root->right);
//		vec.push_back(root->val);
//	}
//private:
//	std::vector<int> vec;
//};