//#include <iostream>
//#include "structs.h"
//
//void InsertSort(SqList& L)
//{
//	// ��˳���L����ֱ�Ӳ�������
//	for(int i = 2;i <= L.length; i ++)
//		if (L.r[i].key < L.r[i - 1].key) // ��<���轫r[i]���������ӱ�
//		{
//			L.r[0] = L.r[i]; // ��������ļ�¼�ݴ浽��������
//			L.r[i] = L.r[i - 1]; // r[i - 1]����
//			int j = 0;
//			for (j = i - 2; L.r[0].key < L.r[j].key; j--) // �Ӻ���ǰѰ�Ҳ���λ��
//				L.r[j + 1] = L.r[j]; // ��¼������ƣ�ֱ���ҵ�����λ��
//			L.r[j + 1] = L.r[0]; // ��r[0]��ԭr[i]��������ȷλ��
//		} // if
//}