//#include <iostream>
//
//typedef struct PNode
//{
//	float coef; // ϵ��
//	int expn; // ָ��
//	struct PNode* next; // ָ����
//}PNode , *Polynoimal;
//
//// ����ʽ�Ĵ���
//void CreatePolyn(Polynoimal& P, int n)
//{
//	// ����n���ϵ����ָ����������ʾ����ʽ����������P
//	P = new PNode;
//	P->next = NULL; // �Ƚ���һ����ͷ���ĵ�����
//	for (int i = 1; i <= n; ++i) // ��������n��������
//	{
//		Polynoimal s = new PNode; // �����½ڵ�
//		std::cin >> s->coef >> s->expn; // ����ϵ����ָ��
//		Polynoimal pre = P; // pre���ڱ���P��ǰ������ֵΪͷ�ڵ�
//		Polynoimal q = P->next; // q��ʼ����ָ����Ԫ�ڵ�
//		while (q && q->expn < s->expn) // ͨ���Ƚ�ָ���ҵ���һ������������ָ������*q
//		{
//			pre = q;
//			q = q->next;
//		} // while
//		s->next = q; // ��������s����*q����ǰ���ڵ�pre֮��
//		pre->next = s;
//	} // for
//}
//
//// ����ʽ�����
//void AddPolyn(Polynoimal& Pa, Polynoimal& Pb)
//{
//	// ����ʽ�ӷ���Pa=Pa+Pb,������������ʽ�Ľڵ㹹�ɡ��Ͷ���ʽ��
//	Polynoimal p1 = Pa->next, p2 = Pb->next; // p1��p2��ʼʱ�ֱ�ָ��Pa��Pb����Ԫ�ڵ�
//	Polynoimal p3 = Pa; // p3ָ��Ͷ���ʽ�ĵ�ǰ�ڵ㣬��ֵΪPa
//	while (p1 && p2) // p1��p2���ǿ�
//	{
//		if (p1->expn == p2->expn) // ָ�����
//		{
//			int sum = p1->coef + p2->coef; // sum���������ϵ����
//			if (sum != 0) // ϵ���Ͳ�Ϊ0
//			{
//				p1->coef = sum; // �޸�Pa��ǰָ��ڵ��ϵ��ֵΪ����ϵ���ĺ�
//				p3->next = p1;  // ���޸ĺ��Pa��ǰָ��ڵ�������p3֮��p3ָ��p1
//				p3 = p1;
//				p1 = p1->next; // p1ָ���һ��
//				Polynoimal r = p2; // ɾ��Pb��ǰָ��ڵ㣬p2ָ���һ��
//				p2 = p2->next;
//				delete r;
//			}
//			else // ϵ����Ϊ0
//			{
//				Polynoimal r = p1; // ɾ��Pa��ǰ��ָ��ڵ㣬p1ָ���һ��
//				p1 = p1->next;
//				delete r;
//
//				Polynoimal r = p2; // ɾ��Pb��ǰ��ָ��ڵ㣬p2ָ���һ��
//				p2 = p2->next;
//				delete r;
//			}
//		}
//		else if (p1->expn < p2->expn) // Pa��ָ��ڵ��ָ��ֵС
//		{
//			p3->next = p1; // ��p1������p3֮��
//			p3 = p1; // p3ָ��p1
//			p1 = p1->next; // p1ָ���һ��
//		}
//		else // Pb��ǰ־��ڵ��ָ��ֵС
//		{
//			p3->next = p2; // ��p2������p3֮��
//			p3 = p2; // p3ָ��p2
//			p2 = p2->next; // p2ָ�����һ��
//		}
//	} // while
//	p3->next = p1 ? p1 : p2; // ����ǿն���ʽ��ʣ���
//	delete Pb; // �ͷ�Pb��ͷ�ڵ�
//}