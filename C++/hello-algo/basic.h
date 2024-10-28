#pragma once

#include <iostream>

#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <unordered_set>
#include <unordered_map>

#include <algorithm>
#include <functional>

#include <exception>

typedef int Vertex;

/* ����ڵ�ṹ�� */
struct ListNode
{
	int val;								   // �ڵ�ֵ
	ListNode* next;							   // ָ����һ�ڵ��ָ��
	ListNode(int x) : val(x), next(nullptr) {} // ���캯��
};

/* ˫������ڵ� */
struct DoublyListNode
{
	int val; // �ڵ�ֵ 
	DoublyListNode* next; // ��̽ڵ�ָ��
	DoublyListNode* prev; // ǰ���ڵ�ָ��
	DoublyListNode(int val) : val(val), prev(nullptr), next(nullptr) {}
};

/* ��ֵ�� */
struct Pair
{
public:
	int key;
	std::string val;
	Pair(int key, std::string val)
	{
		this->key = key;
		this->val = val;
	}
};

/* �������ڵ�ṹ�� */
struct TreeNode
{
	int val; // �ڵ�ֵ
	TreeNode* left, * right; // �����ӽڵ�ָ��
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

/* AVL ���ڵ��� */
struct AVLTreeNode
{
	int val{}; // �ڵ�ֵ
	int height = 0; // �ڵ�߶�
	AVLTreeNode* left{}; // ���ӽڵ�
	AVLTreeNode* right{}; // ���ӽڵ�
	AVLTreeNode() = default;
	explicit AVLTreeNode(int x) : val(x) {}
};

inline void freeMemoryLinkedList(ListNode* node)
{
	while (node)
	{
		ListNode* temp = node;
		node = node->next;
		delete temp;
	}
}