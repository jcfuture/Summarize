//#include <iostream>
//#define OK 1
////#define ERROR -1
//
//typedef int ElemType;
//typedef int SElemType;
//typedef int Status;
//
//typedef struct StackNode
//{
//	ElemType data;
//	struct StackNode* next;
//}StackNode , *LinkStack;
//
//// ��ʼ��
//Status InitStack(LinkStack& S)
//{
//	// ����һ����ջS��ջ��ָ���ÿ�
//	S = NULL;
//	return OK;
//}
//
//// ��ջ
//Status Push(LinkStack& S, SElemType e)
//{
//	// ��ջ������Ԫ��e
//	LinkStack p = new StackNode; // �����½ڵ�
//	p->data = e; // ���½ڵ���������Ϊe
//	p->next = S; // ���½ڵ����ջ��
//	S = p; // �޸�ջ��ָ��Ϊp
//	return OK;
//}
//
//// ��ջ
//Status Pop(LinkStack& S, SElemType& e)
//{
//	// ɾ��S��ջ��Ԫ�أ���e������ֵ
//	if (S == NULL) return ERROR; // ջ��
//	e = S->data; // ��ջ��Ԫ�ظ���e
//	LinkStack p = S; // ��p��ʱ����ջ��Ԫ�ؿռ䣬�Ա��ͷ�
//	S = S->next; // �޸�ջ��ָ��
//	delete p; //�ͷ�ԭջ��Ԫ�صĿռ�
//	return OK;
//}
//
//// ȡջ��Ԫ��
//SElemType GetTop(LinkStack S)
//{
//	// ����S��ջ��Ԫ�أ����޸�ջ��ָ��
//	if (S != NULL) // ջ�ǿ�
//		return S->data; // ����ջ��Ԫ�ص�ֵ��ջ��ָ�벻��
//}