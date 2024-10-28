//#include "basic.h"
//
//typedef int Vertex;
//
//class GraphAdjList
//{
//public:
//	friend std::vector<Vertex*> graphBFS(GraphAdjList& graph, Vertex* startVet);
//	friend void dfs(GraphAdjList& graph, std::unordered_set<Vertex*>& visitied, std::vector<Vertex*>& res, Vertex* vet);
//
//	GraphAdjList(const std::vector<std::vector<Vertex*>>& edges)
//	{
//		// ������ж���ͱ�
//		for (const std::vector<Vertex*>& edge : edges)
//		{
//			addVertex(edge[0]);
//			addVertex(edge[1]);
//			addEdge(edge[0], edge[1]);
//		}
//	}
//
//	// �� vector ��ɾ��ָ���ڵ�
//	void remove(std::vector<Vertex*>& vec, Vertex* vet)
//	{
//		for (int i = 0; i < vec.size(); i++)
//		{
//			if (vec[i] == vet)
//			{
//				vec.erase(vec.begin() + i);
//				break;
//			}
//		}
//	}
//
//	// ��ȡ��������
//	int size()
//	{
//		return adjList.size();
//	}
//
//	// ��Ӷ���
//	void addVertex(Vertex* vet)
//	{
//		if (adjList.count(vet))
//			return;
//		// ���ڽӱ������һ��������
//		adjList[vet] = std::vector<Vertex*>();
//	}
//
//	// ɾ������
//	void removeVertex(Vertex* vet)
//	{
//		if (!adjList.count(vet))
//			std::cout << "�����ڶ���" << std::endl;
//		// ���ڽӱ���ɾ������ vet ��Ӧ������
//		adjList.erase(vet);
//		// �����������������ɾ�����а��� vet �ı�
//		for (auto& adj : adjList)
//			remove(adj.second, vet);
//	}
//
//	// ��ӱ�
//	void addEdge(Vertex* vet1, Vertex* vet2)
//	{
//		if (!adjList.count(vet1) || !adjList.count(vet2) || vet1 == vet2)
//			throw std::invalid_argument("�����ڶ���");
//		// ��ӱ� vet1 - vet2
//		adjList[vet1].push_back(vet2);
//		adjList[vet2].push_back(vet1);
//	}
//
//	// ɾ����
//	void removeEdge(Vertex* vet1, Vertex* vet2)
//	{
//		if (!adjList.count(vet1) || !adjList.count(vet2) || vet1 == vet2)
//			throw std::invalid_argument("�����ڶ���");
//		// ɾ���� vet1 - vet2
//		remove(adjList[vet1], vet2);
//		remove(adjList[vet2], vet1);
//	}
//
//	 // ��ӡ�ڽӱ�
//	void print()
//	{
//		std::cout << "�ڽӱ� = ";
//		for (auto& adj : adjList)
//		{
//			const auto& key = adj.first;
//			const auto& vec = adj.second;
//			std::cout << key<< ": ";
//			printVector(vetsToVals(vec));
//		}
//	}
//
//	std::vector<int> vetsToVals(std::vector<Vertex*> vec)
//	{
//		
//	}
//
//	void printVector(std::vector<int> vertices)
//	{
//		for (auto& num : vertices)
//			std::cout << num << " ";
//	}
//private:
//	std::unordered_map<Vertex*, std::vector<Vertex*>> adjList;
//
//	
//};