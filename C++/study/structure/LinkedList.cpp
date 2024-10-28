//#include <iostream>
//#include <exception>
//
//template <class T>
//struct LNode
//{
//	T data;
//	LNode<T>* next;
//};
//
//// ��ʼ��
//template <class T>
//void listInit(LNode<T>* head)
//{
//	head = new LNode<T>();
//	head->data = 0;
//	head->next = nullptr;
//}
//
//// ����ĳ���
//template <class T>
//int listLength(LNode<T> head)
//{
//	int length = 0;
//	while (head)
//	{
//		head = head->next;
//		length++;
//	}
//	return length;
//}
//
//// ɾ�������ָ��λ��Ԫ��
//template <class T>
//bool listDelete(LNode<T>& head, int i, T& t)
//{
//	// ����һ���½ڵ㣬ָ��ǰͷ�ڵ�
//	LNode<T>* cur = head;
//	int j = 0; // ��¼��ǰλ�ã�ͷ�ڵ��ǵ� 0 ��λ
//	while (cur && j < i - 1) // ѭ���ҵ��� i - 1 �����
//	{
//		cur = cur->next;
//		j++;
//	}
//	if (!cur || !cur->next) // i ֵ���Ϸ�
//		return false;
//	LNode<T>* temp = cur->next; // ����ʱ�ڵ�ָ��ɾ�����
//	t = temp->data; // ��ɾ���Ľ�����ݵ���
//	cur->next = temp->next; // �Ͽ�ɾ������������
//	delete temp; // �ͷű�ɾ���ڵ�Ŀռ�ռ��
//	return true;
//}
//
//// ����Ų��ҽ��
//template <class T>
//LNode<T>* getElement(LNode<T> head, int i)
//{
//	// ����ָ��ָ��ǰ���
//	LNode<T>* cur = head;
//	// ��¼��ǰλ�ã�ͷ�ڵ�����Ϊ 0 ��
//	int j = 0;
//	while (head && j < i) // ѭ���ҵ��� i �����
//	{
//		cur = cur->next; // ����ǰ�ڵ�һֱ����ƶ�
//		j++;
//	}
//	return cur;
//}
//
//// ��ֵ���ҽ��
//template <class T>
//LNode<T>* getLocateElement(LNode<T> head, T t)
//{
//	// ����һ��ָ��ǰ�ڵ�Ľ��
//	LNode<T>* cur = head; // Ϊ�˷�ֱֹ�ӵĲ���ԭʼͷ��ַ��������ݶ�ʧ
//	while (cur && cur->data != t) // ѭ�����ң������Ϊ�գ����ߵ�ǰ����е�Ԫ����Ҫ�ҵĽ���ѭ��
//		cur = cur->next;
//	// ���˳�ѭ��ʱ���������
//	// 1�����Ϊ��
//	if (!cur) return nullptr;
//	// 2���ҵ�ֵ��ȵĽ��
//	if (cur->data == t) return cur;
//}
//
//// �ڵ� i ��λ���ϲ���ڵ�
//template <class T>
//void insertList(LNode<T>& head, int i, T t)
//{
//	// ����һ����ʱָ��ָ��ǰ���
//	LNode<T>* cur = head;
//	int j = 0; // ��Ϊ�����д���ͷ�ڵ㣬��ͷ�ڵ��ǵ� 0 λ
//	while (cur && j < i - 1) // ѭ���ҵ��� i - 1 ����㲢���ƶ��󣬽�㲻Ϊ��
//	{
//		cur = cur->next;
//		j++;
//	}
//	if (!cur) // ������Ϊ�գ���˵�� i ֵ���Ϸ�
//		throw std::invalid_argument("i ֵ�Ƿ�");
//	// ����һ���½ڵ㣬������뵽��ǰ���
//	LNode<T>* temp = new LNode<T>(t);
//	// ���½ڵ����һ��ָ���Ϊ��ǰ��ǰ�ڵ����һ������ַ
//	temp->next = cur->next;
//	// ����ǰ�ڵ��ָ��ָ���²���Ľ��
//	cur->next = temp;
//}
//
//// ͷ�巨���������� (���򴴽�)
//template <class T>
//LNode<T>* listHeadInsert(LNode<T>* head, T* nums, int j)
//{
//	// ����ͷ�ڵ�
//	head = new LNode<T>();
//	// ��ͷ����ָ����Ϊ��
//	head->next = nullptr;
//	// ѭ������ T ���飬��ӽ��
//	for (int i = 0; i < j; i++)
//	{
//		// ����Ҫ������
//		LNode<T>* temp = new LNode<T>();
//		temp->data = nums[i]; // �������е�Ԫ�ظ�ֵ���ڵ��������
//		temp->next = head->next; // ���´����Ľ�����һ��ָ������Ϊͷ������һ��ָ��
//		head->next = temp; // ��ͷ������һ�����ĵ�ַ����Ϊ�²���Ľ��
//	}
//	return head;
//}
//
//// β�巨���������� (���򴴽�)
//template <class T>
//LNode<T>* listTailInsert(LNode<T>* head, T* nums)
//{
//	// ����ͷ�ڵ�
//	head = new LNode<T>();
//	// ���ñ�βָ��
//	LNode<T>* rear = new LNode<T>();
//	// �������鳤��
//	int length = sizeof(nums) / sizeof(nums[0]);
//	// ѭ������ T ���飬��ӽ��
//	for (int i = 0; i < length; i++)
//	{
//		// ����Ҫ������
//		LNode<T>* temp = new LNode<T>();
//		temp->data = nums[i]; // �������е�Ԫ�ظ�ֵ���ڵ��������
//		rear->next = temp; // ��βָ�����һ����ַ����Ϊ�²���Ľ��
//		rear = temp; // ��βָ������Ϊ�²���Ľ��
//	}
//	return head;
//}
//
//int main()
//{
//	LNode<int>* head = new LNode<int>();
//	listInit(head);
//	int* nums = new int[4];
//	nums[0] = 1;
//	nums[1] = 2;
//	nums[2] = 3;
//	nums[3] = 4;
//	head = listHeadInsert(head, nums, 4);
//	while (head->next != nullptr)
//	{
//		head = head->next;
//		std::cout << head->data << " ";
//	}
//
//	return 0;
//}