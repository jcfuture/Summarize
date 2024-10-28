//#include <iostream>
//#include <assert.h>
//
//template <typename T>
//struct LinkedNode
//{
//	T data;
//	LinkedNode* next;
//};
//
//template <typename T>
//class LinkedQueue
//{
//public:
//	// ��ʼ������
//	LinkedQueue()
//	{
//		front = rear = new LinkedNode<T>();
//		front->next = nullptr;
//	}
//
//	// �ж϶����Ƿ�Ϊ��
//	bool isEmpty()
//	{
//		return front == rear;
//	}
//
//	// ���
//	void enQueue(T t)
//	{
//		LinkedNode<T>* temp = new LinkedNode<T>();
//		temp->data = t; // ������������н��������
//		temp->next = nullptr; // �����ָ����Ϊ��
//		this->rear->next = temp; // ����ǰβ���ڵ����һ��ָ����Ϊ�²���Ľ��
//		this->rear = temp; // ��β���������Ϊ����ڵ�
//	}
//
//	// ����  
//	bool deQueue(T& t)
//	{
//		if (rear == front)
//		{
//			throw std::out_of_range("����Ϊ��");
//			return false;
//		}
//		LinkedNode<T>* temp = front->next;
//		t = temp->data;
//		front->next = temp->next;
//		if (rear == temp)
//			rear = front;
//		delete temp;
//		return true;
//	}
//private:
//	LinkedNode<T>* front, *rear;
//};
//
//int main()
//{
//	LinkedQueue<int>* queue = new LinkedQueue<int>();
//	queue->enQueue(10);
//	queue->enQueue(12);
//	queue->enQueue(11);
//	int num = 0;
//	queue->deQueue(num);
//	queue->deQueue(num);
//	assert(num == 12);
//	std::cout << num << std::endl;
//	return 0;
//}