//#include "structs.h"
//
//void HeapAdjust(SqList& L, int s, int m)
//{
//	// ����r[s+1 .. m]�Ѿ��Ƕѣ���r[s..m]����Ϊr[s]Ϊ���Ĵ����
//	RedType rc = L.r[s]; 
//	int j = 0;
//	for (j = 2 * s; j <= m; j *= 2) // ��key�ϴ�ĺ��ӽڵ�����ɸѡ
//	{
//		if (j < m && L.r[j].key < L.r[j + 1].key) ++j; // jΪkey�ϴ�ļ�¼���±�
//		if (rc.key >= L.r[j].key) break; // rcӦ������λ��s��
//		L.r[s] = L.r[j];
//		s = j;
//	} // for
//	L.r[s] = rc; // ����
//} 
//
//void CreateHeap(SqList &L)
//{
//	// ����������L.r[1..n]���ɴ����
//	int n = L.length;
//	for (int i = n / 2; i > 0; i--) // ��������HeapAdjust
//		HeapAdjust(L, i, n);
//}
//
//void HeapSort(SqList& L)
//{
//	// ��˳���L���ж�����
//	CreateHeap(L); // ����������L.r[1..L.length]���ɴ����
//	for (int i = L.length; i > 1; i--)
//	{
//		RedType x = L.r[1]; // ���Ѷ���¼�͵�ǰδ������������L.r[1..i]�����һ����¼����
//		L.r[1] = L.r[i];
//		L.r[i] = x;
//		HeapAdjust(L, 1, i - 1); // ��L.r[1..i - 1]���µ���Ϊ�����
//	} // for
//}