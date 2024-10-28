//#include <iostream>
//#include <string>
//
//#define ENDFLAG -3
//
//typedef int KeyType;
//typedef std::string InfoType;
//
//typedef struct
//{
//	KeyType key; // �ؼ�����
//	InfoType otherinfo; // ����������
//}ElemType; // ÿ���ڵ�������������
//
//typedef struct BSTNode
//{
//	ElemType data; // ÿ����������������ؼ������������
//	struct BSTNode* lchild, * rchild; // ���Һ���ָ��
//}BSTNode , *BSTree;
//
//BSTree SearchBST(BSTree T, KeyType key)
//{
//	// �ڸ�ָ��T��ֵ�����������еݹ�ز���ĳ�ؼ��ֵ���key������Ԫ��
//	// �����ҳɹ����򷵻�ָ�������Ԫ�ؽڵ��ָ�룬���򷵻ؿ�ָ��
//	if (!T || key == T->data.key) return T; // ���ҽ���
//	else if (key < T->data.key) return SearchBST(T->lchild, key); // ���������м�������
//	else return SearchBST(T->rchild, key); // ���������м�������
//}
//
//void InsertBST(BSTree& T, ElemType e)
//{
//	// ������������T�в����ڹؼ��ֵ���e��key������Ԫ��ʱ��������Ԫ��
//	if (!T)
//	{ // �ҵ�����λ�ã��ݹ����
//		BSTNode* S = new BSTNode; // �����½ڵ�*S
//		S->data = e; // �½ڵ�*S����������Ϊe
//		S->lchild = S->rchild = NULL; // �½ڵ�*S��ΪҶ�ӽڵ�
//		T = S; // ���½��*S���ӵ����ҵ��Ĳ���λ��
//	}
//	else if (e.key < T->data.key)
//		InsertBST(T->lchild, e); // ��*S����������
//	else if(e.key > T->data.key)
//		InsertBST(T->rchild, e); // ��*S����������
//}
//
//void CreateBST(BSTree& T)
//{
//	// ���ζ���ؼ���Ϊkey�Ľڵ㣬����Ӧ�ڵ�������������T��
//	T = NULL; // ������������T��ʼ��Ϊ����
//	std::cin >> e;
//	while (e.key != ENDFLAG)
//	{
//		InsertBST(T, e); // ���˽ڵ�������������T��
//		std::cin >> e;
//	}
//}
//
//void DeleteBST(BSTree& T, KeyType key)
//{
//	// �Ӷ���������T��ɾ���ؼ��ֵ���key�Ľڵ�
//	BSTree p = T, f = NULL; // ��ʼ��
//	while (p)
//	{
//		if (p->data.key == key) break; // �ҵ��ؼ��ֵ���key�Ľڵ�*p������ѭ��
//		f = p; // *fΪ*p��˫�׽ڵ�
//		if (p->data.key > key) p = p->lchild; // ��*p���������м�������
//		else p = p->rchild; // ��*p���������м�������
//	} // �Ҳ�����ɾ���ڵ��򷵻�
//	BSTree q = p;
//	if (p->lchild && p->rchild) // ��ɾ���ڵ�*p������������Ϊ��
//	{
//		BSTNode* s = p->lchild;
//		while (s->rchild) // ��*p���������м�������ǰ���ڵ㣬�������½ڵ�
//		{
//			q = s; 
//			s = s->rchild; // ���ҵ���ͷ
//		}
//		p->data = s->data; // sָ��ɾ���ڵ�ġ�ǰ����
//		if (q != p) q->rchild = s->lchild; // �ؽ�*q��������
//		else q->lchild = s->lchild; // �ؽ�*q��������
//		delete s;
//		return;
//	} // if
//	else if (!p->rchild) // ��ɾ�ڵ�*p����������ֻ���ؽ���������
//	{
//		p = p->lchild; 
//	} // else if
//	else if (!p->lchild) // ��ɾ�ڵ�*p����������ֻ���ؽ���������
//	{
//		p = p->rchild;
//	}
//	if (!f) T = p; // ��ɾ�ڵ�Ϊ���ڵ�
//	else if (q == f->lchild) f->lchild = p; // �ҽӵ�*f��������λ��
//	else f->rchild = p; // �ҽӵ�*f��������λ��
//	delete q;
//}