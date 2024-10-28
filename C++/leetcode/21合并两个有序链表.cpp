//#include <iostream>
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        // ���list1Ϊ��������list2������Ҫ���ص�����
//        if (list1 == nullptr) return list2;
//        // ���list2Ϊ��������list1������Ҫ���ص�����
//        else if (list2 == nullptr) return list1;
//        // ���list1����ֵС��list2����ֵ
//        else if (list1->val < list2->val) {
//            // ��list1����һ����
//            list1->next = mergeTwoLists(list1->next, list2);
//            return list1;
//        }
//        else {
//            list2->next = mergeTwoLists(list1, list2->next);
//            return list2;
//        }
//    }
//};