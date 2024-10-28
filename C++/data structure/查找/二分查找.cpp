//#include <iostream>
//#include <string>
//
//typedef int KeyType;
//typedef std::string InfoType;
//
//typedef struct
//{
//	KeyType key; // �ؼ�����
//	InfoType otherinfo; // ������ 
//}ElemType;
//
//typedef struct
//{
//	ElemType* R; // �洢�ռ����ַ
//	int length; // ��ǰ����
//}SSTable;
//
//int Search_Bin(SSTable ST, KeyType key)
//{
//	// �������ST���۰������ؼ��ֵ���key������Ԫ�ء����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0
//	int low = 1, high = ST.length; // �ò��������ֵ
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (key == ST.R[mid].key) return mid; // �ҵ�����Ԫ��
//		else if (key < ST.R[mid].key) high = mid - 1; // ������ǰһ�ӱ���в���
//		else low = mid + 1; // �����ں�һ�ӱ���в���
//	}
//
//	return 0;
//}