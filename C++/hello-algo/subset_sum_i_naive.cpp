//#include "basic.h"
//
//// �����㣺�Ӽ��� I
//void backtrack(std::vector<int>& state, int target, int total, std::vector<int>& choices,
//	std::vector<std::vector<int>>& res)
//{
//	// �Ӽ��͵��� target ʱ����¼��
//	if (total == target)
//	{
//		res.push_back(state);
//		return;
//	}
//	// ��������ѡ��
//	for (size_t i = 0; i < choices.size(); i++)
//	{
//		// ��֦�����Ӽ��ͳ��� target ����������ѡ��
//		if (total + choices[i] > target)
//			continue;
//		// ���ԣ�����ѡ�񣬸���Ԫ�غ� total
//		state.push_back(choices[i]);
//		// ������һ��ѡ��
//		backtrack(state, target, total + choices[i], choices, res);
//		// ���ˣ�����ѡ�񣬻ָ���֮ǰ��״̬
//		state.pop_back();
//	}
//}
//
//// ����Ӽ��� �ɡ�(�����ظ��Ӽ�)
//std::vector<std::vector<int>> subsetSumINaive(std::vector<int>& nums, int target)
//{
//	std::vector<int> state; // ״̬���Ӽ���
//	int total = 0; // �Ӽ���
//	std::vector<std::vector<int>> res; // ����б��Ӽ��б�
//	backtrack(state, target, total, nums, res);
//	return res;
//}