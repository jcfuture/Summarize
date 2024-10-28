//#include <iostream>
//
//// ��������˳��洢��ʾ
//#define MAXSIZE 100 // �����������ڵ���
//typedef int TElemType;
//
//typedef TElemType SqBitree[MAXSIZE]; // 0�ŵ�Ԫ�洢���ڵ�
//SqBitree bt;
//
//// �������Ķ�������洢��ʾ
//typedef struct BitNode
//{
//	TElemType data; // �ڵ�������
//	struct BitNode* lchild, * rchild; //���Һ���ָ��
//}BitNode , *BiTree;
//
//// ������� �ݹ�
//void InOrderTraverseD(BiTree T)
//{
//	// �������������T�ĵݹ��㷨
//	if (T) // ���������ǿ�
//	{
//		InOrderTraverseD(T->lchild); // �������������
//		std::cout << T->data << std::endl; // ���ʸ��ڵ�
//		InOrderTraverseD(T->rchild); // �������������
//	}
//}
//
//// ������� �ǵݹ�
////void InOrderTraverse(BiTree T)
////{
////	// �������������T�ķǵݹ鷺
////	InitStack(S); p = T;
////	q = new BitNode;
////	while (p || !StackEmpty(S))
////	{
////		if (p) // p�ǿ�
////		{
////			Push(S, p); // ��ָ���ջ
////			p = p->next; // ��ָ���ջ������������
////		}
////		else // pΪ��
////		{
////			Pop(S, p); // ��ջ
////			std::cout << q->data; // ���ʸ��ڵ�
////			p = q->rchild; // ����������
////		}
////	} // while
////}
//
//// ���������˨�콨����������
//void CreateBiTree(BiTree T)
//{
//	// �������������������нڵ��ֵ�����ַ��������ܼ����������ʾ�Ķ�����T
//	char ch;
//	std::cin >> ch;
//	if (ch == '#') T = NULL; // �ݹ������������
//	else // �ݹ鴴��������
//	{
//		T = new BitNode; // ���ɸ��ڵ�
//		T->data = ch; // ���ڵ���������Ϊch
//		CreateBiTree(T->lchild); // �ݹ鴴��������
//		CreateBiTree(T->rchild); // �ݹ鴴��������
//	} // else
//}
//
//// ��������������
//int Depth(BiTree T)
//{
//	// ��������������
//	if (T == NULL) return 0; // ����ǿ��������Ϊ0���ݹ����
//	else
//	{
//		int m = Depth(T->lchild); // �ݹ���������������Ϊm
//		int n = Depth(T->rchild); // �ݹ���������������Ϊn
//		if (m > n) return m + 1; // �����������Ϊm��n�Ľϴ��߼�1
//		else return n + 1;
//	}
//}
//
//// ͳ�ƶ������нڵ�ĸ���
//int NodeCount(BiTree T)
//{
//	// ͳ�ƶ�����T�нڵ�ĸ���
//	if (T == NULL) return 0; // ����ǿ�������ڵ����Ϊ0���ݹ����
//	else return NodeCount(T->lchild) + NodeCount(T->rchild) + 1; // ����ڵ����Ϊ�������Ľڵ����+�������Ľڵ����+1
//}
//
//// ���ʽ����ֵ
////int EvaluateExpTree(BiTree T)
////{
////	int lvalue = rvalue = 0; // ��ʼΪ0
////	if (T->lchild == NULL && T->rchild == NULL)
////		return T->data - '0'; // ����ڵ�Ϊ���������򷵻ظýڵ����ֵ
////	else // ����ڵ�Ϊ�����
////	{
////		lvalue = EvaluateExpTree(T->lchild); // �ݹ������������ֵ����Ϊlvalue
////		rvalue = EvaluateExpTree(T->rchild); // �ݹ������������ֵ����Ϊrvalue
////		return GetValue(T->data, lvalue, rvalue); // ���ݵ�ǰ�ڵ�����������ͽ�����Ӧ����
////	}
////}