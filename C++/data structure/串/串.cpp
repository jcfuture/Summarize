//#include <iostream>
//
//#define MAXLEN 255 // ������󳤶�
//
//// ���Ķ���˳��洢�ṹ
//typedef struct
//{
//	char ch[MAXLEN]; // �洢����һά����
//	int length; // ���ĵ�ǰ����
//}SString;
//
//// ���Ķ�ʽ˳��洢�ṹ
//typedef struct
//{
//	char* ch; //���Ƿǿմ����򰴴�������洢��������chΪNULL
//	int length; // ���ĵ�ǰ����
//}HString;
//
//// ������ʽ�洢�ṹ
//#define CHUNKSIZE 80 // �����û�����Ŀ��С
//typedef struct Chunk
//{
//	char ch[CHUNKSIZE];
//	struct Chunk* next;
//}Chunk;
//
//typedef struct
//{
//	Chunk* head, * tail; // ����ͷ��βָ��
//	int length; // ���ĵ�ǰ����
//}LString;
//
//// BF�㷨
//int Index_BF(SString S, SString T, int pos)
//{
//	// ����ģʽT������S�е�pos���ַ���ʼ��һ�γ��ֵ�λ�á��������ڣ��򷵻�0
//	// ���У�T�ǿգ�1<= pos < S.length
//	int i = pos, j = 1; // ��ʼ��
//	while (i <= S.length && j <= T.length) // ��������δ�Ƚϵ���β
//	{
//		if (S.ch[i] == T.ch[j]) { //�����ȽϺ���ַ�
//			++i;
//			++j;
//		}
//		else
//		{
//			i = i - j + 2; // ָ����ˣ����¿�ʼƥ��
//			j = 1;
//		}
//	}
//	if (j > T.length) return i - T.length; // ƥ��ɹ�
//	else return 0; // ƥ��ʧ��
//}