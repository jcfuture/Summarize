#include <iostream>

struct Node
{
	int val;
	Node* left;
	Node* right;
	Node* next;
	Node() :val(0), left(nullptr), right(nullptr), next(nullptr) {}
	Node(int x) :val(x), left(nullptr), right(nullptr), next(nullptr) {}
	Node(int x, Node* let, Node* right, Node* next)
		:val(x), left(left), right(right), next(next) {}
};

class Solution
{
public:
	Node* connect(Node* root) {
		if (root == nullptr) {
			return root;
		}
			
		// �Ӹ��ڵ㿪ʼ
		Node* leftmost = root;
			
		while (leftmost->left != nullptr) {
			
			// ������һ��ڵ���֯�ɵ�����Ϊ��һ��Ľڵ���� next ָ��
			Node* head = leftmost;
			
			while (head != nullptr) {
			
			    // CONNECTION 1
			    head->left->next = head->right;
			
			    // CONNECTION 2
			    if (head->next != nullptr) {
			        head->right->next = head->next->left;
			    }
			
			    // ָ������ƶ�
			    head = head->next;
			}
			
			// ȥ��һ�������Ľڵ�
			leftmost = leftmost->left;
		}
			
		return root;
	}
};