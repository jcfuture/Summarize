//#include <iostream>
//
//#define OK 1
//#define ERROR -1
//
//typedef int ElemType;
//typedef int Status;
//
//typedef struct LNode
//{
//	ElemType data; // �ڵ��������
//	struct LNode* next; // �ڵ��ָ����
//}LNode , *LinkList; // LinkListΪָ��ṹ��LNode��ָ������
//
//// ��ʼ��
//Status InitList(LinkList& L)
//{
//	// ����һ���յĵ�����L
//	L = new LNode; // �����½ڵ���Ϊͷ�ڵ㣬��ͷָ��Lָ��ͷ�ڵ�
//	L->next = NULL; // ͷ�ڵ��ָ�����ÿ�
//	return OK;
//}
//
//// ȡֵ
//Status GetElem(LinkList L, int i, ElemType& e)
//{
//	// �ڴ�ͷ���ĵ�����L�и������i��ȡԪ�ص�ֵ����e����L�е�i������Ԫ�ص�ֵ
//	LinkList p = L->next;  // ��ʼ����pֻ����Ԫ�ڵ�
//	int j = 1; // ������j��ֵ��Ϊ1��
//	while (p && j < i)  // ˳���������ң�ֱ��pΪ�ջ�pָ���i��Ԫ��
//	{
//		p = p->next; // pָ����һ���ڵ�
//		++j; // ������j��Ӧ��1
//	}
//	if (!p || j > i) return ERROR; // iֵ���Ϸ� i>n��i<0
//	e = p->data; // ȡ��i������������
//	return OK;
//}
//
//// ����
//LNode* LocateElem(LinkList L, ElemType e)
//{
//	// �ڴ�ͷ���ĵ�����L�в���ֵΪe��Ԫ��
//	LinkList p = L->next; // ��ʼ����pָ����Ԫ�ڵ�
//	while (p && p->data != e) // ˳���������ң�ֱ��pΪ�ջ�p��ָ��ڵ�����������e
//		p = p->next; // p ָ����һ���ڵ�
//	return p; // ���ҳɹ�����ֵΪe�Ľڵ��ַp������ʧ��pΪNULL
//}
//
//// ����
//Status LisiInsert(LinkList& L, int i, ElemType e)
//{
//	// �ڴ�ͷ���ĵ�����L�е�i��λ�ò���ֵΪe���½ڵ�
//	LinkList p = L;
//	int j = 0;
//	while (p && j < i - 1)
//	{
//		p = p->next; // ���ҵ�i-1���ڵ㣬pָ��ýڵ�
//		++j;
//	}
//	if (!p || j > i - 1) return ERROR; // i > n + 1 ���� i << 1
//	LinkList s = new LNode; // �����½ڵ� *S
//	s->data = e; // ���ڵ�*s����������Ϊe
//	s->next = p->next; // ���ڵ�*s��ָ������Ϊe
//	p->next = s; // ���ڵ�*p��ָ����ָ��ڵ�*s
//	return OK;
//}
//
//// ɾ��
//Status ListDelete(LinkList& L, int i)
//{
//	// �ڴ�ͷ���ĵ�����L�У�ɾ����i��Ԫ��
//	LinkList p = L; 
//	int j = 0;
//	while (p->next && j < i - 1) // ���ҵ�i-1���ڵ㣬pָ��ýڵ�
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p->next || j > i - 1) return ERROR; // ��i>n��i<1ʱ��ɾ��λ�ò�����
//	LinkList q = p->next; // ��ʱ���汻ɾ�ڵ�ĵ�ַ�Ա��ͷ�
//	p->next = q->next; // �ı�ɾ���ڵ�ǰ���ڵ��ָ����
//	delete q; // �ͷ�ɾ���ڵ�Ŀռ�
//	return OK;
//}
//
//// ǰ�巨 ����������
//void CreateList_H(LinkList& L, int n)
//{
//	// ��λ������n��Ԫ�ص�ֵ��������ͷ���ĵ�����L
//	L = new LNode;
//	L->next = NULL; // �Ƚ���һ����ͷ�ڵ�Ŀ�����
//	for (int i = 0; i < n; i++)
//	{
//		LinkList p = new LNode; // �����½ڵ�*p
//		std::cin >> p->data; // ����Ԫ��ֵ�����½ڵ�*p��������
//		p->next = L->next; // ���½ڵ�*p���뵽ͷ�ڵ�֮��
//		L->next = p; 
//	}
//}
//
//// ���������� ��巨
//void CreateList_R(LinkList& L, int n)
//{
//	// ��λ������n��Ԫ�ص�ֵ��������ͷ�ڵ�ĵ�����L
//	L = new LNode; // �Ƚ���һ����ͷ���Ŀ�����
//	L->next = NULL;
//	LinkList r = L; // βָ��rָ��ͷ�ڵ�
//	for (int i = 0; i < n; i++)
//	{
//		LinkList p = new LNode; // �����½ڵ�
//		std::cin >> p->data; // ����Ԫ��ֵ�����½ڵ�*p��������
//		p->next = NULL;
//		r->next = p; // ���½ڵ�*p����β�ڵ�*r֮��
//		r = p; // rָ���µ�β�ڵ�*p
//	}
//}
//
//// ���������ĺϲ�
//void MergeList_L(LinkList& LA, LinkList& LB, LinkList& LC)
//{
//	// ��֪������LA��LB��Ԫ�ذ�ֵ�ǵݼ�������
//	// �鲢LA��LB�õ��µĵ�����LC��LC��Ԫ��Ҳ��ֵ�ǵݼ�����
//	LinkList pa = LA->next; // pa��pb�ĳ�ֵ�ֱ�ָ��������ĵ�һ���ڵ�
//	LinkList pb = LB->next;
//	LC = LA; // ��LA��ͷ�ڵ���ΪLC��ͷ�ڵ�
//	LinkList pc = LC; //pc�ĳ�ֵָ��LC��ͷ�ڵ�
//	while (pa && pb)
//	{
//		// LA��LB��δ�����β�����Ρ�ժȡ��������ֵ��С�Ľڵ���뵽LC�����
//		if (pa->data <= pb->data) // ժȡpa��ָ��ڵ�
//		{
//			pc->next = pa; // ��pa��ֵ�ڵ����ӵ�pc��ָ�ڵ�֮��
//			pc = pa; // ��pcָ��pa
//			pa = pa->next; // paָ����һ���ڵ�
//		}
//		else // ժȡpb��ָ�ڵ�
//		{
//			pc->next = pb; // ��pb��ָ�ڵ����ӵ�pc��ָ�ڵ�֮��
//			pc = pb; // pcָ��pb
//			pb = pb->next; // pbָ����һ�ڵ�
//		}
//	} // while
//	pc->next = pa ? pa : pb; // ���ǿձ��ʣ��β��뵽pc��ָ���֮��
//	delete LB; // �ͷ�LB��ͷ�ڵ�
//}