//#include "basic.h"
//
//class searchTree
//{
//public:
//	TreeNode* search(int num)
//	{
//		TreeNode* cur = root;
//		// ѭ�����ң�Խ��Ҷ�ڵ������
//		while (cur != nullptr)
//		{
//			// Ŀ��ڵ��� cur ����������
//			if (cur->val < num)
//				cur = cur->right;
//			// Ŀ��ڵ��� cur ����������
//			if (cur->val > num)
//				cur = cur->left;
//			// �ҵ�Ŀ��ڵ㣬����ѭ��
//			else
//				break;
//		}
//		// ����Ŀ��ڵ�
//		return cur;
//	}
//
//	// ����ڵ�
//	void insert(int num)
//	{
//		// ����Ϊ�գ����ʼ�����ڵ�
//		if (root == nullptr)
//		{
//			root = new TreeNode(num);
//			return;
//		}
//		TreeNode* cur = root, *pre = nullptr;
//		// ѭ�����ң�Խ��Ҷ�ڵ������
//		while (cur != nullptr)
//		{
//			// �ҵ��ظ��ڵ㣬ֱ�ӷ���
//			if (cur->val == num)
//				return;
//			pre = cur;
//			// ����λ���� cur ����������
//			if (cur->val < num)
//				cur = cur->right;
//			// ����λ���� cur ����������
//			else
//				cur = cur->left;
//		}
//		// ����ڵ�
//		TreeNode* node = new TreeNode(num);
//		if (pre->val < num)
//			pre->right = node;
//		else
//			pre->left = node;
//	}
//
//	// ɾ���ڵ�
//	void remove(int num)
//	{
//		// ����Ϊ�գ�ֱ����ǰ����
//		if (root == nullptr) return;
//		TreeNode* cur = root, * pre = nullptr;
//		// ѭ�����ң�Խ��Ҷ�ڵ������
//		while (cur != nullptr)
//		{
//			// �ҵ���ɾ���ڵ㣬����ѭ��
//			if (cur->val == num)
//				break;
//			pre = cur;
//			// ��ɾ���ڵ��� cur ����������
//			if (cur->val < num)
//				cur = cur->right;
//			// ��ɾ���ڵ��� cur ����������
//			else
//				cur = cur->left;
//		}
//		// ���޴�ɾ���ڵ㣬��ֱ�ӷ���
//		if (cur == nullptr)
//			return;
//		// �ӽڵ����� = 0 or 1
//		if (cur->left == nullptr || cur->right == nullptr)
//		{
//			// �ӽڵ����� = 0 / 1ʱ��child = nullptr / ���ӽڵ�
//				TreeNode * child = cur->left != nullptr ? cur->left : cur->right;
//			// ɾ���ڵ� cur
//			if (cur != root)
//			{
//				if (pre->left == cur)
//					pre->left = child;
//				else
//					pre->right = child;
//			}
//			else
//			{
//				// ��ɾ���ڵ�Ϊ���ڵ㣬������ָ�����ڵ�
//				root = child;
//			}
//			// �ͷ��ڴ�
//			delete cur;
//		}
//		// �ӽڵ����� = 2
//		else
//		{
//			// ��ȡ��������� cur ����һ���ڵ�
//			TreeNode* tmp = cur->right;
//			while (tmp->left != nullptr)
//				tmp = tmp->left;
//			int tmpVal = tmp->val;
//			// �ݹ�ɾ���ڵ� tmp
//			remove(tmp->val);
//			// �� tmp ���� cur
//			cur->val = tmpVal;
//		}
//	}
//private:
//	TreeNode* root;
//};