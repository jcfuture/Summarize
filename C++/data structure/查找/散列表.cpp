//#include <iostream>
//#include <string>
//
//#define m 20 // ɢ�б�ı�
//#define NULLKEY 0 // ��λΪ�յı��
//
//typedef int KeyType;
//typedef std::string InfoType;
//
//typedef struct
//{
//	KeyType key; // �ؼ�����
//	InfoType otherinfo; //����������
//}HashTable[m];
//
//int SearchHash(HashTable HT, KeyType key)
//{
//	// ��ɢ�б�HT�в��ҹؼ���Ϊkey��Ԫ�أ������ҳɹ�������ɢ�б�ĵ�Ԫ��ţ����򷵻�-1
//	H0 = H(key); // ����ɢ�к���H(key)����ɢ�е�ַ
//	if (HT[H0].key == NULLKEY) return -1; // ����ԪH0Ϊ�գ�������Ԫ�ز�����
//	else if (HT[H0].key == key) return H0; // ����ԪH0��Ԫ�صĹؼ���Ϊkey������ҳɹ�
//	else
//	{
//		for (int i = 1; i < m; i++)
//		{
//			Hi = (H0 + 1) % m; // �������Ա�̽�ⷨ������һ��ɢ�е�ַHi
//			if (HT[Hi].key == NULLKEY) return -1; // ����ԪHiΪ�գ�������Ԫ�ز�����
//			else if (HT[Hi].key == key) return Hi; // ����ԪHi��Ԫ�صĹؼ���Ϊkey������ҳɹ�
//		} // for
//	} // else
//}