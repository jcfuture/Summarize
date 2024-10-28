//#include <iostream>
//
//#define MAXSIZE 100 // ˳�����ܴﵽ����󳤶�
//#define OK 1
//#define ERROR -1
//
//typedef int ElemType;
//typedef int Status;
//
//
//typedef struct
//{
//	ElemType* elem; // �洢�ռ�Ļ���ַ
//	int length; // ��ǰ����
//}SqList;
//
//// ��ʼ��
//Status InitList(SqList& L)
//{
//	// ����һ���յ�˳���L
//	L.elem = new ElemType[MAXSIZE]; // Ϊ˳������һ����СΪMAXSIZE������ռ�
//	if (!L.elem) exit(OVERFLOW); // �洢����ʧ���Ƴ�
//	L.length = 0; // �ձ���Ϊ0
//	return OK;
//}
//
//// ȡֵ
//Status GetElem(SqList L, int i, ElemType& e)
//{
//	if (i < 1 || i > L.length) return ERROR; // �ж�iֵ�Ƿ��������������ERROR
//
//	e = L.elem[i - 1]; // elem[i - 1]��Ԫ�洢��i������Ԫ��
//	
//	return OK;
//}
//
//// ����
//int LocateElem(SqList L, ElemType e)
//{
//	// ��˳����в���ֵΪe������Ԫ�أ����������
//	for (int i = 0; i < L.length; i++)
//		if (L.elem[i] == e) return i + 1; // ���ҳɹ���������� i+1
//	return 0; // ����ʧ�ܣ�����0
//}
//
//// ����
//Status ListInsert(SqList& L, int i, ElemType e)
//{
//	// ��˳���L�е�i��λ�ò����µ�Ԫ��e,iֵ�ĺϷ���Χ��1<=i<=L.length+1
//	if (i < 1 || i > L.length + 1) return ERROR; // iֵ���Ϸ�
//	if (L.length == MAXSIZE) return ERROR; // ��ǰ�洢�ռ�����
//	for (int j = L.length - 1; j >= i - 1; j--)
//		L.elem[j + 1] = L.elem[j]; // ����λ�ü�֮���Ԫ�غ���
//	L.elem[i - 1] = e; // ����Ԫ��e�����i��λ��
//	++L.length; // ����һ
//	return OK;
//}
//
//// ɾ��
//Status ListDelete(SqList& L, int i)
//{
//	// ��˳���L��ɾ����i��Ԫ�أ�iֵ�ĺϷ���Χ��1<=i<=L.lenght
//	if (i < 1 || i > L.length) return ERROR; // iֵ���Ϸ�
//	for (int j = i; j <= L.length; j--)
//		L.elem[j - 1] = L.elem[j]; // ��ɾ��Ԫ��֮���Ԫ��ǰ��
//	--L.length; // ����һ
//	return OK;
//}
//
//// ˳�������ĺϲ�
//void MergeList_Sq(SqList LA, SqList LB, SqList LC)
//{
//	// ��֪˳���LA��LB��Ԫ�ذ�ֵ�ǵݼ�����
//	// �鲢LA��LB�õ��µ�˳�������LC��LC��Ԫ��Ҳ��ֵ�ǵݼ�����
//	LC.length = LA.length + LB.length; // �ű곤��Ϊ���ϲ�����ĳ���֮��
//	LC.elem = new ElemType[LC.length]; // Ϊ�ϲ�����±����һ������ռ�
//	ElemType* pc = LC.elem; // ָ��pcָ���±�ĵ�һ��Ԫ��
//	ElemType* pa = LA.elem;
//	ElemType* pb = LB.elem; // ָ��pa��pb�ĳ�ֵ�ֱ�ָ��������ĵ�һ��Ԫ��
//	ElemType* pa_last = LA.elem + LA.length - 1; // ָ��pa_lastָ��LA�����һ��Ԫ��
//	ElemType* pb_last = LB.elem + LB.length - 1; // ָ��pb_lastָ��LB�����һ��Ԫ��
//	while (pa <= pa_last && pb <= pb_last) // δ�ﵽLA��LB�ı�β
//	{
//		if (*pa <= *pb) *pc++ = *pa++; // ����ժȡ������ֵ��С�Ľڵ����LC�����
//		else *pc++ = *pb++;
//	}
//	while (pa <= pa_last) *pc++ = *pa++; // �ѵ���LB��β�����ν�LA��ʣ��Ԫ�ز���LC�����
//	while (pb <= pb_last) *pc++ = *pb++; // �ѵ���LA��β�����ν�LB��ʣ��Ԫ�ز���LC�����
//}