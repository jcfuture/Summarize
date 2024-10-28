//#include <iostream>
//
//typedef int TElemType;
//
//typedef struct BiThrNode
//{
//	TElemType data;
//	struct BiThrNode* lchild, * rchild; // ���Һ���ָ��
//	int LTag, RTag; // ���ұ�־
//}BiThrNode , *BiThrTree;
//
//// �Խڵ�pΪ������������������
//void InThreading(BiThrTree p)
//{
//	BiThrTree pre = 0;
//	// pre��ȫ�ֱ�������ʼ��ʱ���Һ���ָ��Ϊ�գ���������������㿪ʼ������
//	if (p)
//	{
//		InThreading(p->lchild); // �������ݹ�������
//		if (!p->lchild) // p������Ϊ��
//		{
//			p->LTag = 1; // ��p����������
//			p->lchild = pre; // p������ָ��ָ��pre��ǰ����
//		}
//		else p->LTag = 0;
//		if (!pre->rchild) // pre���Һ���Ϊ��
//		{
//			pre->RTag = 1; // ��pre����������
//			pre->rchild = p; // pre���Һ���ָ��ָ��p��������
//		}
//		else pre->RTag = 0;
//		pre = p; // ����preָ��p
//		InThreading(p->rchild); // �������ݹ�������
//	}
//}
//
//// ��ͷ���Ķ���������������
//void InOrderThreading(BiThrTree& Thrt, BiThrTree T)
//{
//	BiThrTree pre;
//	// �������������T��������������������Thrָ��ͷ�ڵ�
//	Thrt = new BiThrNode; // ��ͷ�ڵ�
//	Thrt->LTag = 0; // ͷ�ڵ������ӣ������ǿգ���������Ϊ����
//	Thrt->RTag = 1; // ͷ�ڵ���Һ���ָ��Ϊ������
//	Thrt->rchild = Thrt; // ��ʼ��ʱ��ָ��ָ���Լ�
//	if (!T) Thrt->lchild = Thrt; // ����Ϊ�գ�����ָ��Ҳָ���Լ�
//	else
//	{
//		Thrt->lchild = T;
//		pre = Thrt; // ͷ�ڵ������ָ�����pre��ֵָ��ͷ�ڵ�
//		InThreading(T); // ����TΪ���Ķ�������������������
//		pre->rchild = Thrt; // preΪ���ҽڵ㣬pre��������ָ��ͷ�ڵ�
//		pre->RTag = 1;
//		Thrt->rchild = pre; // ͷ�ڵ��������ָ��pre
//	}
//}
//
//// ������������������
//void InOrderTraverse_Thr(BiThrTree T)
//{
//	// Tָ��ͷ�ڵ㣬ͷ�ڵ������lchildָ����ڵ�
//	// �����������������T�ķǵݹ��㷨����ÿ������Ԫ��ֱ�����
//	BiThrTree p = T->lchild; // pָ����ڵ�
//	while (p != T) // �������������ʱ��p=T
//	{
//		while (p->LTag == 0) p = p->lchild; // ����������
//		std::cout << p->data; // ������������Ϊ�յĽڵ�
//		while (p->RTag == 1 && p->rchild != T)
//		{
//			p = p->rchild;
//			std::cout << p->data; // �����������ʺ�̽ڵ�
//		}
//		p = p->rchild; // ת��p��������
//	}
//}