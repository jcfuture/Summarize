//#include "basic.h"
//
//class AVLTree
//{
//public:
//	// ��ȡ�ڵ�߶�
//	int height(AVLTreeNode* node)
//	{
//		// �սڵ�߶�Ϊ -1�� Ҷ�ڵ�߶�Ϊ 0
//		return node == nullptr ? -1 : node->height;
//	}
//
//	// ���½ڵ�߶�
//	void updateHeight(AVLTreeNode* node)
//	{
//		// �ڵ�߶ȵ�����������߶� + 1
//		node->height = std::max(height(node->left), height(node->right)) + 1;
//	}
//
//	// ��ȡƽ������
//	int balanceFactor(AVLTreeNode* node)
//	{
//		// �սڵ�ƽ������Ϊ 0
//		if (node == nullptr)
//			return 0;
//		// �ڵ�ƽ������ = �������߶� - �������߶�
//		return height(node->left) - height(node->right);
//	}
//
//	// ����
//	AVLTreeNode* rightRotate(AVLTreeNode* node)
//	{
//		AVLTreeNode* child = node->left;
//		AVLTreeNode* grandChild = child->right;
//		// �� child Ϊԭ�㣬�� node ������ת
//		child->right = node;
//		node->left = grandChild;
//		// ���½ڵ�߶�
//		updateHeight(node);
//		updateHeight(child);
//		// ������ת�������ĸ��ڵ�
//		return child;
//	}
//
//	// ����
//	AVLTreeNode* leftRotate(AVLTreeNode* node)
//	{
//		AVLTreeNode* child = node->right;
//		AVLTreeNode* grandChild = child->left;
//		// �� child Ϊԭ�㣬�� node ������ת
//		child->left = node;
//		node->right = grandChild;
//		// ���½ڵ�߶�
//		updateHeight(node);
//		updateHeight(child);
//		// ������ת�������ĸ��ڵ�
//		return child;
//	}
//
//	// ִ����ת������ʹ���������»ָ�ƽ��
//	AVLTreeNode* rotate(AVLTreeNode* node)
//	{
//		// ��ȡ�ڵ� node ��ƽ������
//		int _balanceFactor = balanceFactor(node);
//		// ��ƫ��
//		if (_balanceFactor > 1)
//		{
//			if (balanceFactor(node->left) >= 0)
//				// ����
//				return rightRotate(node);
//			else
//			{
//				// ������������
//				node->left - leftRotate(node->left);
//				return rightRotate(node);
//			}
//		}
//		// ��ƫ��
//		if (_balanceFactor < -1)
//		{
//			if (balanceFactor(node->right) <= 0)
//				// ����
//				return leftRotate(node);
//			else
//			{
//				// ������������
//				node->right = rightRotate(node->right);
//				return leftRotate(node);
//			}
//		}
//		// ƽ������������ת��ֱ�ӷ���
//		return node;
//	}
//
//	// ����ڵ�
//	void insert(int val)
//	{
//		root = insertHelper(root, val);
//	}
//
//	// �ݹ����ڵ㣨����������
//	AVLTreeNode* insertHelper(AVLTreeNode* node, int val)
//	{
//		if (node == nullptr)
//			return new AVLTreeNode(val);
//		// 1�����Ҳ���λ�ò�����ڵ�
//		if (val < node->val)
//			node->left = insertHelper(node->left, val);
//		else if (val > node->val)
//			node->right = insertHelper(node->right, val);
//		else
//			return node; // �ظ��ڵ㲻���룬ֱ�ӷ���
//		updateHeight(node); // ���½ڵ�߶�
//		// 2��ִ����ת������ʹ���������»ָ�ƽ��
//		node = rotate(node);
//		// ���������ĸ��ڵ�
//		return node;
//	}
//
//	// ɾ���ڵ�
//	void remove(int val)
//	{
//		root = removeHelper(root, val);
//	}
//
//	// �ݹ�ɾ���ڵ㣨����������
//	AVLTreeNode* removeHelper(AVLTreeNode* node, int val)
//	{
//		if (node == nullptr)
//			return nullptr;
//		// 1�����ҽڵ㲢ɾ��
//		if (val < node->val)
//			node->left = removeHelper(node->left, val);
//		else if (val > node->val)
//			node->right = removeHelper(node->right, val);
//		else
//		{
//			if (node->left == nullptr || node->right == nullptr)
//			{
//				AVLTreeNode* child = node->left != nullptr ? node->left : node->right;
//				// �ӽڵ����� = 0��ֱ��ɾ�� node ������
//				if (child == nullptr)
//				{
//					delete node;
//					return nullptr;
//				}
//				// �ӽڵ����� = 1��ֱ��ɾ�� node
//				else
//				{
//					delete node;
//					node = child;
//				}
//			}
//			else
//			{
//				// �ӽڵ����� = 2���������������һ���ڵ�ɾ�������øýڵ��滻��ǰ�ڵ�
//				AVLTreeNode* temp = node->right;
//				while (temp->left != nullptr)
//					temp = temp->left;
//				int tempVal = temp->val;
//				node->right = removeHelper(node->right, temp->val);
//				node->val = tempVal;
//			}
//		}
//		updateHeight(node); // ���½ڵ�߶�
//		// 2��ִ����ת������ʹ���������»ָ�ƽ��
//		node = rotate(node);
//		// ���������ĸ��ڵ�
//		return node;
//	}
//private:
//	AVLTreeNode* root; // ���ڵ�
//};