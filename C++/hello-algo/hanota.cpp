//#include "basic.h"
//
//// �ƶ�һ��Բ��
//void move(std::vector<int>& src, std::vector<int>& tar)
//{
//	// �� src �����ó�һ��Բ��
//	int pan = src.back();
//	src.pop_back();
//	// ��Բ�̷��� tar ����
//	tar.push_back(pan);
//}
//
//// ��⺺ŵ������ f(i)
//void dfs(int i, std::vector<int>& src, std::vector<int>& buf, std::vector<int>& tar)
//{
//	// �� src ֻʣ��һ��Բ�̣���ֱ�ӽ����Ƶ� tar
//	if (i == 1)
//	{
//		move(src, tar);
//		return;
//	}
//	// ������ f(i - 1): �� src ���� i - 1 ��Բ�̽��� tar �Ƶ� buf
//	dfs(i - 1, src, tar, buf);
//	// ������ f(1): �� src ʣ��һ��Բ���Ƶ� tar
//	move(src, tar);
//	// ������ f(i - 1): �� buf ���� i - 1 ��Բ�̽��� src �Ƶ� tar
//	dfs(i - 1, buf, src, tar);
//}
//
//// ��⺺ŵ������
//void solveHanota(std::vector<int>& A, std::vector<int>& B, std::vector<int>& C)
//{
//	int n = A.size();
//	// �� A ���� n ��Բ�̽��� B �Ƶ� C
//	dfs(n, A, B, C);
//}