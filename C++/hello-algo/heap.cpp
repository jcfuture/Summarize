//#include "basic.h"
//
//int main1()
//{
//	// ��ʼ����
//	// ��ʼ��С����
//	std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
//	// ��ʼ���󶥶�
//	std::priority_queue<int, std::vector<int>, std::less<int>> maxHeap;
//
//	// Ԫ�����
//	maxHeap.push(1);
//	maxHeap.push(3);
//	maxHeap.push(2);
//	maxHeap.push(5);
//	maxHeap.push(4);
//
//	// ��ȡ�Ѷ�Ԫ��
//	int peek = maxHeap.top(); // 5
//
//	// �Ѷ�Ԫ�س���
//	// ����Ԫ�ػ��γ�һ���Ӵ�С������
//	maxHeap.pop(); // 5
//	maxHeap.pop(); // 4
//	maxHeap.pop(); // 3
//	maxHeap.pop(); // 2
//	maxHeap.pop(); // 1
//
//	// ��ȡ�Ѵ�С
//	int size = maxHeap.size();
//
//	// �ж϶��Ƿ�Ϊ��
//	bool isEmpty = maxHeap.empty();
//
//	// �����б�����
//	std::vector<int> input{ 1, 3, 2, 5, 4 };
//	std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap(input.begin(), input.end());
//	return 0;
//}