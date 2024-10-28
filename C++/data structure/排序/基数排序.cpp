//#include <iostream>
//#include "structs.h"
//
//#define MAXNUM_KEY 8 // �ؼ������������ֵ
//#define RADIX 10 // �ؼ��ֻ�������ʱ������ʮ��������
//#define MAX_SPACE 10000
//
//typedef struct
//{
//	KeyType keys[MAXNUM_KEY]; // �ؼ���
//	InfoType otherinfo; // ����������
//	int next;
//}SLCell;
//
//typedef struct // ��̬����Ľڵ�����
//{
//	SLCell r[MAX_SPACE]; // ��̬����Ŀ����ÿռ䣬r[0]Ϊͷ�ڵ�
//	int keynum; // ��¼�ĵ�ǰ�ؼ��ָ���
//	int recnum; // ��̬����ĵ�ǰ����
//}SLList; // ��̬��������
//
//typedef int ArrType[RADIX]; // ��������
//
////void Distribute(SLCell& r, int i, ArrType& f, ArrType& e)
////{
////	// ��̬����L��r���м�¼�Ѱ���keys[0], .. keys[i - 1]����
////	// ����i���ؼ���keys[i]����RADIX���ӱ�ʹͬһ���ӱ��м�¼��keys[i]��ͬ
////	// f[0..RADIX-1] ��e[0..RADIX-1]�ֱ�ָ����ӱ��е�һ�������һ����¼
////	for (int j = 0; j < RADIX; j++) f[j] = 0; // ���ӱ��ʼ��Ϊ�ձ�
////	for (int p = r[0].next; p; p = r[p].next)
////	{
////		int j = ord(r[p].keys[i]); // ord����¼�е�i���ؼ���ӳ�䵽[o..RADIX-1]
////		if (!f[j]) f[j] = p;
////		else r[e[j]].next = p;
////		e[j] = p; // ��p��ָ�Ľڵ�����j���ӱ���
////	} // for
////}
//
////void Collect(SLCell& r, int i, ArrType f, ArrType e)
////{
////	// ��keys[i] ��С����Ľ�f[0..RADIX-1]��ָ���ӱ��������ӳ�һ������
////	// e[0.��RADIX-1]Ϊ���ӱ��βָ��
////	int j = 0;
////	for (; !f[j]; j++) j = succ(j); // �ҵ�һ���ǿ��ӱ�,succ()Ϊ���̺���
////	r[0].next = f[j]; t = e[j]; //r[0].nextָ���һ���ǿ��ӱ��е�һ���ڵ�
////	while (j < RADIX)
////	{
////		for (j = succ(j); j < RADIX - 1 && !f[j]; j = succ(j)); // �ҵ�ϣ��һ���ǿ��ӱ�
////		if (f[j]) { // ���������ǿ��ӱ�
////			r[t].next = f[j];
////			t = e[j];
////		}
////	}// while
////	r[t].next = 0; // tָ�����һ���ǿ��ӱ��е����һ���ڵ�
////}
//
////void RadixSort(SLList& L)
////{
////	// L�ǲ��þ�̬�����ʾ��˳���
////	// ��L���л�������ʹ��L��Ϊ���ؼ�����С���������̬����L.r[0]Ϊͷ�ڵ�
////	for (int i = 0; i < L.recnum; i++) L.r[i].next = i + 1; 
////	L.r[L.recnum].next = 0; // ��L����Ϊ��̬����
////	for (int i = 0; i < L.keynum; i++) // �����λ���ȶԸ��ؼ��ֽ��з�����ռ�
////	{
////		Distribute(L, r, i, f, e); // ��i�˷���
////		Collect(L, r, i, f, e); // ��i���ռ�
////	} // for
////}
//
