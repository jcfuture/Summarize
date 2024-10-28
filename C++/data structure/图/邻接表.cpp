//#include <iostream>
//#include <string>
//
//#define MVNum 100 //��󶥵���
//
//#define OK 1
//#define ERROR -1
//
//typedef int VerTexType;
//typedef int Status;
//typedef std::string OtherInfo;
//
//typedef struct ArcNode // �߽ڵ�
//{
//	int adjevx; // �ñ���ָ��Ķ����λ��
//	struct ArcNode* nextarc; // ָ����һ���ߵ�ָ��
//	OtherInfo infor; // �ͱ���ص���Ϣ
//}ArcNode;
//
//typedef struct VNode
//{
//	VerTexType data;
//	ArcNode* firstarc; // ָ���һ�������ö���ıߵ�ָ��
//}VNode , AdjList[MVNum]; // AdjList��ʾ�ڽӱ�����
//
//typedef struct
//{
//	AdjList vertices;
//	int vexnum, arcnum; // ͼ�ĵ�ǰ�������ͱ���
//}ALGraph;
//
////Status CreateUDG(ALGraph& G)
////{
////	// �����ڽӱ��ʾ������������ͼG
////	std::cin >> G.vexnum >> G.arcnum; // �����ܶ��������ܱ���
////	for (int i = 0; i < G.vexnum; i++) // ������㣬�����ͷ�ڵ��
////	{
////		std::cin >> G.vertices[i].data; // ���붥��ֵ
////		G.vertices[i].firstarc = NULL; // ��ʼ����ͷ�ڵ��ָ����ΪNULL
////	} // for
////	for (int k = 0; k < G.arcnum; k++) // ������ߣ�����߱�
////	{
////		std::cin >> v1 >> v2; // ����һ������������������
////		i = LocateVex(G, v1); j = LocateVex(G, v2); // ȷ��v1��v2��G�е�λ�ã���������G.vertices�е����
////		ArcNode* p1 = new ArcNode; // ����һ���µı߽ڵ�*p1
////		p1->adjevx = j; // �ڽӵ����Ϊj
////		p1->nextarc = G.vertices[i].firstarc; // ���½ڵ�*p1���붥��v1�ı߱�ͷ��
////		G.vertices[i].firstarc = p1;
////		ArcNode* p2 = new ArcNode; // ������һ���ԳƵ��µı߽ڵ�*p2
////		p2->adjevx = i; // �ڽӵ����Ϊi
////		p2->nextarc = G.vertices[j].firstarc; // ���½ڵ�*p2���붥��v2�ı߱�ͷ��
////		G.vertices[j].firstarc = p2;
////	} // for
////	return OK;
////}
//
//bool vistied[MVNum]; // ���ʱ�־���飬���ֵΪ��false��
//
//void DFS_AL(ALGraph G, int v)
//{
//	// ͼGΪ�ڽӱ����ͣ��ӵ�v������������������������ͼG
//	std::cout << v;
//	vistied[v] = true; // ���ʵ�v�����㣬���÷��ʱ�־������Ӧ����ֵΪtrue
//	ArcNode* p = G.vertices[v].firstarc; // pָ��v�ı�����ĵ�һ���߽ڵ�
//	while (p != NULL) // �߽ڵ�ǿ�
//	{
//		int w = p->adjevx; // ��ʾw��v���ڽӵ�
//		if (!vistied[w]) DFS_AL(G, w); //���wΪ���ʣ���ݹ����DFS_AL()
//		p = p->nextarc; // pָ����һ���߽ڵ�
//	} // while
//}
//
////void BFS(Graph G, int v)
////{
////	// ��������ȷǵݹ������ͨͼG
////	std::cout << v;
////	vistied[v] = true; // ���ʵ�v�����㣬���÷���������Ӧ����ֵΪtrue
////	InitQueue(Q); // ��������Q��ʼ�����ÿ�
////	EnQueue(Q, v); // v���
////	while (!QueueEmpty(Q)) // ���зǿ�
////	{
////		DeQueue(Q, u); // ��ͷԪ�س��Ӳ���Ϊu
////		for(w = FirstAdjVex(G , u); w > 0; w= NextAdjVex(G , u , w))
////			// ���μ��u�������ڽӵ�w��FirstAdjVex(G,u)��ʾu�ĵ�һ���ڽӵ�
////			// NextAdjVex(G,u,w)��ʾu�����w����һ���ڽӵ㣬w>=0��ʾ�����ڽӵ�
////			if (!vistied[w]) // wΪu����δ���ʵ��ڽӶ���
////			{
////				std::cout << w;
////				vistied[w] = true; // ����w�����÷��ʱ�־������Ӧ����Ϊtrue
////				EnQueue(Q, w); // w���
////			} // if
////	} // while
////}
///*
//Status TopologicalSort(ALGraph G, int top[])
//{
//	// ����ͼG�����ڽӱ���Ϊ�洢�ṹ
//	// ��G�޻�·��������G��һ����������topo������OK������ERROR
//	FindInDegree(G, indegree); // ������������Ȳ���������indegree��
//	InitStack(S); // ջS��ʼ��Ϊ��
//	for (int i = 0; i < G.vexnum; i++)
//		if (!indegree[i]) Push(S, i); // ���Ϊ0�߽�ջ
//	int m = 0; // ����������������ʼΪ0
//	while (!StackEmpty(S)) // ջS�ǿ�
//	{
//		Pop(S, i); //ʹջ������Vi��ջ
//		topo[m] = i; // ������vi������������������topo��
//		m++; // ������������
//		p = G.vertices[i].firstarc;
//		while (p != NULL)
//		{
//			int k = p->adjvex;  // vkΪvi���ڽӵ�
//			--indegree[k]; // vi��ÿ���ڽӵ����ȼ�1
//			if (indegree[k] == 0) Push(S, k); // ����ȼ�Ϊ0������ջ
//			p = p->nextarc; // pָ�򶥵�vi����һ���ڽӽڵ�
//		} // while
//	} // while
//	if (m < G.vexnum) return ERROR; // ������ͼ�л�·
//	else return OK;
//}*/
///*
//Status CriticalPath(ALGraph G)
//{
//	// GΪ�ڽӱ�洢�������������G�ĸ���ؼ��
//	if (!TopologicalSort(G, topo)) return ERROR; // �������������㷨��ʹ�������򱣴���topo�У�������ʧ�ܣ���������򻷣�����ERROR
//	int n = G.vexnum; // nΪ�������
//	for (int i = 0; i < n; i++)
//		ve[i] = 0; // ��ÿ��ʱ������緢��ʱ���ó�ֵ0
//	for (int i = 0; i < n; i++)
//	{
//		int k = topo[i]; // ȡ�����������еĶ������k
//		ArcNode* p = G.vertices[k].firstarc; // pָ��k�ĵ�һ���ڽӶ���
//		while (p != NULL)
//		{	// ���θ���k�������ڽӶ�������緢��ʱ��
//			int j = p->adjevx;  // jΪ�ڽӶ�������
//			if (ve[j] < ve[k] + p->weight) // ���¶���j�����緢��ʱ��ve[j]
//				ve[j] = ve[k] + p->weight;
//			p = p->nextarc; // pָ��k����һ���ڽӶ���
//		} // while
//	} // for
//	for (int i = 0; i < n; i++) // Ϊÿ��ʱ�����ٷ���ʱ���ó�ֵve[n - 1]
//		v1[i] = ve[n - 1]; 
//	for (int i = n - 1; i >= 0; i--)
//	{
//		k = topo[i]; // ȡ�����������еĶ������k
//		p = G.vertices[k].firstarc; // pָ��k�ĵ�һ���ڽӶ���
//		while (p != NULL) // ����k���ڽӵ㣬����k����η���ʱ��
//		{
//			j = p->adjvex; // jΪ�ڽӶ�������
//			if (v1[k] > v1[j] - p->weight) // ���¶���k����ٷ���ʱ��v1[k]
//				v1[k] = v1[j] - p->weight;
//			p = p->nextarc; // pָ��k����һ���ڽӶ���
//		} // while
//	} // for
//	for (int i = 0; i < n; i++) // ÿ��ѭ�����viΪ���ʼ������л
//	{
//		p = G.vertices[i].firstarc; // pָ��i�ĵ�һ���ڽӶ���
//		while (p != NULL)
//		{
//			j = p->adjvex; // jΪi���ڽӶ�������
//			e = ve[i]; // ����<v1 , v2>�����翪ʼʱ��
//			l = v1[j] - p->weight; // ����<v1,v2>����ٿ�ʼʱ��
//			if (e == 1) // ��Ϊ�ؼ���������<vi , vi>
//				std::cout << G.vertices[i].data << G.vertices[j].data; 
//			p = p->nextarc; // pָ��i����һ���ڽӶ���
//		} // while
//	} // for
//}*/