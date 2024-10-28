//#include <iostream>
//
//struct ListNode
//{
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head)
//    {   
//        // ��ͷ�ڵ�Ϊ�գ�ֱ�ӷ���ͷ�ڵ㼴��
//        if (!head) return head;
//
//        // �����ڱ���㣬����ָ����ָ��ͷ�ڵ�
//        ListNode* dummy = new ListNode();
//        dummy->next = head;
//
//        // ����������ָ��
//        ListNode* fast = dummy, * slow = nullptr;
//
//        // ����ָ�������ʱ������ѭ��
//        while (fast)
//        {
//            // ����ָ���ƶ�����ָ����
//            slow = fast;
//            // ����ָ���ƶ���������һ���ڵ���
//            fast = fast->next;
//
//            // ����ָ��ڵ��ֵ������һ��ָ��Ľڵ��ֵ���ʱ������ѭ��
//            while (fast && fast->next && fast->val == fast->next->val)
//            {
//                // �洢�ظ��Ľ��ֵ
//                int x = fast->val;
//
//                // ������ֻҪ�ǽڵ�ֵ���� x �Ķ�Ҫɾ��
//                while (fast && fast->val == x)
//                    fast = fast->next;
//
//                // ����ָ���ָ����ָ����ͬ�ڵ�ֵ����һ��ָ��
//                slow->next = fast;
//            }
//        }
//
//        // ��������
//        return dummy->next;
//    }
//};
//
//int main()
//{
//    ListNode* p0 = new ListNode();
//    ListNode* p1 = new ListNode(1, p0);
//    ListNode* p2 = new ListNode(1, p1);
//    ListNode* p3 = new ListNode(2, p2);
//    ListNode* p4 = new ListNode(2, p3);
//    ListNode* p5 = new ListNode(3, p4);
//    ListNode* p6 = new ListNode(4, p5);
//    ListNode* p7 = new ListNode(5, p6);
//    ListNode* p8 = new ListNode(5, p7);
//
//    Solution sol;
//    ListNode* p = sol.deleteDuplicates(p8);
//
//    while (p)
//    {
//        std::cout << p->val << " ";
//        p = p->next;
//    }
//    std::cin.get();
//}