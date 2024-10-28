//#include "basic.h"
//
///* ���ڻ�������ʵ�ֵĶ��� */
//class ArrayQueue
//{
//public:
//	ArrayQueue(int capacity)
//		: nums(new int[capacity]), front(0), queSize(0), queCapacity(capacity)
//	{
//	}
//
//	~ArrayQueue()
//	{
//		delete[] nums;
//	}
//
//	/* ��ȡ���е����� */
//	int capacity()
//	{
//		return queCapacity;
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
//		return size() == 0;
//	}
//
//	/* ��� */
//	void push(int num)
//	{
//		if (queCapacity == queSize)
//		{
//			std::cout << "��������" << std::endl;
//			return;
//		}
//		// �����βָ�룬ָ���β���� + 1
//		// ͨ��ȡ�����ʵ�� rear Խ������β����ص�ͷ��
//		int rear = (front + rear) % queCapacity;
//		// �� num �������β
//		nums[rear] = num;
//		queSize++;
//	}
//
//	/* ���� */
//	int pop()
//	{
//		int num = peek();
//		// ����ָ������ƶ�һλ����Խ��β�����򷵻ص�����ͷ��
//		front = (front + 1) % queCapacity;
//		queSize--;
//		return num;
//	}
//
//	/* ���ʶ���Ԫ�� */
//	int peek()
//	{
//		if (isEmpty())
//			std::cout << "����Ϊ��" << std::endl;
//		return nums[front];
//	}
//
//	/* ������ת��Ϊ vector ������ */
//	std::vector<int> toVector()
//	{
//		// ��ת����Ч���ȷ�Χ�ڵ��б�Ԫ��
//		std::vector<int> arr(queSize);
//		for (int i = 0, j = front; i < queSize; i++, j++)
//		{
//			arr[i] = nums[j % queCapacity];
//		}
//		return arr;
//	}
//private:
//	int* nums; // ���ڴ洢����Ԫ�ص�����
//	int front; // ����ָ�룬ָ�����Ԫ��
//	int queSize; // ���г���
//	int queCapacity; // ��������
//};