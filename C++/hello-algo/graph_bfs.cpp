//#include "basic.h"
//#include "graph_adjacency_list.cpp"
//
//// ������ȱ���
//// ʹ���ڽӱ�����ʾͼ���Ա��ȡָ������������ڽӶ���
//std::vector<Vertex*> graphBFS(GraphAdjList& graph, Vertex* startVet)
//{
//	// �����������
//	std::vector<Vertex*> res;
//	// ��ϣ�����ڼ�¼�ѱ����ʹ��Ķ���
//	std::unordered_set<Vertex*> vistied = { startVet };
//	// ��������ʵ�� BFS
//	std::queue<Vertex*> que;
//	que.push(startVet);
//	// �Զ��� vet Ϊ��㣬ѭ��ֱ�����������ж���
//	while (!que.empty())
//	{
//		Vertex* vet = que.front();
//		que.pop(); // ���׶������
//		res.push_back(vet); // ��¼�ѷ��ʶ���
//		// �����ö���������ڽӶ���
//		for (auto adjVet : graph.adjList[vet])
//		{
//			if (vistied.count(adjVet))
//				continue; // �����ѱ����ʵĶ���
//			que.push(adjVet); // ֻ���δ���ʵĶ���
//			vistied.emplace(adjVet); // ��Ǹö����ѱ�����
//		}
//	}
//	// ���ض����������
//	return res;
//}