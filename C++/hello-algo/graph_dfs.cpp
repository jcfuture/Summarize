//#include "basic.h"
//#include "graph_adjacency_list.cpp"
//
//// ������ȱ�����������
//void dfs(GraphAdjList& graph, std::unordered_set<Vertex*>& visitied, std::vector<Vertex*>& res, Vertex* vet)
//{
//	res.push_back(vet); // ��¼���ʶ���
//	visitied.emplace(vet); // ��Ǹö����ѱ�����
//	// �����ö���������ڽӶ���
//	for (Vertex* adjVet : graph.adjList[vet])
//	{
//		if (visitied.count(adjVet))
//			continue; // �����ѱ����ʵĶ���
//		// �ݹ�����ڽӶ���
//		dfs(graph, visitied, res, adjVet);
//	}
//}
//
//// ������ȱ���
//// ʹ���ڽӱ�����ʾͼ���Ա��ȡָ������������ڽӶ���
//std::vector<Vertex*> graphDFS(GraphAdjList& graph, Vertex* startVet)
//{
//	// �����������
//	std::vector<Vertex*> res;
//	// ��ϣ�����ڼ�¼�ѱ����ʵĶ���
//	std::unordered_set<Vertex*> visitied;
//	dfs(graph, visitied, res, startVet);
//	return res;
//}