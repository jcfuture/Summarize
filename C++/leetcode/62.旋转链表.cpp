//#include <iostream>
//
//struct ListNode
//{
//    int data;
//    ListNode* next;
//    ListNode() : data(0), next(nullptr) {}
//    ListNode(int x) : data(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : data(x), next(next) {}
//
//};
//
//class Solution {
//public:
//    ListNode* rotateRight(ListNode* head, int k) {
//        // ��ʼ����������ת����Ϊ 0 or ͷ�ڵ�Ϊ�� or ͷ�ڵ����һ��ָ��Ϊ�� ֱ�ӷ���ͷ�ڵ����
//        if (k == 0 || head == nullptr || head->next == nullptr) return head;
//        // ����һ������ָ�룬ָ��ͷ�ڵ�
//        ListNode* cur = head;
//        // ���������β�ڵ㣬����������ĳ���
//        int count = 1;
//        while (cur->next != nullptr)
//        {
//            cur = cur->next;
//            count++;
//        }
//        // �����ڵڼ������Ͽ�ָ��
//        int index = count - k % count;
//        // ��� index Ϊ n�� ��˵��û�н��иı�
//        if (index == count) return head;
//        // ��β�ڵ���ͷ�ڵ�������ӣ�����һ����
//        cur->next = head;
//        // ��ʼ��Ҫ�Ͽ����ӵĽ��
//        while (index--)
//            cur = cur->next;
//        // ����һ����㣬�洢���ָ��
//        ListNode* temp = cur->next;
//        // �Ͽ���ǰָ�����һ����������
//        cur->next = nullptr;
//        // ���ؽ��
//        return temp;
//    }
//};
//
//int main()
//{
//    ListNode* p1 = new ListNode(1);
//    ListNode* p2 = new ListNode(2);
//    ListNode* p3 = new ListNode(3);
//    ListNode* p4 = new ListNode(4);
//    
//    p1->next = p2;
//    p2->next = p3;
//    p3->next = p4;
//
//    Solution sol;
//    p1 = sol.rotateRight(p1, 2);
//
//    while (p1)
//    {
//        std::cout << p1->data << std::endl;
//        p1 = p1->next;
//    }
//    return 0;
//}