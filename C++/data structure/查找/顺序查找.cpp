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
////int Search_Seq(SSTable ST , KeyType key)
////{
////	// ��˳���ST��˳�������ؼ��ֵ���key������Ԫ�ء����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0
////	for (int i = ST.length; i >= 1; i--)
////		if (ST.R[i].key == key) return i; // �Ӻ���ǰ����
////	return 0;
////}
//
////int Search_Seq(SSTable ST, KeyType key)
////{
////	// ��˳���ST��˳�������ؼ��ֵ���key������Ԫ�أ����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�������Ϊ0
////	ST.R[0].key = key; // �������ڡ�
////	for (int i = ST.length; ST.R[i].key != key; i--) // �Ӻ���ǰ��
////		return i;
////}