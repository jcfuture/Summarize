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
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//		// ʹ������ָ��ֱ� ���ڴ洢�Լ��м�����
//		ListNode* result = new ListNode(0);
//		result->next = head;
//		ListNode* temp = result;
//		// �洢 head ��������
//		int length = 0;
//		// ��ͷ����ѭ�������������
//		while (head != nullptr)
//		{
//			length++;
//			head = head->next;
//		}
//
//		// �������λ���������Ҫɾ��
//		length -= n;
//		while (length--)
//		{
//			temp = temp->next;
//		}
//
//		// ����ǰ�ڵ����һ��ָ�� ���� ��ǰ�ڵ����һ������һ���Ľڵ�
//		temp->next = temp->next->next;
//
//		return result->next;
//    }
//};
//
//int main()
//{
//	Solution sol;
//	ListNode* t = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
//	ListNode* TT = sol.removeNthFromEnd(t, 2);
//	while (TT != NULL)
//	{
//		std::cout << TT->val << " ";
//		TT = TT->next;
//	}
//	return 0;
//}#include <iostream>
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
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//		// ʹ������ָ��ֱ� ���ڴ洢�Լ��м�����
//		ListNode* result = new ListNode(0);
//		result->next = head;
//		ListNode* temp = result;
//		// �洢 head ��������
//		int length = 0;
//		// ��ͷ����ѭ�������������
//		while (head != nullptr)
//		{
//			length++;
//			head = head->next;
//		}
//
//		// �������λ���������Ҫɾ��
//		length -= n;
//		while (length--)
//		{
//			temp = temp->next;
//		}
//
//		// ����ǰ�ڵ����һ��ָ�� ���� ��ǰ�ڵ����һ������һ���Ľڵ�
//		temp->next = temp->next->next;
//
//		return result->next;
//    }
//};
//
//int main()
//{
//	Solution sol;
//	ListNode* t = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
//	ListNode* TT = sol.removeNthFromEnd(t, 2);
//	while (TT != NULL)
//	{
//		std::cout << TT->val << " ";
//		TT = TT->next;
//	}
//	return 0;
//}