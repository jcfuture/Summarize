//#include "basic.h"
//
//class MaxHeap
//{
//public:
//	// ���췽�������������б���
//	MaxHeap(std::vector<int> nums)
//	{
//		// ����Ԫ��ԭ�ⲻ����ӽ���
//		maxHeap = nums;
//		// �ѻ���Ҷ�ڵ�������������нڵ�
//		for (int i = parent(size() - 1); i >= 0; i--)
//			siftDown(i);
//	}
//
//	// ��ȡ���ӽڵ������
//	int left(int i)
//	{
//		return 2 * i + 1;
//	}
//
//	// ��ȡ���ӽڵ������
//	int right(int i)
//	{
//		return 2 * i + 2;
//	}
//
//	// ��ȡ���ڵ������
//	int parent(int i)
//	{
//		return (i - 1) / 2; // ��������
//	}
//
//	// ��ȡ�Ѷ�Ԫ��
//	int peek()
//	{
//		return maxHeap[0];
//	}
//
//	int size()
//	{
//		return maxHeap.size();
//	}
//
//	bool isEmpty()
//	{
//		return size() == 0;
//	}
//
//	// Ԫ�����
//	void push(int val)
//	{
//		// ��ӽڵ�
//		maxHeap.push_back(val);
//		// �ӵ������ѻ�
//		siftUp(size() - 1);
//	}
//
//	// �ӽڵ� i ��ʼ���ӵ������ѻ�
//	void siftUp(int i)
//	{
//		while (true)
//		{
//			// ��ȡ�ڵ� i �ĸ��ڵ�
//			int p = parent(i);
//			// �� ��Խ�����ڵ㡱 �� ���ڵ������޸��� ʱ�������ѻ�
//			if (p < 0 || maxHeap[i] <= maxHeap[p])
//				break;
//			// ��������
//			std::swap(maxHeap[i], maxHeap[p]);
//			// ѭ�����϶ѻ�
//			i = p;
//		}
//	}
//
//	// Ԫ�س���
//	void pop()
//	{
//		// �пմ���
//		if (isEmpty())
//			std::cout << "��Ϊ��" << std::endl;
//		// �������ڵ�������Ҷ�ڵ㣨������Ԫ����βԪ�أ�
//		std::swap(maxHeap[0], maxHeap[size() - 1]);
//		// ɾ���ڵ�
//		maxHeap.pop_back();
//		// �Ӷ����׶ѻ�
//		siftDown(0);
//	}
//
//	// �ӽڵ� i ��ʼ���Ӷ����׶ѻ�
//	void siftDown(int i)
//	{
//		while (true)
//		{
//			// �жϽڵ� i�� l��r ��ֵ���Ľڵ㣬��Ϊ ma
//			int l = left(i), r = right(i), ma = i;
//			if (l < size() && maxHeap[l] > maxHeap[ma])
//				ma = l;
//			if (l < size() && maxHeap[r] > maxHeap[ma])
//				ma = r;
//			// ���ڵ� i �������� l��r Խ�磬����������ѻ�������
//			if (ma == i)
//				break;
//			std::swap(maxHeap[i], maxHeap[ma]);
//			// ѭ�����¶ѻ�
//			i = ma;
//		}
//	}
//private:
//	std::vector<int> maxHeap;
//};