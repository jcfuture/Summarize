//#include <iostream>
//
//struct ListNode
//{
//    int val;
//    ListNode* next;
//    ListNode() :val(0), next(nullptr) {}
//    ListNode(int x) :val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) :val(x), next(next) {}
//};
//
//class Solution {
//public:
//    ListNode* oddEvenList(ListNode* head) {
//        // ��ͷ�ڵ�Ϊ�յ�ʱ��ֱ�ӷ���ͷ�ڵ�
//        if (!head) return head;
//        
//        // ����һ���ս��
//        ListNode* dummy = new ListNode(-1);
//        // ��ͷ�ڵ㣬���ӵ� dummy �ڵ�ĺ���
//        dummy->next = head;
//
//        // ����һ��������㣬��һ�������
//        ListNode* cur = head, *slow = nullptr;
//        
//        // ����һ���������������жϵ�ǰ�ڵ��� ���� ���� ż���
//        int count = 1; // Ĭ�ϵ�һ��Ϊ ����
//        while (cur)
//        {
//            // ����� ���㣬�������ӵ�ͷ����
//            if (count % 2 != 0) slow = cur->next;
//        }
//    }
//};