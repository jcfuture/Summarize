#include "basic.h"

// �����ڽӾ���ʵ�ֵ�����ͼ��
class GraphAdjMat
{
public:
	// ���췽��
	GraphAdjMat(const std::vector<int>& vertices, const std::vector<std::vector<int>>& edges)
	{
		// ���Ӷ���
		for (int val : vertices)
			addVertex(val);
		// ���ӱ�
		// ��ע�⣬edges Ԫ�ش�����������������Ӧ vertices Ԫ������
		for (const std::vector<int>& edge : edges)
			addEdge(edge[0], edge[1]);
	}

	// ��ȡ��������
	int size() const
	{
		return vertices.size();
	}

	// ���Ӷ���
	void addVertex(int val)
	{
		int n = size();
		// �򶥵��б������ȼ��¶����ֵ
		vertices.push_back(val);
		// ���ڽӾ���������һ��
		adjMat.emplace_back(std::vector<int>(n, 0));
		// ���ڽӾ���������һ��
		for (std::vector<int>& row : adjMat)
			row.push_back(0);
	}

	// ɾ������
	void removeVertex(int index)
	{
		if (index >= size())
			std::cout << "���㲻����" << std::endl;
		// �ڶ����б����Ƴ����� index �Ķ���
		vertices.erase(vertices.begin() + index);
		// ���ڽӾ�����ɾ������ index ����
		adjMat.erase(adjMat.begin() + index);
		// ���ڽӾ�����ɾ������ index ����
		for (std::vector<int>& row : adjMat)
			row.erase(row.begin() + index);
	}

	// ���ӱ�
	// ���� i�� j ��Ӧ vertices Ԫ������
	void addEdge(int i, int j)
	{
		// ����Խ������ȴ���
		if (i < 0 || j < 0 || i >= size() || j >= size() || i == j)
			std::cout << "���㲻����" << std::endl;
		// ������ͼ�У��ڽӾ���������Խ��߶Գƣ� �����㣨i��j�� == ��j��i��
		adjMat[i][j] = 1;
		adjMat[j][i] = 1;
	}

	// ɾ����
	// ���� i��j��Ӧ vertices Ԫ������
	void removeEdge(int i, int j)
	{
		// ����Խ������ȴ���
		if (i < 0 || j < 0 || i >= size() || j >= size() || i == j)
			std::cout << "���㲻����" << std::endl;
		adjMat[i][j] = 0;
		adjMat[j][i] = 0;
	}

	// ��ӡ�ڽӾ���
	void print()
	{
		std::cout << "�����б� = ";
		printVector(vertices);
		std::cout << "�ڽӾ��� = " << std::endl;
		printVectorMatrix(adjMat);
	}

	void printVector(std::vector<int> vertices)
	{
		for (auto& num : vertices)
			std::cout << num << " ";
	}

	void printVectorMatrix(std::vector<std::vector<int>> matrix)
	{
		for (std::vector<int>& vec : matrix)
		{
			for (auto& num : vec)
				std::cout << "num" << " ";
			std::cout << std::endl;
		}
	}
private:
	std::vector<int> vertices; // �����б���Ԫ�ش���������ֵ������������������������
	std::vector<std::vector<int>> adjMat; // �ڽӾ�������������Ӧ������������
};