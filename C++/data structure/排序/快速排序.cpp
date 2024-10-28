//#include "structs.h"
//
//int Partition(SqList& L, int low, int high)
//{
//	// ��˳���L�е��ӱ�r[low..high]����һ�����򣬷�������λ��
//	L.r[0] = L.r[low]; // ���ӱ�ĵ�һ����¼��Ϊ�����¼
//	KeyType pivotkey = L.r[low].key; // �����¼�ؼ��ֱ�����pivotkey��
//	while (low < high)
//	{
//		while (low < high && L.r[high].key >= pivotkey) --high;
//		L.r[low] = L.r[high]; // ���������¼С�ļ�¼�Ƶ��Ͷ�
//		while (low < high && L.r[low].key <= pivotkey) ++low;
//		L.r[high] = L.r[low]; // ���������¼��ļ�¼�Ƶ��߶�
//	} // while
//	L.r[low] = L.r[0]; // �����¼��λ
//	return low; // ��������λ��
//}
//
//void QSort(SqList& L, int low, int high)
//{
//	// ����ǰ�ó�ֵ��low = 1��high = L.length
//	// ��˳���L�е��ӱ�L.r[low..high]���п�������
//	KeyType pivotkey;
//	if (low < high) // ���ȴ���1
//	{
//		pivotkey = Partition(L, low, high); // ��L.r[low..high]һ��Ϊ����pivotloc������λ��
//		QSort(L, low, pivotkey - 1); // �����ӱ�ݹ�����
//		QSort(L, pivotkey + 1 , high); // �����ӱ�ݹ�����
//	}
//}
//
//void QuickSort(SqList& L)
//{
//	// ��˳���L���п�������
//	QSort(L, 1, L.length);
//}