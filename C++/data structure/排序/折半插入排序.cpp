//#include "structs.h"
//
//void BInsertSort(SqList& L)
//{
//	// ��˳���L�����۰��������
//	for (int i = 2; i <= L.length; i++)
//	{
//		L.r[0] = L.r[i]; // ��������ļ�¼�ݴ浽��������
//		int low = 1, high = i - 1; // �ò�������ĳ�ֵ
//		while (low <= high) // ��r[low..high]���۰���Ҳ����λ��
//		{
//			int m = (low + high) / 2; //�۰�
//			if (L.r[0].key < L.r[m].key) high = m - 1; // �������ǰһ�ӱ�
//			else low = m + 1; // ������ں�һ�ӱ�
//		} // while
//		for (int j = i - 1; j >= high + 1; j--) L.r[j + 1] = L.r[j]; // ��¼����
//		L.r[high + 1] = L.r[0];
//	}
//}