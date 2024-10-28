//#include "basic.h"
//
//// �ӷ���ϣ
//int addHash(std::string key)
//{
//	long long hash = 0;
//	const int MODULES = 1000000007;
//	for (unsigned char c : key)
//		hash = (hash + (int)c) % MODULES;
//	return (int)hash;
//}
//
//// �˷���ϣ
//int mulHash(std::string key)
//{
//	long long hash = 0;
//	const int MODULES = 1000000007;
//	for (unsigned char c : key)
//		hash = (31 * hash + (int)c) % MODULES;
//	return (int)hash;
//}
//
//// ����ϣ
//int xorHash(std::string key)
//{
//	long long hash = 0;
//	const int MODULES = 1000000007;
//	for (unsigned char c : key)
//		hash ^= (int)c;
//	return hash & MODULES;
//}
//
//// ��ת��ϣ
//int rotHash(std::string key)
//{
//	long long hash = 0;
//	const int MODULES = 1000000007;
//	for (unsigned char c : key)
//		hash = ((hash << 4) ^ (hash >> 28) ^ (int)c) % MODULES;
//	return (int)hash;
//}