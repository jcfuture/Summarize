// #include "basic.h
//
///* �������ڵ�ṹ�� */
//struct TreeNode
//{
//	int val; // �ڵ�ֵ
//	TreeNode* left; // ���ӽڵ�ָ��
//	TreeNode* right; // ���ӽڵ�ָ��
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
///* ������� */
//std::vector<int> levelOrder(TreeNode* root)
//{
//	// ��ʼ�����У�������ڵ�
//	std::queue<TreeNode*> queue;
//	queue.push(root);
//	// ��ʼ��һ���б����ڱ����������
//	std::vector<int> vec;
//	while (!queue.empty())
//	{
//		TreeNode* node = queue.front();
//		queue.pop(); // ���г���
//		vec.push_back(node->val); // ����ڵ�ֵ
//		if (node->left != nullptr)
//			queue.push(node->left); // ���ӽڵ����
//		if (node->right != nullptr)
//			queue.push(node->right); // ���ӽڵ����
//	}
//	return vec;
//}