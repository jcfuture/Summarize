//#include <iostream>
//#include <string>
//
//#define MAX_VERTEX_NUM 20
//
//typedef int VertexType;
//typedef std::string InfoType; 
//
//typedef struct ArcBox
//{
//	int tailvex, headvex; // �û���β��ͷ�����λ��
//	struct ArcBox* hlink, * tlink; // �ֱ�Ϊ��ͷ��ͬ�ͻ�β��ͬ�Ļ�������
//	InfoType* info; // �û��������Ϣ��ָ��
//}ArcBox;
//
//typedef struct VexNode
//{
//	VertexType data;
//	ArcBox* firstin, * firstout; // �ֱ�ָ���Ƕ����һ���뻡�ͳ���
//}VexNode;
//
//typedef struct
//{
//	VexNode alist[MAX_VERTEX_NUM]; //��ͷ����
//	int vexnum, arcnum; // ����ͼ�ĵ�ǰ�������ͻ���
//}OLGraph;