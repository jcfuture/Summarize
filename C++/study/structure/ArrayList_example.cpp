//#include <iostream>
//
//template <typename T>
//void Reverse(T R[], int from, int to)
//{
//	int i, temp;
//	for (i = 0; i < (to - form) / 2; i++)
//	{
//		temp = R[i];
//		R[form + i] = R[to - i];
//		R[to - i] = temp;
//	}
//}
// 
//template <typename T>
//void Converse(T R[], int n, int p)
//{
//	Reverse(R, 0, p - 1);
//	Reverse(R, p, n - 1);
//	Reverse(R, 0, n - 1);
//}
//
//template <typename T>
//int M_search(T A[], T B[], int n)
//{
//	int s1, d1, m1, s2, d2, m2;
//	s1 = 0;
//	d1 = n - 1;
//	s2 = 1;
//	d2 = n - 1;
//	while (s1 != d1 || s2 != d2)
//	{
//		m1 = (s1 + d1) / 2;
//		m2 = (s2 + d2) / 2;
//		// ��������:�� a = b ���� a �� b��Ϊ������λ�����㷨����
//		if (A[m1] == B[m2]) 
//			return A[m1];
//		// ��������: �� a < b ������������ A �н�С��һ�룬ͬʱ�������� B �нϴ��һ�룬Ҫ�����������ĳ�����ͬ
//		if (A[m1] < B[m2])
//		{
//			// ��Ԫ�ظ���Ϊ����
//			if ((s1 + d1) % 2 == 0)
//			{
//				s1 = m1; // ���� A �м���Ժ�Ĳ��֣��ұ����м��
//				d2 = m2; // ���� B �м���Ժ�Ĳ��֣��ұ����м��
//			}
//			// ��Ԫ�ظ���Ϊż��
//			else
//			{
//				s1 = m1 + 1; // ���� A ��ǰ�벿��
//				d2 = m2; // ���� B �ĺ�벿��
//			}
//		}
//		// ��������: �� a > b ������������ A �м�ϴ��һ�룬ͬʱ�������� B �н�С��һ�룬Ҫ�����������ĳ������
//		else 
//		{
//			// ����Ԫ�ظ���Ϊ����
//			if ((s1 + d1) % 2 == 0)
//			{
//				d1 = m1; // ���� A �м���Ժ�Ĳ��֣��ұ����м��
//				s2 = m2; // ���� B �м����ǰ�Ĳ��֣��ұ����м��
//			}
//			// Ԫ�ظ���Ϊż��
//			else
//			{
//				d1 = m1; // ���� A �ĺ�벿��
//				s2 = m2 + 1; // ���� B ��ǰ�벿��
//			}
//		}
//		return A[s1] < B[s2] ? A[s1] : B[s2];
//	}
//}
//
//template <typename T>
//int Majority(T A[], int n)
//{
//	T c = A[0]; // c ���������ѡ��Ԫ��
//	int count = 1; // count ��������
//	// ���Һ�ѡ��Ԫ��
//	for (int i = 0; i < n; i++)
//	{
//		if (A[i] == c)
//			count++; // �� A �еĺ�ѡԪ�ؼ���
//		else
//		{
//			if (count > 0) // �����Ǻ�ѡ��Ԫ�ص����
//				count--;
//			else // ������ѡ��Ԫ�أ����¼���
//			{
//				c = A[i];
//				count = 1;
//			}
//		}
//	}
//	if (count > 0)
//		for (int i = 0; i < n; i++) // ͳ�ƺ�ѡ��Ԫ�ص�ʵ�ʳ��ִ���
//			if (A[i] == c)
//				count++;
//	if (count > (n / 2)) return c; // ȷ�Ϻ�ѡ��Ԫ��
//	else return -1; // ��������Ԫ��
//}
//
//template <typename T>
//int findMissMin(T A[], int n)
//{
//	T* B = new T[n]; // �����������
//	memset(B, 0, sizeof(T) * n); // ����ֵΪ 0
//	for (int i = 0; i < n; i++)
//		if (A[i] > 0 && A[i] <= n) // �� A[i] ��ֵ���� 1 ~ n���������� B
//			B[A[i] - 1] = 1;
//	for (int i = 0; i < n; i++) // ɨ������ B���ҵ�Ŀ��ֵ
//		if (B[i] == 0) break;
//	return i + 1; // ���ؽ��
//}