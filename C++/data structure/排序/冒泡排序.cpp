//#include "structs.h"
//
//void BubbleSort(SqList& L)
//{
//	int m = L.length - 1, flag = 1; // flag�������ĳһ�������Ƿ�������
//	while (m > 0 && flag == 1)
//	{
//		flag= 0; //flag��Ϊ0�������������û�з����������򲻻�ִ����һ������
//		int j = 0;
//		for(j = 1;j<= m; j ++)
//			if (L.r[j].key > L.r[j + 1].key)
//			{
//				flag = 1; // flag��Ϊ1����ʾ�����������˽���
//				RedType t = L.r[j];
//				L.r[j] = L.r[j + 1];
//				L.r[j + 1] = t; // ����ǰ��������¼
//			} // if
//		--m;
//	} // while
//} // BubbleSort