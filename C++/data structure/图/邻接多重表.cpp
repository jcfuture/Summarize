//#include <iostream>
//
//#define MAX_VERTEX_NUM 20
//
//typedef int InfoType;
//typedef int VertexType;
//
//typedef enum {unvisited , visited} VisitIf;
//
//typedef struct EBox
//{
//	VisitIf mark; // ���ʱ��
//	int ivex, jvex; // �ñ����������������λ��
//	struct EBox* ilink, * jlink; // �ֱ�ָ�������������������һ����
//	InfoType* info; //�ñ���Ϣָ��
//}EBox;
//
//typedef struct VexBox
//{
//	VertexType data; 
//	EBox* firstedge; // ָ���һ�������ö���ı�
//}VexBox;
//
//typedef struct
//{
//	VexBox adjmulist[MAX_VERTEX_NUM];
//	int vexnum, edgenum; // ����ͼ�ĵ�ǰ�������ͱ���
//}AMLGraph;