//#include <iostream>
//#include <assert.h>
//
//#define maxSize 50
//
//template <class T>
//class ArrayQueue
//{
//public:
//	// ��ʼ��
//	ArrayQueue() : front(0), rear(0) {}
//
//	// �ӿ�
//	bool isEmpty()
//	{
//		return rear == front;
//	}
//
//	// ���
//	bool enQueue(T t)
//	{
//		if ((front + 1) % maxSize == front)
//		{
//			throw std::out_of_range("����");
//			return false;
//		}
//		data[rear] = t;
//		rear = (rear + 1) % maxSize;
//		return true;
//	}
//
//	// ����
//	bool deQueue(T& t)
//	{
//		if (rear == front)
//		{
//			throw std::out_of_range("�ӿ�");
//			return false;
//		}
//		t = data[front];
//		front = (front + 1) % maxSize;
//		return true;
//	}
//private:
//	T data[maxSize];
//	int front, rear;
//};
//
//int main()
//{
//	ArrayQueue<int>* queue = new ArrayQueue<int>();
//	queue->enQueue(10);
//	queue->enQueue(12);
//	queue->enQueue(11);
//	int num = 0;
//	queue->deQueue(num);
//	assert(num == 10);
//	std::cout << num << std::endl;
//	return 0;
//}