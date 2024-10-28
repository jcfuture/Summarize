//#include "basic.h"
//
//class ArrayBinaryTree
//{
//public:
//	// ���캯��
//	ArrayBinaryTree(std::vector<int> arr)
//		:tree(arr)
//	{
//	}
//
//	// �б�����
//	int size()
//	{
//		return tree.size();
//	}
//
//	// ��ȡ����Ϊ i �ڵ��ֵ
//	int val(int i)
//	{
//		// ������Խ�磬�򷵻� INT_MAX�������λ
//		if (i < 0 || i >= size())
//			return INT_MAX;
//		return tree[i];
//	}
//
//	// ��ȡ����Ϊ i �ڵ�����ӽڵ������
//	int left(int i)
//	{
//		return 2 * i + 1;
//	}
//
//	// ��ȡ����Ϊ i �ڵ�����ӽڵ������
//	int right(int i)
//	{
//		return 2 * i + 2;
//	}
//
//	// ��ȡ����Ϊ i �ڵ�ĸ��ڵ������
//	int parent(int i)
//	{
//		return (i - 1) / 2;
//	}
//
//	// �������
//	std::vector<int> levelOrder()
//	{
//		std::vector<int> res;
//		// ֱ�ӱ�������
//		for (int i : tree)
//			if (i != INT_MAX)
//				res.push_back(i);
//		return res;
//	}
//
//	// ǰ�����
//	std::vector<int> preOrder()
//	{
//		std::vector<int> res;
//		dfs(0, "pre", res);
//		return res;
//	}
//
//	// �������
//	std::vector<int> inOrder()
//	{
//		std::vector<int> res;
//		dfs(0, "in", res);
//		return res;
//	}
//
//	// �������
//	std::vector<int> postOrder()
//	{
//		std::vector<int> res;
//		dfs(0, "post", res);
//		return res;
//	}
//private:
//	std::vector<int> tree;
//
//	// ������ȱ���
//	void dfs(int i, std::string order, std::vector<int>& res)
//	{
//		// ��Ϊ��λ���򷵻�
//		if (val(i) == INT_MAX) return;
//		// ǰ�����
//		if (order == "pre") res.push_back(val(i));
//		dfs(left(i), order, res);
//		// �������
//		if (order == "in") res.push_back(val(i));
//		dfs(right(i), order, res);
//		// �������
//		if (order == "post") res.push_back(val(i));
//	}
//};