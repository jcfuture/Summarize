//#include "basic.h"
//
//// �����㷨: ȫ���� I
//void backtrack(std::vector<int>& state, const std::vector<int>& choices, std::vector<bool>& selected,
//	std::vector<std::vector<int>>& res)
//{
//	// ��״̬���ȵ���Ԫ������ʱ����¼��
//	if (state.size() == choices.size())
//	{
//		res.push_back(state);
//		return;
//	}
//	// ��������ѡ��
//	for (int i = 0; i < choices.size(); i++)
//	{
//		int choice = choices[i];
//		// ��֦: �������ض�ѡ��Ԫ��
//		if (!selected[i])
//		{
//			// ����: ����ѡ�񣬸���״̬
//			selected[i] = true;
//			state.push_back(choice);
//			// ������һ��ѡ��
//			backtrack(state, choices, selected, res);
//			// ����: ����ѡ�񣬻ָ���֮ǰ��״̬
//			selected[i] = false;
//			state.pop_back();
//		}
//	}
//}
//
//// ȫ���� I
//std::vector<std::vector<int>> permutationsI(std::vector<int> nums)
//{
//	std::vector<int> state;
//	std::vector<bool> selected(nums.size(), false);
//	std::vector<std::vector<int>> res;
//	backtrack(state, nums, selected, res);
//	return res;
//}