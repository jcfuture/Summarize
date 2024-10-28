//#include <iostream>
//#include <exception>
//
//template <class T>
//class ArrayList
//{
//public:
//	// ��ʼ������˳���
//	void arrayListInit(int maxLength = 100)
//	{
//		arrs = new T[maxLength]; // ���������� ����Ϊ maxLength ��Ĭ��Ϊ 100 ��
//		length = maxLength; // ˳������֧�ֳ���
//		size = 0; // ˳�����Ԫ�ظ���
//	}
//
//	// ����ָ��Ԫ��
//	bool findElement(T arr)
//	{
//		// ����˳����е�Ԫ�ظ������б������ң����Է�ֹ�������ÿռ�
//		for (int i = 0; i < size; i++)
//			if (arrs[i] == arr) // ����ǰ˳���Ԫ�ص����ݵ���������Ҫ���ҵģ�ֱ�ӷ��� true
//				return true;
//		// ����ʧ�� ���� false
//		return false;
//	}
//
//	// ��ȡָ��λ�õ�Ԫ��
//	T findLocalElement(int index)
//	{
//		// �ж�ָ��λ���Ƿ�Ϸ�
//		if (index < 0 || index >= length)
//			throw std::invalid_argument("����λ�ò�����");
//		// ���򷵻�����
//		return arrs[index];
//	}
//
//	// ��˳���β����������
//	void inElementOnBack(T arr)
//	{
//		if (size + 1 >= length)
//			// ����˳���
//			extendListLength();
//		// �� size ��λ���ϲ���Ԫ��
//		arrs[size] = arr;
//		// Ԫ�ظ����䳤
//		size++;
//	}
//
//	// ��ָ��λ�������Ԫ��
//	void inElementLocal(int index, T arr)
//	{
//		// �ж����λ���Ƿ�Ƿ�
//		if (index < 0) throw std::invalid_argument("�����Ƿ�");
//		// ������λ�ó���˳�����󳤶ȣ����������˳���
//		if (index > length) extendListLength();
//		// ������δ ����������Ԫ�ص�ָ��λ��
//		// ���Ƚ�ָ��λ�õ�Ԫ���Լ���󲿷ֵ�Ԫ�ؾ�����ƶ�һλ
//		for (int i = size - 1; i >= index; i--)
//			arrs[i + 1] = arrs[i];
//		arrs[index] = arr;
//		// Ԫ������ �� 1
//		size++;
//	}
//
//	// ɾ��ָ��Ԫ��
//	void eraseFixtureElement(T arr)
//	{
//		// ѭ������˳����ҵ���Ҫɾ�����ݣ�����ɾ�������ƶ�Ԫ��
//		for (int i = 0; i < length; i++)
//			if (arrs[i] == arr) eraseIndexElement(i);
//	}
//
//	// ɾ��Ԫ��
//	void eraseIndexElement(int index)
//	{
//		// �ж�˳������Ƿ�Ϸ�
//		if (index < 0 || index >= length) throw std::invalid_argument("ɾ�������Ƿ�");
//		// ɾ��ָ������λ�õ�Ԫ��
//		for (int i = index; i < length; i++)
//			arrs[i] = arrs[i + 1];
//		size--;
//	}
//
//	// ɾ��ȫ��Ԫ��
//	void erase()
//	{
//		arrs = new T[length];
//		size = 0;
//	}
//
//	// ��չ˳���
//	void extendListLength()
//	{
//		// ����������˳���
//		T* extendArrs = new T[length * 2];
//		// ��ԭ��˳����е�Ԫ�ظ��Ƶ���˳�����
//		for (int i = 0; i < length; i++)
//			extendArrs[i] = arrs[i]; // ����Ԫ��
//		// ����˳�����
//		arrs = extendArrs;
//		// ���ռ�ÿռ�
//		delete[] extendArrs;
//	}
//
//	// ˳����Ƿ�Ϊ��
//	bool isEmpty()
//	{
//		return size == 0;
//	}
//
//	// ����˳���Ԫ�ظ���
//	int sizeElement()
//	{
//		return size;
//	}
//
//	// ����Ԫ�ش�С
//	long long listSize()
//	{
//		return (long long)(sizeof(arrs) * size);
//	}
//
//private:
//	T* arrs; // ˳����е�Ԫ��
//	int length, size; // ˳���ĳ��Ⱥͱ���Ԫ�ظ���
//};
//
//int main()
//{
//	ArrayList<int>* list = new ArrayList<int>();
//	list->arrayListInit();
//	list->inElementLocal(0, 1);
//	list->inElementLocal(0, 2);
//	list->inElementLocal(0, 3);
//	list->inElementLocal(0, 4);
//	list->inElementLocal(0, 5);
//	std::cout << list->sizeElement() << std::endl;
//	std::cout << list->listSize() << std::endl;
//	list->eraseFixtureElement(1);
//	std::cout << list->sizeElement() << std::endl;
//	std::cout << list->listSize() << std::endl;
//	list->erase();
//	std::cout << list->sizeElement() << std::endl;
//	std::cout << list->listSize() << std::endl;
//	return 0;
//}