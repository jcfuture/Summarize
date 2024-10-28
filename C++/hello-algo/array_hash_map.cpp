//#include "basic.h"
//
//class ArrayHashMap
//{
//public:
//	ArrayHashMap()
//		:buckets(std::vector<Pair*>(100))
//	{
//	}
//
//	~ArrayHashMap()
//	{
//		// �ͷ��ڴ�
//		for (const auto& bucket : buckets)
//			delete bucket;
//		buckets.clear();
//	}
//
//	// ��ϣ����
//	int hashFunc(int key)
//	{
//		return key % 100;
//	}
//
//	// ��ѯ����
//	std::string get(int key)
//	{
//		int index = hashFunc(key);
//		Pair* pair = buckets[index];
//		if (pair == nullptr) return "";
//		return pair->val;
//	}
//
//	// ��Ӳ���
//	void put(int key, std::string val)
//	{
//		Pair* pair = new Pair(key, val);
//		buckets[hashFunc(key)] = pair;
//	}
//
//	// ɾ������
//	void remove(int key)
//	{
//		int index = hashFunc(key);
//		// �ͷ��ڴ沢��Ϊ nullptr
//		delete buckets[index];
//		buckets[index] = nullptr;
//	}
//
//	// ��ȡ���м�ֵ��
//	std::vector<Pair*> pairSet()
//	{
//		std::vector<Pair*> pairSet;
//		for (Pair* pair : buckets)
//			if (pair != nullptr) pairSet.push_back(pair);
//		return pairSet;
//	}
//
//	// ��ȡ���м�
//	std::vector<int> keySet()
//	{
//		std::vector<int> keySet;
//		for (auto* pair : buckets)
//			if (pair != nullptr)
//				keySet.push_back(pair->key);
//		return keySet;
//	}
//
//	// ��ȡ����ֵ
//	std::vector<std::string> valueSet()
//	{
//		std::vector<std::string> valueSet;
//		for (auto* pair : buckets)
//			if (pair != nullptr)
//				valueSet.push_back(pair->val);
//		return valueSet;
//	}
//
//	// ��ӡ��ϣ��
//	void print()
//	{
//		for (auto* key : pairSet())
//		{
//			std::cout << key->key << " -> " << key->val << std::endl;
//		}
//	}
//private:
//	std::vector<Pair*> buckets;
//};
