//#include <iostream>
//
//#define MAXQSIZE 100 // ���п��ܴﵽ����󳤶�
//#define OK 1
//#define ERROR -1
//
//typedef int QElemType;
//typedef int Status;
//
//typedef struct
//{
//	QElemType* base; // �洢�ռ�Ļ���ַ
//	int front; // ͷָ��
//	int rear; //βָ��
//}SqQueue;
//
////// ��ʼ��
////Status InitQueue(SqQueue& Q)
////{
////	// ����һ���ն���Q
////	Q.base == new QElemType[MAXQSIZE]; // Ϊ���з���һ���������ΪMAXQSIZE������ռ�
////	if (!Q.base) exit(OVERFLOW); // �洢����ʧ��
////	Q.front = Q.rear = 0; // ��ͷָ���βָ����Ϊ0������Ϊ��
////	return OK;
////}
//
////// ����г���
////int QueueLength(SqQueue Q)
////{
////	// ����Q��Ԫ�ظ����������еĳ���
////	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
////}
//
//// ���
//Status EnQueue(SqQueue& Q, QElemType e)
//{
//	// ����Ԫ��eΪQ���µĶ�βԪ��
//	if ((Q.rear + 1) % MAXQSIZE == Q.front) // ��βָ����ѭ�������ϼ�1�����ͷָ�룬��������
//		return ERROR;
//	Q.base[Q.rear] = e; // ��Ԫ�ز����β
//	Q.rear = (Q.rear + 1) % MAXQSIZE; // ��βָ���1
//	return OK;
//}
//
//// ����
//Status DeQueue(SqQueue& Q, QElemType& e)
//{
//	// ɾ��Q�Ķ�ͷԪ�أ���e������ֵ
//	if (Q.front == Q.rear) return ERROR; // �ӿ�
//	e = Q.base[Q.front]; // �����ͷԪ��
//	Q.front = (Q.front + 1) % MAXQSIZE; // ��ͷָ���1
//	return OK;
//}
//
//// ȡ��ͷԪ��
////QElemType GetHead(SqQueue Q)
////{
////	// ����Q�Ķ�ͷԪ�أ����޸Ķ�ͷָ��
////	if (Q.front != Q.rear) // ���зǿ�
////		return Q.base[Q.front]; // �����ͷԪ�ص�ֵ����ͷָ�벻��
////}
//
