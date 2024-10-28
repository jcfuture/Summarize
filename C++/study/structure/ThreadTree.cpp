//#include <iostream>
//#include "assert.h"
//
//template <typename T>
//struct ThreadTree
//{
//	T data;
//	ThreadTree<T>* lchild, * rchild;
//	int ltag, rtag;
//};
//
//// ͨ���������ʵ�ֶ�����������
//template <typename T>
//void inThread(ThreadTree<T>* root, ThreadTree<T>* pre)
//{
//	if (root)
//	{
//		inThread(root->lchild, pre); // �ݹ飬������������
//		if (root->lchild == nullptr) // ��ǰ�ڵ��������Ϊ��
//		{
//			root->lchild = pre; // ������ǰ�ڵ��ǰ������
//			root->ltag = 1;
//		}
//		if (pre != nullptr && pre->rchild == nullptr) // ǰ�����ǿ�����������Ϊ��
//		{
//			pre->rchild = root; // ����ǰ���ڵ�ĺ������
//			pre->rtag = 1;
//		}
//		pre = root; // ��ǵ�ǰ����Ϊ�ոշ��ʶ�Ľ��
//		inThread(root->rchild, pre); // �ݹ飬������������
//	}
//}
//
//template <typename T>
//void createInThread(ThreadTree<T> tree)
//{
//	ThreadTree<T> pre = nullptr;
//	if (tree != nullptr) // �ǿն�������������
//	{
//		inThread(tree, pre); // ������������
//		pre->rchild = nullptr; // ������������һ�����
//		pre->rtag = 1;
//	}
//}
//
//// �����������µĵ�һ�����
//template <typename T>
//ThreadTree<T>* firstNode(ThreadTree<T>* root)
//{
//	while (root->ltag == 0) root = root->lchild; // �����½�㣨��һ����Ҷ�ڵ㣩
//	return root;
//}
//
//// ���������������н�� root �����������µĺ��
//template <typename T>
//ThreadTree<T>* nextNode(ThreadTree<T>* root)
//{
//	if (root->rtag == 0) return firstNode(root->rchild); // �������������½��
//	else return root->rchild; // �� tag == 1 ��ֱ�ӷ��غ������
//}
//
//// �������������㷨������д������ͷ������������������������������㷨
//template <typename T>
//void inOrder(ThreadTree<T>* root)
//{
//	for (ThreadTree<T>* p = firstNode(root); p != nullptr; p = nextNode(root))
//		std::cout << p->data << std::endl;
//}