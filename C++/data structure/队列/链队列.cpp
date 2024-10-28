//#include <iostream>
//
//#define OK 1
//#define ERROR -1
//
//typedef int QElemType;
//typedef int Status;
//
//typedef struct QNode
//{
//	QElemType data;
//	struct QNode* next;
//}QNode , *QueuePtr;
//
//typedef struct 
//{
//	QueuePtr front; // ��ͷָ��
//	QueuePtr rear; // ��βָ��
//}LinkQueue;
//
//// ��ʼ��
//Status InitQueue(LinkQueue& Q)
//{
//	// ����һ���ն���Q
//	Q.front = Q.rear = new QNode; // �����½ڵ���Ϊͷ�ڵ㣬��ͷ�Ͷ�βָ��ָ��˽ڵ�
//	Q.front->next = NULL; // ͷ�ڵ��ָ�����ÿ�
//	return OK;
//}
//
//// ���
//Status EnQueue(LinkQueue& Q, QElemType e)
//{
//	// ����Ԫ��eΪQ���µĶ�βԪ��
//	QNode* p = new QNode; // Ϊ���Ԫ�ط���ڵ�ռ䣬��ָ��pָ��
//	p->data = e; // ���½ڵ���������Ϊe
//	p->next = NULL;
//	Q.rear->next = p; // ���½ڵ�����β
//	Q.rear = p; // �޸Ķ�βָ��
//	return OK;
//}
//
//// ����
//Status DeQueue(LinkQueue& Q, QElemType& e)
//{
//	// ɾ��Q�Ķ�ͷԪ�أ���e������ֵ
//	if (Q.front == Q.rear) return ERROR; // ������Ϊ�գ��򷵻�ERROR
//	QNode* p = Q.front->next; // pָ���ͷԪ��
//	e = p->data; // e�����ͷԪ�ص�ֵ
//	Q.front->next = p->next; // �޸Ľڵ��ָ����
//	if (Q.rear == p) Q.rear = Q.front; // ���һ��Ԫ�ر�ɾ����βָ��ָ��ڵ�
//	delete p;
//	return OK;
//}
//
//// ȡ��ͷԪ��
//QElemType GetHead(LinkQueue Q)
//{
//	// ����Q�Ķ�ͷԪ�أ����޸Ķ�ͷָ��
//	if (Q.front != Q.rear) // ���зǿ�
//		return Q.front->next->data; // ���ض�ͷԪ�ص�ֵ����ͷָ�벻��
//}