//#include "basic.h"
//
//// ����Ѱַ��ϣ��
//class HashMapOpenAddressing
//{
//public:
//	// ���췽��
//	HashMapOpenAddressing() :size(0), buckets(capacity, nullptr) {}
//
//	// ��������
//	~HashMapOpenAddressing()
//	{
//		for (Pair* pair : buckets)
//			if (pair != nullptr && pair != TOMBSTONE)
//				delete pair;
//		delete TOMBSTONE;
//	}
//
//	// ��ϣ����
//	int hashFunc(int key)
//	{
//		return key % capacity;
//	}
//
//	// ��������
//	double loadFactor()
//	{
//		return (double)size / capacity;
//	}
//
//	// ��ѯ
//	std::string get(int key)
//	{
//		// ���� key ��Ӧ��Ͱ����
//		int index = findBucket(key);
//		// ���ҵ���ֵ�ԣ��򷵻ض�Ӧ val
//		if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
//			return buckets[index]->val;
//		// ����ֵ�Բ����ڣ��򷵻ؿ��ַ���
//		return "";
//	}
//	
//	// ���
//	void put(int key, std::string val)
//	{
//		// ���������ӳ�����ֵ��ִ������
//		if (loadFactor() > loadThres)
//			extend();
//		// ���� key ��Ӧ��Ͱ����
//		int index = findBucket(key);
//		// ���ҵ���ֵ�ԣ��򸲸� val ������
//		if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
//		{
//			buckets[index]->val = val;
//			return;
//		}
//		// ����ֵ�Բ����ڣ�����Ӹü�ֵ��
//		buckets[index] = new Pair(key, val);
//		size++;
//	}
//
//	// ���� key ��Ӧ��Ͱ����
//	int findBucket(int key)
//	{
//		int index = hashFunc(key);
//		int firstTombstone = -1;
//		// ����̽�⣬��������Ͱʱ����
//		while (buckets[index] != nullptr)
//		{
//			// ������ key�����ض�Ӧ��Ͱ����
//			if (buckets[index]->key == key)
//			{
//				// ��֮ǰ������ɾ����ǣ��򽫼�ֵ���ƶ�����������
//				if (firstTombstone == -1)
//				{
//					buckets[firstTombstone] = buckets[index];
//					buckets[index] = TOMBSTONE;
//					return firstTombstone; // �����ƶ����Ͱ����
//				}
//				return index; // ����Ͱ����
//			}
//			// ��¼�������׸�ɾ�����
//			if (firstTombstone == -1 && buckets[index] == TOMBSTONE)
//				firstTombstone = index;
//			// ����Ͱ������Խ��β���򷵻�ͷ��
//			index = (index + 1) % capacity;
//		}
//		// �� key �����ڣ��򷵻���ӵ������
//		return firstTombstone == -1 ? index : firstTombstone;
//	}
//
//	// ɾ��
//	void remove(int key)
//	{
//		// ���� key ��Ӧ��Ͱ����
//		int index = findBucket(key);
//		// ���ҵ���ֵ�ԣ�����ɾ����Ǹ�����
//		if (buckets[index] != nullptr && buckets[index] != TOMBSTONE)
//		{
//			delete buckets[index];
//			buckets[index] = TOMBSTONE;
//			size--;
//		}
//	}
//
//	// ���ݹ�ϣ��
//	void extend()
//	{
//		// �ݴ�ԭʼ��ϣ��
//		std::vector<Pair*> bucketsTmp = buckets;
//		// ��ʼ�����ݺ���¹�ϣ��
//		capacity *= extendRatio;
//		buckets = std::vector<Pair*>(capacity, nullptr);
//		size = 0;
//		// ����ֵ�Դ�ԭ��ϣ��������¹�ϣ��
//		for(auto* pair : bucketsTmp)
//			if (pair != nullptr && pair != TOMBSTONE)
//			{
//				put(pair->key, pair->val);
//				delete pair;
//			}
//	}
//
//	// ��ӡ��ϣ��
//	void print()
//	{
//		for (auto* pair : buckets)
//		{
//			if (pair == nullptr)
//				std::cout << "nullptr" << std::endl;
//			else if (pair == TOMBSTONE)
//				std::cout << "TOMBSTONE" << std::endl;
//			else
//				std::cout << pair->key << " -> " << pair->val << std::endl;
//		}
//	}
//private:
//	int size; // ��ֵ������
//	int capacity = 4; // ��ϣ������
//	const double loadThres = 2.0 / 3.0; // �������ݵĸ���������ֵ
//	const int extendRatio = 2; // ���ݱ���
//	std::vector<Pair*> buckets; // Ͱ����
//	Pair* TOMBSTONE = new Pair(-1, "-1"); // ɾ�����
//};