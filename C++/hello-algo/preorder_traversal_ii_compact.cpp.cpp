//#include "basic.h"
//
//class PTIICompact
//{
//public:
//	// ǰ�����:�����
//	void preOrder(TreeNode* root)
//	{
//		if (root == nullptr) return;
//		// ����
//		path.push_back(root);
//		if (root->val == 7)
//			// ��¼��
//			res.push_back(root);
//		preOrder(root->left);
//		preOrder(root->right);
//		// ����
//		path.pop_back();
//	}
//
//private:
//	std::vector<TreeNode*> res, path;
//};