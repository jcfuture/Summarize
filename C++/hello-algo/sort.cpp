//#include "basic.h"
//
//class Sort
//{
//public:
//	// ѡ������
//	void selectionSort(std::vector<int>& nums)
//	{
//		int n = nums.size();
//		// ��ѭ����δ��������Ϊ [i, n - 1]
//		for (int i = 0; i < n - 1; i++)
//		{
//			// ��ѭ�� �ҵ�δ���������ڵ���СԪ��
//			int k = i;
//			for (int j = i + 1; i < n; j++)
//			{
//				if (nums[j] < nums[k])
//					k = j; // ��¼��СԪ�ص�����
//			}
//			// ����СԪ����δ����������׸�Ԫ�ؽ���
//			std::swap(nums[i], nums[k]);
//		}
//	}
//
//	// ð������
//	void bubbleSort(std::vector<int>& nums)
//	{
//		// ��ѭ�� δ��������Ϊ [0, i]
//		for (int i = nums.size() - 1; i > 0; i--)
//		{
//			// ��ѭ�� ��δ��������[0, i]�е����Ԫ�ؽ�������������Ҷ�
//			for (int j = 0; j < i; j++)
//			{
//				if (nums[j] > nums[j + 1])
//					// ���� nums[j] �� nums[j + 1]
//					// ����ʹ���� std::swap() ����
//					std::swap(nums[j], nums[j + 1]);
//			}
//		}
//	}
//
//	// ð�����򣨱�־�Ż���
//	void bubbleSortWithFlag(std::vector<int>& nums)
//	{
//		// ��ѭ�� δ��������Ϊ [0, i]
//		for (int i = nums.size() - 1; i > 0; i--)
//		{
//			bool falg = false; // ��ʼ����־λ
//			// ��ѭ�� ��δ��������[0, i]�е����Ԫ�ؽ�������������Ҷ�
//			for (int j = 0; j < i; j++)
//			{
//				if (nums[j] > nums[j + 1])
//				{
//					// ���� nums[j] �� nums[j + 1]
//					// ����ʹ���� std::swap() ����
//					std::swap(nums[j], nums[j + 1]);
//					falg = true;
//				}
//			}
//			if (!falg)
//				break; // ����ð��Ϊ�����κ�Ԫ�أ�ֱ������
//		}
//	}
//
//	// ��������
//	void insertionSort(std::vector<int>& nums)
//	{
//		// ��ѭ�� δ��������Ϊ [0, i - 1]
//		for (int i = 1; i < nums.size(); i++)
//		{
//			int base = nums[i], j = i - 1;
//			// ��ѭ�� ��δ��������[0, i]�е����Ԫ�ؽ�������������Ҷ�
//			while (j >= 0 && nums[j] > base)
//			{
//				nums[j + 1] = nums[j]; // �� nums[j] �����ƶ�һλ
//				j--;
//			}
//			nums[j + 1] = base; // �� base ��ֵ����ȷλ��
//		}
//	}
//
//	// Ԫ�ؽ���
//	void swap(std::vector<int>& nums, int i, int j)
//	{
//		int temp = nums[i];
//		nums[i] = nums[j];
//		nums[j] = temp;
//	}
//
//	// �ڱ�����
//	int partition(std::vector<int>& nums, int left, int right)
//	{
//		// �� nums[left] Ϊ��׼��
//		int i = left, j = right;
//		while (i < j)
//		{
//			while (i < j && nums[j] >= nums[left])
//				j--; // �����������׸�С�ڻ�׼����Ԫ��
//			while (i < j && nums[i] <= nums[left])
//				i--; // �����������׸�С�ڻ�׼����Ԫ��
//			swap(nums, i, j); // ����������Ԫ��
//		}
//		swap(nums, i, left); // ����׼����������������ķֽ���
//		return i;
//	}
//
//	// ��������
//	void quickSort(std::vector<int>& nums, int left, int right)
//	{
//		// �������鳤��Ϊ 1 ʱ��ֹ�ݹ�
//		if (left >= right)
//			return;
//		// �ڱ�����
//		int pivot = partition(nums, left, right);
//		// �ݹ��������顢��������
//		quickSort(nums, left, pivot - 1);
//		quickSort(nums, pivot + 1, right);
//	}
//
//	// ѡȡ������ѡԪ�ص���λ��
//	int midianThree(std::vector<int>& nums, int left, int mid, int right)
//	{
//		int l = nums[left], m = nums[mid], r = nums[right];
//		if ((l <= m && m <= r) || (r <= m && m <= l))
//			return mid; // m �� l �� r ֮��
//		if ((m <= l && l <= r) || (r <= l && l <= m))
//			return left; // l �� m �� r ֮��
//		return right;
//	}
//
//	// �ڱ�����(������λ��)
//	int partitionT(std::vector<int>& nums, int left, int right)
//	{
//	    // ѡȡ������ѡԪ�ص���λ��
//		int mid = midianThree(nums, left, (left + right) / 2, right);
//		// ����λ������ֵ���������
//		swap(nums, left, mid);
//		// �� nums[left] Ϊ��׼��
//		int i = left, j = right;
//		while (i < j)
//		{
//			while (i < j && nums[j] >= nums[left])
//				j--; // �����������׸�С�ڻ�׼����Ԫ��
//			while (i < j && nums[i] <= nums[left])
//				i--; // �����������׸�С�ڻ�׼����Ԫ��
//			swap(nums, i, j); // ����������Ԫ��
//		}
//		swap(nums, i, left); // ����׼����������������ķֽ���
//		return i;
//	}
//
//	// ��������β�ݹ��Ż���
//	void quickSortR(std::vector<int>& nums, int left, int right)
//	{
//		// �������鳤��Ϊ 1 ʱ��ֹ�ݹ�
//		while (left < right)
//		{
//			// �ڱ�����
//			int pivot = partition(nums, left, right);
//			// �������������н϶̵��Ǹ�ִ�п�������
//			if (pivot - left < right - pivot)
//			{
//				quickSort(nums, left, pivot - 1); // �ݹ�������������
//				left = pivot + 1; // ʣ��δ��������Ϊ [pivot + 1, right]
//			}
//			else
//			{
//				quickSort(nums, pivot + 1, right); // �ݹ�������������
//				right = pivot - 1; // ʣ��δ��������Ϊ [left, pivot - 1]
//			}
//		}
//	}
//
//	// �ϲ������������������
//	void merge(std::vector<int>& nums, int left, int mid, int right)
//	{
//		// ������������Ϊ [left, mid],������������Ϊ [mid + 1, right]
//		// ����һ����ʱ���� tmp�� ���ڴ�źϲ���Ľ��
//		std::vector<int> tmp(right - left + 1); 
//		// ��ʼ����������������������ʼ����
//		int i = left, j = mid + 1, k = 0;
//		// �����������鶼����Ԫ��ʱ�����бȽϲ�����С��Ԫ�ظ��Ƶ���ʱ������
//		while (i <= mid && j <= right)
//		{
//			if (nums[i] <= nums[j])
//				tmp[k++] = nums[i++];
//			else
//				tmp[k++] = nums[j++];
//		}
//		// ��������������������ʣ��Ԫ�ظ��Ƶ���ʱ������
//		while (i <= mid)
//			tmp[k++] = nums[i++];
//		while (i <= right)
//			tmp[k++] = nums[i++];
//		// ����ʱ���� tmp �е�Ԫ�ظ��ƻص�ԭ���� nums �Ķ�Ӧ����
//		for (k = 0; k < tmp.size(); k++)
//			nums[left + k] = tmp[k];
//	}
//
//	// �鲢����
//	void mergeSort(std::vector<int>& nums, int left, int right)
//	{
//		// ��ֹ����
//		if (left >= right) return; // �������鳤��Ϊ 1 ʱ��ֹ�ݹ�
//		// ���ֽ׶�
//		int mid = (left + right) / 2; // �����е�
//		mergeSort(nums, left, mid); // �ݹ���������
//		mergeSort(nums, mid + 1, right); // �ݹ���������
//		// �ϲ��׶�
//		merge(nums, left, mid, right);
//	}
//
//	// �ѵĳ���Ϊ n���ӽڵ� i ��ʼ���Ӷ����׶ѻ�
//	void siftDown(std::vector<int>& nums, int n, int i)
//	{
//		while (true)
//		{
//			// �жϽڵ� i��l, r ��ֵ���Ľڵ㣬��Ϊ ma
//			int l = 2 * i + 1;
//			int r = 2 * i + 2;
//			int ma = i;
//			if (l < n && nums[l] > nums[ma])
//				ma = l;
//			if (r < n && nums[r] > nums[ma])
//				ma = r;
//			// ���ڵ� i �������� l, r Խ�磬����������ѻ�������
//			if (ma == i) break;
//			// �������ڵ�
//			std::swap(nums[i], nums[ma]);
//			// ѭ�����¶ѻ�
//			i = ma;
//		}
//	}
//
//	// ������
//	void heapSort(std::vector<int>& nums)
//	{
//		// ���Ѳ������ѻ����ڵ�������������нڵ�
//		for (int i = nums.size() / 2 - 1; i >= 0; --i)
//			siftDown(nums, nums.size(), i);
//		// �Ӷ�����ȡ���Ԫ�أ�ѭ�� n - 1 ��
//		for (int i = nums.size() - 1; i > 0; --i)
//		{
//			// �������ڵ�������Ҷ�ڵ㣨������Ԫ����βԪ�أ�
//			std::swap(nums[0], nums[i]);
//			// �Ը��ڵ�Ϊ��㣬�Ӷ����׽��жѻ�
//			siftDown(nums, i, 0);
//		}
//	}
//
//	// Ͱ����
//	void bucketSort(std::vector<float>& nums)
//	{
//		// ��ʼ�� k = n / 2 ��Ͱ��Ԥ����ÿ��Ͱ���� 2 ��Ԫ��
//		int k = nums.size() / 2;
//		std::vector<std::vector<float>> buckets(k);
//		// 1��������Ԫ�ط��䵽����Ͱ��
//		for (float num : nums)
//		{
//			// �������ݷ�ΧΪ [0, 1), ʹ�� num * k ӳ�䵽��Χ [0, k -1]
//			int i = num * k;
//			// �� num ��ӽ�Ͱ bucket_idx
//			buckets[i].push_back(num);
//		}
//		// 2���Ը���Ͱ��������
//		for (std::vector<float>& bucket : buckets)
//			// ʹ��������������Ҳ�����滻�����������㷨
//			std::sort(bucket.begin(), bucket.end());
//		// 3������Ͱ�ϲ����
//		int i = 0;
//		for (std::vector<float>& bucket : buckets)
//			for (float num : bucket)
//				nums[i++] = num;
//	}
//
//	// ��������
//	// ��ʵ�֣��޷������������
//	void countingSortNaive(std::vector<int>& nums)
//	{
//		// 1��ͳ���������Ԫ�� m
//		int m = 0;
//		for (int num : nums)
//			m = std::max(m, num);
//		// 2��ͳ�Ƹ����ֵĳ��ִ���
//		// counter[num] ���� num �ĳ��ִ���
//		std::vector<int> counter(m + 1, 0);
//		for (int num : nums)
//			counter[num]++;
//		// 3������ counter ������Ԫ������ԭ���� nums
//		int i = 0;
//		for (int num = 0; num < m + 1; num++)
//		{
//			for (int j = 0; j < counter[num]; j++, i++)
//			{
//				nums[i] = num;
//			}
//		}
//	}
//
//	// ��������
//	// ����ʵ�֣���������󣬲������ȶ�����
//	void countingSort(std::vector<int>& nums)
//	{
//		// 1��ͳ���������Ԫ�� m
//		int m = 0;
//		for (int num : nums)
//			m = std::max(m, num);
//		// 2��ͳ�Ƹ����ֵĳ��ִ���
//		// counter[num] ���� num �ĳ��ִ���
//		std::vector<int> counter(m + 1, 0);
//		for (int num : nums)
//			counter[num]++;
//		// 3���� counter ��ǰ׺�ͣ������ִ���ת��Ϊβ����
//		// �� counter[num] - 1 �� num �� res �����һ�γ��ֵ�����
//		for (int i = 0; i < m; i++)
//			counter[i + 1] = counter[i];
//		// 4��������� nums, ����Ԫ������������ res
//		// ��ʼ������ res ���ڼ�¼���
//		int n = nums.size();
//		std::vector<int> res(n);
//		for (int i = n - 1; i >= 0; i--)
//		{
//			int num = nums[i];
//			res[counter[num] - 1] = num; // �� num ���õ���Ӧ������
//			counter[num]--; // ��ǰ׺���Լ� 1���õ��´η��� num ������
//		}
//		// ʹ�ý������ res ����ԭ���� nums
//		nums = res;
//	}
//
//	// ��ȡԪ�� num �ĵ� k λ������ exp = 10^(k - 1)
//	int digit(int num, int exp)
//	{
//		// ���� exp ���� k ���Ա����ڴ��ظ�ִ�а���Ĵη�����
//		return (num / exp) % 10;
//	}
//
//	// �������򣨸��� num �� k λ����
//	void countingSortDigit(std::vector<int>& nums, int exp)
//	{
//		// ʮ���Ƶ�λ��Χλ 0~9 �������Ҫ����Ϊ 10 ��Ͱ����
//		std::vector<int> counter(10, 0);
//		int n = nums.size();
//		// ͳ�� 0~9 �����ֵĳ��ִ���
//		for (int i = 0; i < n; i++)
//		{
//			int d = digit(nums[i], exp); // ��ȡ nums[i] �ĵ� k λ����Ϊ d
//			counter[d]++; // ͳ������ d �ĳ��ִ���
//		}
//		// ��ǰ׺�ͣ������ָ���ת��Ϊ��������
//		for (int i = 1; i < 10; i++)
//			counter[i] += counter[i - 1];
//		// �������������Ͱ��ͳ�ƽ��������Ԫ������ res
//		std::vector<int> res(n, 0);
//		for (int i = n - 1; i >= 0; i--)
//		{
//			int d = digit(nums[i], exp);
//			int j = counter[d] - 1; // ��ȡ d �������е����� j
//			res[j] = nums[i]; // ����ǰԪ���������� j
//			counter[d]--; // �� d �������� 1
//		}
//		// ʹ�ý������ res ����ԭ���� nums
//		for (int i = 0; i < n; i++)
//			nums[i] = res[i];
//	}
//
//	// ��������
//	void radixSort(std::vector<int>& nums)
//	{
//		// ��ȡ��������Ԫ�أ������ж����λ��
//		int m = *max_element(nums.begin(), nums.end());
//		// ���մӵ�λ����λ��˳�����
//		for (int exp = 1; exp <= m; exp *= 10)
//			// ������Ԫ�صĵ� k λִ�м�������
//			// k = 1 -> exp = 1
//			// k = 2 -> exp = 10
//			// �� exp = 10^(k - 1)
//			countingSortDigit(nums, exp);
//	}
//};