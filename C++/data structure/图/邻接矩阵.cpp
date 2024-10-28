//#include <iostream>
//#include <algorithm>
//
//#define MAXInt 32767 // ��ʾ�����
//#define MVNum 100 // ��󶥵���
//#define OK 1
//#define ERROR -1
//
//typedef char VerTexType; // ���趩������������Ϊ�ַ���
//typedef int ArcType; // ����ߵ�Ȩֵ����Ϊ����
//
//typedef int Status;
//
//typedef struct
//{
//	VerTexType vexs[MVNum]; // �����
//	ArcType arcs[MVNum][MVNum]; //�ڽӾ���
//	int vexnum, arcnum; // ͼ�ĵ�ǰ�����ͱ��� } AMGraph
//}AMGraph;
//
////// �����ڽӾ����ʾ������������
////Status CreateUDN(AMGraph& G)
////{
////	// �����ڽӾ����ʾ������������ͼG
////	std::cin >> G.vexnum >> G.arcnum; // �����ܶ��������ܱ���
////	for (int i = 0; i < G.vexnum; i++) // ������������Ϣ
////		std::cin >> G.vexs[i]; 
////	for (int i = 0; i < G.vexnum; i++) // ��ʼ���ڽӾ��󣬱ߵ�Ȩֵ��ֵΪ����ֵMAXInt
////		for (int j = 0; j < G.vexnum; j++)
////			G.arcs[i][j] = MAXInt; 
////	for (int k = 0; k < G.arcnum; k++) // �����ڽӾ���
////	{
////		std::cin >> v1 >> v2 >> w; // ����һ���������Ķ��㼰Ȩֵ
////		i = LocateVex(G, v1); // ȷ��v1��v2��G�е�λ�ã�������������±�
////		j = LocateVex(G, v1);
////		G.arcs[i][j] = w; // ��<v1 , v2>��Ȩֵ��Ϊw
////		G.arcs[j][i] = G.arcs[i][j]; // ��<v1 , v2>�ĶԳƱ�<v2 , v1>��ȨֵΪw
////	} // for
////	return OK;
////}
//
//bool vistied[MVNum]; // ���ʱ�־���飬���ֵΪ��false��
//
////void DFS(Graph G, int v)
////{
////	// �ӵ�v����������ݹ��������ȱ���ͼG
////	std::cout << v;
////	vistied[v] = true; // ���ʵ�v�����㣬���÷��ʱ�־������Ӧ����ֵΪtrue
////	for (w = FirstAdjVex(G, v); w >= 0; w = NextAdjVex(G, v, x)) // ���μ��v�������ڽӵ�w��FirstAdjVex(G��v)��ʾv�ĵ�һ���ڽӵ�
////		// NextAdjVex(G,v,w)��ʾv�����w����һ���ڽӵ㣬w>= 0��ʾ�����ڽӵ�
////		if (!vistied[w]) DFS(G, w); // ��v����δ���ʵ��ڽӶ���w�ݹ����DFS()
////}
//
////void DFSTraverse(Graph G)
////{
////	// �Է���ͨͼG����������ȱ���
////	for (v = 0; v < G.vexnum; ++v) vistied[v] = false; // ���ʱ�־�����ʼ��
////	for (v = 0; v < G.vexnum; ++v)
////		if (!vistied[v]) DFS(G, v); // ����δ���ʵĶ������DFS
////}
//
//void DFS_AM(AMGraph G, int v)
//{
//	// ͼGΪ�ڽӾ������ͣ��ӵ�v������������������������ͼG
//	std::cout << v;
//	vistied[v] = true; // ���ʵ�v�����㣬���÷��ʱ�־������Ӧ����ֵΪtrue
//	for (int w = 0; w < G.vexnum; w++) // ���μ���ڽӾ���v���ڵ���
//		if (G.arcs[v][w] != 0 && !vistied[w]) DFS_AM(G, w);
//	// G.arcs[v][w] ��= 0 ��ʾw��v���ڽӵ㣬���wΪ���ʣ���ݹ����DFS_AM()
//}
//
//// ��������Ķ��壬������¼�Ӷ��㼯U��V-UȨֵ��С�ı�
//struct 
//{
//	VerTexType adjvex; // ��С����U�е��Ǹ�����
//	ArcType lowcost; // ��С���ϵ�Ȩֵ
//}closedge[MVNum];
//
////void MiniSpanTree_Prim(AMGraph G, VerTexType u)
////{
////	// ����ͼG���ڽӾ�����ʽ�洢���Ӷ���u��������G����С������T�����T�ĸ�����
////	int k = LocateVex(G, u); // kΪ����u���±�
////	for (int j = 0; j < G.vexnum; j++) // ��V-U��ÿһ�������ʼ��closedge[j]
////		if (j != k) closedge[j] = { u , G.arcs[k][j] }; // {adjvex �� lowcost}
////	closedge[k].lowcost = 0;  // ��ʼ��U={u}
////	for (int i = 1; i < G.vexnum; i++)
////	{
////		// ѡ������n-1�����㣬����n-1���ߣ�n=G.vexnum��
////		k = Min(closedge);
////		// ���T����һ���ڵ㣺��k�����㣬closedge[k] �д��ڵ�ǰ��С��
////		u0 = closedge[k].adjvex; // u0Ϊ��С�ߵ�һ�����㣬u0����U
////		v0 = G.vexs[k]; //v0Ϊ��С�ߵ���һ�����㣬u0����V-U
////		std::cout << u0 << v0; // �����ǰ����С�ߣ�u0,v0��
////		closedge[k].lowcost = 0; // ��k�����㲢��U��
////		for (int j = 0; j < G.vexnum; j++)
////			if (G.arcs[k][j] < closedge[j].lowcost) // �¶��㲢��U������ѡ����С��
////				closedge[j] = { G.vexs[k] , G.arcs[k][j] };
////	} // for
////
////}
//
//#define arcnum 100
//
//// ��������Edges�Ķ���
//struct 
//{
//	VerTexType Head; // �ߵ�ʼ��
//	VerTexType Tail; // �ߵ��յ�
//	ArcType lowcost; // ���ϵ�Ȩֵ
//}Edge[arcnum];
//
//// ��������Vexset�Ķ���
//int Vexset[MVNum];
//
///*void MiniSpanTree_Kruskal(AMGraph G)
//{
//	// ������G���ڽӾ�����ʽ�洢������G����С������T�����T�ĸ�����
//	Sort(Edge); // ������Edge�е�Ԫ�ذ�Ȩֵ��С���������
//	for (i = 0; i < G.vexnum; i++) // �������飬��ʾ�������Գ�һ����ͨ����
//		Vexset[i] = i;
//	for (i = 0; i > G.arcnum; i++)
//	{
//		v1 = LocateVex(G, Edge[i].Head); // v1Ϊ�ߵ�ʼ��Head���±�
//		v2 = LocateVex(G, Edge[i].Tail); // v1Ϊ�ߵ��յ�Tail���±�
//		vs1 = Vexset[v1]; // ��ȡ��Edge[i]��ʼ�����ڵ���ͨ����vs1
//		vs2 = Vexset[v2]; // ��ȡ��Edge[i]���յ����ڵ���ͨ����vs2
//		if (vs1 != vs2) // �ߵ��������������ͬ����ͨ����
//		{
//			std::cout << Edge[i].Head << Edge[i].Tail; // ����˱�
//			for (int j = 0; j < G.vexnum; j++) // �ϲ�vs1��vs2��������������������ͳһ���
//				if (Vexset[j] == vs2) // ���ϱ��Ϊvs2�Ķ���Ϊvs1
//					Vexset[j] = vs1;
//		} // if
//	} // for
//}*/
//
///*
//void ShortestPath_DIJ(AMGraph G, int v0)
//{
//	bool S[MAXInt];
//	// ��Dijkstra�㷨����������v0���㵽���ඥ������·��
//	int n = G.vexnum; //nΪG�ж���ĸ���
//	for (int v = 0; v < n; v++) // n���������γ�ʼ��
//	{
//		S[v] = false; // S��ʼΪ�ռ�
//		D[v] = G.arcs[v0][v]; // ��v0��������յ�����·�����ȳ�ʼ��Ϊ���ϵ�Ȩֵ
//		if (D[v] < MAXInt) Path[V] = 0; // ���v0��v֮���л�����v��ǰ����Ϊv0
//		else Path[V] = -1; // ���v0��v֮���л�����v��ǰ����Ϊ-1
//	} // for
//	S[v0] = true; // ��v0����S
//	D[v0] = 0;  // Դ�㵽Դ��ľ���Ϊ0
//	for (int i = 1; i < n; i++) // ������n - 1�����㣬���ν��м���
//	{
//		int min = MAXInt;
//		for(int w = 0; w < n; w ++)
//			if (!S[w] && D[w] < min)
//			{
//				int v = w; // ѡ��һ����ǰ�����·�����յ�Ϊv
//				min = D[w];
//			}
//		S[V] = true; // ��V����S
//		for(w = 0; w < n; w ++) // ���´�v0����������V-S�����ж�������·������
//			if (!S[w] && D[v] + G.arcs[v][w] < D[w])
//			{
//				D[w] = D[v] + G.arcs[v][w]; // ����D[w]
//				Path[w] = v; // ����w��ǰ��Ϊv
//			} // if
//	} // for
//}
//*/
//
///*
//void ShortestPath_Floyd(AMGraph G)
//{
//	// �ø��������㷨��������G�и��Զ���i��j֮������·��
//	for(int i = 0; i < G.vexnum; i++) // ���Զ���֮���ʼ��֪·��������
//		for (int j = 0; j < G.vexnum; j++) 
//		{
//			D[i][j] = G.arcs[i][j];
//			if (D[i][j] < MAXInt && i != j) Path[i][j] = i; // ���i��j֮���л�����j��ǰ����Ϊi
//			else Path[i][j] = -1; // ���i��j֮���޻�����j��ǰ����Ϊ-1
//		}
//	for(int k = 0; k < G.vexnum; k ++)
//		for(int i = 0; i < G.vexnum; i ++)
//			for(int j = 0; j < G.vexnum; j ++)
//				if (D[i][k] + D[k][i] < D[i][j]) // ��i��k��j��һ��·������
//				{
//					D[i][j] = D[i][k] + D[k][j]; // ����D[i][j]
//					Path[i][j] = Path[k][j]; // ����j��ǰ��Ϊk
//				} // if
//}
//*/
//
///*
//void SixDegree_BFS(Graph G, int Start)
//{
//	// ͨ���������������������G����֤���ȿռ����ۣ�StartΪָ����ʼ��
//	int Visit_Num = 0; // ��¼·�����Ȳ�����7�Ķ������
//	vistied[Start] = true; // �ö���Start���ʱ�־������Ӧ����ֵΪtrue
//	InitQueue(Q); EnQueue(Q, Start); // ��������Q��ʼ�����ÿգ�Start����
//	int level[MVNum];
//	level[0] = 1; // ��һ����ӵĶ��������ʼ��Ϊ1
//	for (int len = 1; len <= 6 && !QueueEmpty(Q); len++) // ͳ��·�����Ȳ�����7�Ķ������
//	{
//		for (int i = 0; i < level[len - 1]; i++)
//		{
//			DeQueue(Q,u); // ��ͷ����u����
//			for(w = FirstAdjVex(G,u); w >= 0; w = NextAdjVex(G,u,w))
//				// ���μ��u�������ڽӵ�w��FirstAdjVex(G,u)��ʾu�ĵ�һ���ڽӵ�
//				// NextAdjVex(G,u,w)��ʾu�����w����һ���ڽӵ㣬w>=0��ʾ�����ڽӵ�
//				if (!vistied[w]) // wΪu����δ���ʵ��ڽӶ���
//				{
//					vistied[w] = true; // ��w���Ϊ���ȶ���
//					Visit_Num++;
//					level[len]++; // ·�����Ȳ�����7�Ķ��������1���ò�εĶ��������1
//					EnQueue(Q, w); // w���
//				}
//		}
//	}
//	std::cout << 100 * Visit_Num / G.vexnum; // ����Ӷ���Start���������������㳤�Ȳ�����7��·���İٷֱ�
//}*/