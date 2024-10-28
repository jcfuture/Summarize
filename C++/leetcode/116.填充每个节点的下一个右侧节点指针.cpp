//#include <iostream>
//#include <queue>
//
//struct Node
//{
//    int val;
//    Node* left;
//    Node* right;
//    Node* next;
//    Node() :val(0), left(nullptr), right(nullptr), next(nullptr) {}
//    Node(int x) :val(x), left(nullptr), right(nullptr), next(nullptr) {}
//    Node(int x, Node* left, Node* right, Node* next)
//        :val(x), left(left), right(right), next(next) {}
//};
//
///*
//    �ж�һ��ڵ��Ƿ�����������ж��Ƿ�������ѧ��ʽ
//    (count % 2) - 1 == 0;
//    ������������ȫ���ڵ�һ��Ϊ 2 ^ n - 1 ���ڵ�
//*/
//
////class Solution {
////public:
////    Node* connect(Node* root) {
////        if (!root) 
////            return root;
////
////        // ��ʼ������ͬʱ����һ��ڵ��������У������ڵ�
////        std::queue<Node*> que;
////        que.push(root);
////
////        // ���� while ѭ���������ǲ���
////        while (!que.empty()) {
////
////            // ��¼��ǰ���д�С
////            int size = que.size();
////
////            // ������һ������нڵ�
////            for (int i = 0; i < size; i++) {
////
////                // �Ӷ���ȡ��Ԫ��
////                Node* node = que.front();
////                que.pop();
////
////                // ����
////                if (i < size - 1) 
////                    node->next = que.front();
////
////                // ��չ��һ��ڵ�
////                if (node->left)
////                    que.push(node->left);
////                if (node->right) 
////                    que.push(node->right);
////            }
////        }
////
////        // ���ظ��ڵ�
////        return root;
////    }
////};
//
//class Solution {
//public:
//    Node* connect(Node* root) {
//        if (root == nullptr) {
//            return root;
//        }
//
//        // �Ӹ��ڵ㿪ʼ
//        Node* leftmost = root;
//
//        while (leftmost->left != nullptr) {
//
//            // ������һ��ڵ���֯�ɵ�����Ϊ��һ��Ľڵ���� next ָ��
//            Node* head = leftmost;
//
//            while (head != nullptr) {
//
//                // CONNECTION 1
//                head->left->next = head->right;
//
//                // CONNECTION 2
//                if (head->next != nullptr) {
//                    head->right->next = head->next->left;
//                }
//
//                // ָ������ƶ�
//                head = head->next;
//            }
//
//            // ȥ��һ�������Ľڵ�
//            leftmost = leftmost->left;
//        }
//
//        return root;
//    }
//};