/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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
//    //ListNode* deleteDuplicates(ListNode* head) {
//    //    if (head == nullptr)
//    //        return nullptr;
//    //    ListNode* cur = head;
//    //    while (cur->next)
//    //        if (cur->next->val == cur->val)
//    //            cur->next = cur->next->next; // ����û�л����ڴ棬����Ҫ��ͬѧ�����в���
//    //        else
//    //            cur = cur->next;
//    //    return head;
//    //}
//
//    ListNode* deleteDuplicates(ListNode* head) {
//
//        if (head == nullptr) return nullptr;
//
//        ListNode* temp = head;
//
//        while (temp->next != nullptr) {
//            if (temp->next->val == temp->val)
//                temp->next = temp->next->next;
//            else
//                temp = temp->next;
//                
//        }
//
//        return head;
//    }
//};