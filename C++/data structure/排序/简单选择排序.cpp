//#include "structs.h"
//
//void SelectSort(SqList& L)
//{
//	// ��˳���L���м�ѡ������
//	int i = 0, k = 0;
//	for (i = 1; i < L.length; i++)
//	{
//		// ��L.r[i..L.length]��ѡ��ؼ�����С�ļ�¼
//		k = i;
//		int j = 0;
//		for (j = i + 1; j <= L.length; j++)
//			if (L.r[j].key < L.r[k].key) k = j; // kָ����������йؼ�����С�ļ�¼
//		if (k != i)
//		{
//			// ����r[i]��r[k]
//			RedType t = L.r[i];
//			L.r[i] = L.r[k];
//			L.r[k] = t;
//		}
//	} // for
//
//}