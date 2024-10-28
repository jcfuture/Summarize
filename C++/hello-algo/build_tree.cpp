//#include "basic.h"
//
//TreeNode* dfs(std::vector<int>& preorder, std::unordered_map<int, int>& inorderMap, int i, int l, int r)
//{
//	// ��������Ϊ��ʱ��ֹ
//	if (r - l < 0)
//		return nullptr;
//	// ��ʼ�����ڵ�
//	TreeNode* root = new TreeNode(preorder[i]);
//	// ��ѯ m ���Ӷ�������������
//	int m = inorderMap[preorder[i]];
//	// ������:����������
//	root->left = dfs(preorder, inorderMap, i + 1, l, m - 1);
//	// ������:����������
//	root->right = dfs(preorder, inorderMap, i + 1 + m - l, m + 1, r);
//	// ���ظ��ڵ�
//	return root;
//}
//
//// ����������
//TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder)
//{
//	// ��ʼ����ϣ���洢 inorder Ԫ�ص�������ӳ��
//	std::unordered_map<int, int> inorderMap;
//	for (int i = 0; i < inorder.size(); i++)
//		inorderMap[inorder[i]] = i;
//	TreeNode* root = dfs(preorder, inorderMap, 0, 0, inorder.size() - 1);
//	return root;
//}