//#include "basic.h"
//
///* ��ʽ��ַ��ϣ�� */
//class HashMapChaining {
//public:
//	/* ���췽�� */
//	HashMapChaining() : size(0), capacity(4), loadThres(2.0 / 3.0), extendRatio(2) {
//		buckets.resize(capacity);
//	}
//	/* �������� */
//	~HashMapChaining() {
//		for (auto& bucket : buckets) 
//			for (Pair* pair : bucket) 
//				// �ͷ��ڴ�
//				delete pair;
//	}
//	/* ��ϣ���� */
//	int hashFunc(int key) {
//		return key % capacity;
//	}
//
//	/* �������� */
//	double loadFactor() {
//		return (double)size / (double)capacity;
//	}
//
//	/* ��ѯ���� */
//	std::string get(int key) {
//		int index = hashFunc(key);
//		// ����Ͱ�����ҵ� key ���򷵻ض�Ӧ val
//		for (Pair* pair : buckets[index]) {
//			if (pair->key == key) {
//				return pair->val;
//			}
//		}
//		// ��δ�ҵ� key ���򷵻ؿ��ַ���
//		return "";
//	}
//
//	/* ���Ӳ��� */
//	void put(int key, std::string val) {
//		// ���������ӳ�����ֵʱ��ִ������
//		if (loadFactor() > loadThres) 
//			extend();
//		int index = hashFunc(key);
//		// ����Ͱ��������ָ�� key ������¶�Ӧ val ������
//		for (Pair* pair : buckets[index]) {
//			if (pair->key == key) {
//				pair->val = val;
//				return;
//			}
//		}
//		// ���޸� key ���򽫼�ֵ��������β��
//		buckets[index].push_back(new Pair(key, val));
//		size++;
//	}
//
//	/* ɾ������ */
//	void remove(int key) {
//		int index = hashFunc(key);
//		auto& bucket = buckets[index];
//		// ����Ͱ������ɾ����ֵ��
//		for (int i = 0; i < bucket.size(); i++) {
//			if (bucket[i]->key == key) {
//				Pair* tmp = bucket[i];
//				bucket.erase(bucket.begin() + i); // ����ɾ����ֵ��
//					delete tmp; // �ͷ��ڴ�
//				size--;
//				return;
//			}
//		}
//	}
//
//	/* ���ݹ�ϣ�� */
//	void extend() {
//		// �ݴ�ԭ��ϣ��
//		std::vector<std::vector<Pair*>> bucketsTmp = buckets;
//		// ��ʼ�����ݺ���¹�ϣ��
//		capacity *= extendRatio;
//		buckets.clear();
//		buckets.resize(capacity);
//		size = 0;
//		// ����ֵ�Դ�ԭ��ϣ���������¹�ϣ��
//		for (auto& bucket : bucketsTmp) {
//			for (Pair* pair : bucket) {
//				put(pair->key, pair->val);
//				// �ͷ��ڴ�
//				delete pair;
//			}
//		}
//	}
//
//	/* ��ӡ��ϣ�� */
//	void print() {
//		for (auto& bucket : buckets) {
//			std::cout << "[";
//			for (Pair* pair : bucket) 
//				std::cout << pair->key << " -> " << pair->val << ", ";
//			std::cout << "]\n";
//		}
//	}
//private:
//	int size; // ��ֵ������
//	int capacity; // ��ϣ������
//	double loadThres; // �������ݵĸ���������ֵ
//	int extendRatio; // ���ݱ���
//	std::vector<std::vector<Pair*>> buckets; // Ͱ����
//};