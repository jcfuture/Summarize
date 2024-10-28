//#include <iostream>
//#include <vector>
//
///* ����ڵ�ṹ�� */
//struct ListNode
//{
//	int val;								   // �ڵ�ֵ
//	ListNode* next;							   // ָ����һ�ڵ��ָ��
//	ListNode(int x) : val(x), next(nullptr) {} // ���캯��
//};
//
///* ��������ʵ�ֵ�ջ */
//class LinkedListStack
//{
//public:
//	LinkedListStack()
//	{
//		stackTop = nullptr;
//		stkSize = 0;
//	}
//
//	~LinkedListStack()
//	{
//		// ��������ɾ���ڵ㣬�ͷ��ڴ�
//		freeMemoryLinkedList(stackTop);
//	}
//
//	/* ��ȡջ�ĳ��� */
//	int size()
//	{
//		return stkSize;
//	}
//
//	/* �ж�ջ�Ƿ�Ϊ�� */
//	bool isEmpty()
//	{
//		return size() == 0;
//	}
//
//	/* ��ջ */
//	void push(int num)
//	{
//		ListNode* node = new ListNode(num);
//		node->next = stackTop;
//		stackTop = node;
//		stkSize++;
//	}
//
//	/* ��ջ */
//	int pop()
//	{
//		int num = top();
//		ListNode* tmp = stackTop;
//		stackTop = stackTop->next;
//		// �ͷ��ڴ�
//		delete tmp;
//		stkSize--;
//		return num;
//	}
//
//	/* ����ջ��Ԫ�� */
//	int top()
//	{
//		if (isEmpty())
//			std::cout << "ջΪ��" << std::endl;
//		return stackTop->val;
//	}
//
//	/* �� List ת��Ϊ Array ������ */
//	std::vector<int> toVector()
//	{
//		ListNode* node = stackTop;
//		std::vector<int> res(size());
//		for (int i = res.size() - 1; i >= 0; i--)
//		{
//			res[i] = node->val;
//			node = node->next;
//		}
//		return res;
//	}
//private:
//	ListNode* stackTop; // ��ͷ�ڵ���Ϊջ��
//	int stkSize; // ջ�ĳ���
//
//	inline void freeMemoryLinkedList(ListNode* node)
//	{
//		while (node)
//		{
//			ListNode* temp = node;
//			node = node->next;
//			delete temp;
//		}
//	}
//};