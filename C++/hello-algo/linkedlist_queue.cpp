//#include "basic.h"
//
///* ��������ʵ�ֵĶ��� */
//class linkedListQueue
//{
//public:
//	linkedListQueue()
//		: queSize(0), front(nullptr), rear(nullptr)
//	{
//	}
//
//	~linkedListQueue()
//	{
//		// ��������ɾ���ڵ㣬�ͷ��ڴ�
//		freeMemoryLinkedList(front);
//	}
//
//	/* ��ȡ���еĳ��� */
//	int size()
//	{
//		return queSize;
//	}
//
//	/* �ж϶����Ƿ�Ϊ�� */
//	bool isEmpty()
//	{
//		return queSize == 0;
//	}
//
//	/* ��� */
//	void push(int num)
//	{
//		// ��β�ڵ����� num
//		ListNode* node = new ListNode(num);
//		// �������Ϊ�գ�����ͷβ�ڵ㶼ָ��ýڵ�
//		if (!front)
//		{
//			front = node;
//			rear = node;
//		}
//		// ������в�Ϊ�գ��򽫸ýڵ���ӵ�β�ڵ��
//		else
//		{
//			rear->next = node;
//			rear = node;
//		}
//		queSize++;
//	}
//
//	/* ���� */
//	int pop()
//	{
//		int num = peek();
//		// ɾ��ͷ�ڵ�
//		ListNode* tmp = front;
//		front = front->next;
//		// �ͷ��ڴ�
//		delete tmp;
//		queSize--;
//		return num;
//	}
//
//	/* ���ʶ���Ԫ�� */
//	int peek()
//	{
//		if (size() == 0)
//			std::cout << "����Ϊ��" << std::endl;
//		return front->val;
//	}
//
//	/* ������ת��Ϊ vector ������ */
//	std::vector<int> toVector()
//	{
//		ListNode* node = front;
//		std::vector<int> res(size());
//		for (int i = 0; i < res.size(); i++)
//		{
//			res[i] = node->val;
//			node = node->next;
//		}
//		return res;
//	}
//private:
//	ListNode* front, *rear; // ͷ�ڵ� front�� β�ڵ� rear
//	int queSize;
//};