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
//	ListNode* reverseList(ListNode* head) 
//	{
//		// ����һ���սڵ�����ǰ�幹������
//		ListNode* prev = nullptr;
//		// ����һ���ڵ�ʹ�� head ��������Ϣ
//		ListNode* curr = head;
//		// ����ǰ�ڵ㲻Ϊ��
//		while (curr)
//		{
//			// ����һ���ڵ�洢��ǰ�ڵ����һ���ڵ�ĵ�ַ
//			ListNode* next = curr->next;
//			// ����ǰ�ڵ����һ��ָ��ָ��ǰ�幹���ָ��
//			curr->next = prev;
//			// ��ǰ�幹��ͷ�ڵ�ָ���ƶ�����ǰ�ڵ���
//			prev = curr;
//			// ָ��ǰ�ڵ��ָ���ƶ�����һ���ڵ���
//			curr = next;
//		}
//		// ����ǰ�幹��õ�������
//		return prev;
//	}
//};