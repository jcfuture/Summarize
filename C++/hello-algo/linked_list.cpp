//#include <iostream>
//
///* ����ڵ�ṹ�� */
//struct ListNode
//{
//	int val;								   // �ڵ�ֵ
//	ListNode* next;							   // ָ����һ�ڵ��ָ��
//	ListNode(int x) : val(x), next(nullptr) {} // ���캯��
//};
//
///* ˫������ڵ�ṹ�� */
//struct douListNode
//{
//	int val;                // �ڵ�ֵ
//	douListNode* next;      // ָ���̽ڵ��ָ��
//	douListNode* prev;      // ָ��ǰ���ڵ��ָ��
//	douListNode(int x) : val(x), next(nullptr), prev(nullptr) {} // ���캯��
//};
//
///* ������Ľڵ� n0 ֮�����ڵ� p */
//void insert(ListNode* n0, ListNode* p)
//{
//	ListNode* n1 = n0->next;
//	p->next = n1;
//	n0->next = p;
//}
//
///* ɾ������Ľڵ� n0 ֮����׸��ڵ� */
//void remove(ListNode* n0)
//{
//	if (n0->next == nullptr) return;
//	// n0 -> p -> n1
//	ListNode* p = n0->next;
//	ListNode* n1 = p->next;
//	n0->next = n1;
//	// �ͷ��ڴ�
//	delete p;
//}
//
///* ��������������Ϊ index �Ľڵ� */
//ListNode* access(ListNode* head, int index)
//{
//	for (int i = 0; i < index; i++)
//	{
//		if (head == nullptr) return nullptr;
//		head = head->next;
//	}
//	return head;
//}
//
///* �������в���ֵΪ target ���׸��ڵ� */
//int find(ListNode* head, int target)
//{
//	int index = 0;
//	while (head != nullptr)
//	{
//		if (head->val == target) return index;
//		head = head->next;
//		index++;
//	}
//	return -1;
//}
//
//int main1()
//{
//	/* ��ʼ������ 1 -> 3 -> 2 -> 5 -> 4 */
//// ��ʼ�������ڵ�
//	ListNode* n0 = new ListNode(1);
//	ListNode* n1 = new ListNode(3);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(5);
//	ListNode* n4 = new ListNode(4);
//	// �����ڵ�֮�������
//	n0->next = n1;
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	return 0;
//}