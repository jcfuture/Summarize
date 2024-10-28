//#include <iostream>
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//	ListNode* swapPairs(ListNode* head) {
//		// ����һ������Ľڵ�ָ��
//		ListNode* init = new ListNode(0);
//		// �ýڵ�ָ�����һ��ָ�� head ͷָ��
//		init->next = head;
//		// ����һ����ʱָ�����ڽ����ڵ�
//		ListNode* temp = init;
//		// ����ʱָ�����һ��Ԫ�غ����¸�Ԫ�ز�Ϊ��
//		while (temp->next != nullptr && temp->next->next != nullptr)
//		{
//			// �ֱ��������ڵ�洢��һ��������һ���ڵ����Ϣ
//			ListNode* node1 = temp->next;
//			ListNode* node2 = temp->next->next;
//			// �����ڵ�
//			temp->next = node2;
//			node1->next = node2->next;
//			node2->next = node1;
//			temp = node1;
//		}
//		// ���ؽڵ�
//		return init->next;
//	}
//
//	void PrintListNode(ListNode* head)
//	{
//		while (head)
//		{
//			std::cout << head->val << " ";
//			head = head->next;
//		}
//	}
//};
//
