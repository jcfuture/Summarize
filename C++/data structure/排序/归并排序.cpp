//#include "structs.h"
//
//void Merge(RedType R[], RedType T[], int low, int mid, int high)
//{
//	// �������R[low..mid]��R[mid + 1 .. high]�鲢Ϊ�����T[low .. high]
//	int i = low, j = mid + 1, k = low;
//	while (i <= mid && j <= high) // ��R�еļ�¼��С����ز���T��
//	{
//		if (R[i].key <= R[j].key) T[k++] = R[i++];
//		else T[k++] = R[j++];
//	} // while
//	while (i <= mid) T[k++] = R[i++]; // ��ʣ���R[i..mid]���Ƶ�T��
//	while (j <= high) T[k++] = R[j++]; // ��ʣ���R[j..high]���Ƶ�T��
//}
//
//void MSort(RedType R[], RedType T[], int low, int high)
//{
//	// R[low..high]�鲢��������T[low..high]��
//	if (low == high) T[low] = R[low];
//	else
//	{
//		int mid = (low + high) / 2; // ����ǰ����һ��Ϊ����������ѵ�mid
//		MSort(R, S, low, mid); // ��������R[low..mid]�ݹ���й鲢���򣬽������S[low..mid]
//		MSort(R, S, mid + 1, high); // ��������R[low + 1 .. high]�ݹ���й鲢���򣬽������S[mid + 1 ..high]
//		Merge(S, T, low, mid, high); // ��S[low ..mid]��[mid + 1 .. high]�鲢��T[low ..high]
//	} //else
//}
//
//void MergeSort(SqList& L)
//{
//	// ��˳���L���й鲢����
//	MSort(L.r, L.r, 1, L.length);
//}