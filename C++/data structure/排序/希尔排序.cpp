//#include "structs.h"
//
//void ShellInsert(SqList& L, int dk)
//{
//	// ��˳���L����һ��������dk��ϣ����������
//	for(int i = dk + 1; i <= L.length; i ++)
//		if (L.r[i].key < L.r[i - dk].key) // �轫L.r[i]�������������ӱ�
//		{
//			L.r[0] = L.r[i]; // �ݴ���r[0]��
//			int j = 0;
//			for (j = i - dk; j > 0 && L.r[0].key < L.r[j].key; j -= dk)
//				L.r[j + dk] = L.r[j]; // ��¼���ƣ�ֱ���ҵ�����λ��
//			L.r[j + dk] = L.r[0]; // ��r[0]��ԭr[i]��������ȷλ��
//		} // if
//}