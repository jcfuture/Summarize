#include <iostream>
#include <vector>

#define MAX(A, B) A > B ? A : B

class Solution
{
public:
	long long maxEnergyBoost(std::vector<int>& energyDrinkA, std::vector<int>& energyDrinkB)
	{
		// �ȼ��� n �Ĵ�С
		int n = energyDrinkA.size();
		// ����һ����ά���飬���ڼ��������������
		
		// energy[i][0] �����ڵ� i ��Сʱ������ A ���ϵ����ֵ
		// energy[i][1] �����ڵ� i ��Сʱ������ B ���ϵ����ֵ
		std::vector<std::vector<long long>> energy(n + 1, std::vector<long long>(2, 0));


		for (int i = 0; i < n; i++)
		{
			/*
				��ʵ������ɴ���Ϸ��װ���ĵ��ӣ����ѡ�����װ���ˣ���֮ǰ��һ�׷����Ĺ�����������
				��ԭ�����Ĺ������ߵ㣬������������һ����װ����Ĺ������ߡ�

				��������ö�ά����ÿ i λ�������ӵ� buff �ڸ��ھ� i - 1 λ�ϵ���ֵ���Ƚ����ȡ���ֵ
				
				��ʵ����ҵ��뷨��ֱ�ӷֳɼ���С������жԱȣ����������ռ��Լ�ʱ�䶼�����Ӧ�Ľ������ӣ�
				���Ǳ��� pass �ˣ���Ϊ�Һ������м����˵ȥ����һ���������ϵ�ʱ������һ��ʱ��ļ���ġ�
				���� ���궨�� MAX�� ����һ���ܺõĴ������˵��һ����������ϱȵ�ǰ���ٺ��µ�����ֵ����
				�����ǲ��ǿ�����Ϊ����ȥ����һ�ҵľͿ��Եõ���ǰ������������һ�׷�����
			*/
			energy[i + 1][0] = MAX(energy[i][0] + energyDrinkA[i], energy[i][1]);
			energy[i + 1][1] = MAX(energy[i][1] + energyDrinkB[i], energy[i][0]);
			
		}

		// ������󹥻����ķ���
		return MAX(energy[n][0], energy[n][1]);
	}
};