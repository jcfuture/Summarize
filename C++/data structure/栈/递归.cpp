//#include <iostream>
//
//long Fact(long n)
//{
//	if (n == 0) return 1; // �ݹ���ֹ������
//	else return n * Fact(n - 1); // �ݹ鲽��
//}
//
//long Fib(long n)
//{
//	if (n == 1 || n == 2) return 1; // �ݹ���ֹ������
//	else return Fib(n - 1) + Fib(n - 2); //�ݹ鲽��
//}
//
//typedef struct LNode
//{
//	int data; // �ڵ��������
//	struct LNode* next; // �ڵ��ָ����
//}LNode, * LinkList; // LinkListΪָ��ṹ��LNode��ָ������
//
//void TraverseList(LinkList p)
//{
//	if (p) 
//	{
//		std::cout << p->data << std::endl; // �����ǰ�ڵ��������
//		TraverseList(p->next);
//	}
//}
//
//int m = 0;
//void move(char A, int n, char C)
//{
//	std::cout << ++m << "," << n << "," << C << std::endl;
//}
//
//void Hanoi(int n, char A, char B, char C)
//{
//	// ������A�ϵ�n��Բ�̰�����ᵽ����C�ϣ�����B��Ϊ��������
//	if (n == 1) move(A, 1, C); // �����Ϊ1��Բ�̴�����A�Ƶ�����C
//	else
//	{
//		Hanoi(n - 1, A, C, B); // ��A�ϱ��Ϊ1��n-1��Բ���Ƶ�����B������C��Ϊ��������
//		move(A, n, C); // �����Ϊn��Բ�̴�����A�Ƶ�����C
//		Hanoi(n - 1, B, A, C); // ��B�ϱ��Ϊ1��n-1��Բ���Ƶ�����C������A��Ϊ��������
//	}
//}