#include <iostream>
#include <vector>
using namespace std;
void SumMaxTemp(vector<int>& vTemperature, const int nData, const int nSumNumber);
/*
���� ��ħ 9�ÿ� �б����� ������ �µ��� � ������ ������ �־����� ��, �������� ��ĥ
������ �µ��� ���� ���� ū ���� �˾ƺ����� �Ѵ�.
���� ���, ������ ���� 10�� ���� �µ��� �־����� ��, 3 -2 -4 -9 0 3 7 13 8 -3 ���
�������� ��Ʋ���� �µ��� ���� ������ ����.
�̶�, �µ��� ���� ���� ū ���� 21�̴�.
���� ������ �µ��� ������ ������ �־����� ��, �������� ��ĥ ������ �µ��� ���� ���� ū
���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�� �Է¼���
ù° �ٿ��� �� ���� ���� N�� K�� �� ���� ������ ���̿� �ΰ� ������� �־�����. ù ��°
���� N�� �µ��� ������ ��ü ��¥�� ���̴�. N�� 2 �̻� 100,000 �����̴�. �� ��° ���� K
�� ���� ���ϱ� ���� �������� ��¥�� ���̴�. K�� 1�� N ������ �����̴�. ��° �ٿ��� ����
������ �µ��� ��Ÿ���� N���� ������ ��ĭ�� ���̿� �ΰ� �־�����. �� ������ ��� -100
�̻� 100 �����̴�.

�� ��¼���
ù° �ٿ��� �µ��� �������� �������� K���� �µ��� ���� �ִ밡 �Ǵ� ���� ����Ѵ�.
*/

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int nData = 0;
	int nSumNumber = 0;
	cin >> nData>> nSumNumber;
	vector<int> vTemperature(nData);
	int i = 0;
	for ( i = 0; i < nData; ++i)
	{
		cin >> vTemperature[i];
	}
	SumMaxTemp(vTemperature, nData, nSumNumber);
	return 0;
}

void SumMaxTemp(vector<int>& vTemperature, const int nData, const int nSumNumber)
{
	int i = 0;
	int nSum = 0;
	int MaxSum = 0x80000000;

	for (i = 0; i < nData - nSumNumber + 1; ++i)
	{
		for (int j = i; j < (i + nSumNumber); ++j)
		{
			nSum += vTemperature[j];
		}

		if (MaxSum < nSum)
			MaxSum = nSum;
		nSum = 0;
	}
	cout << MaxSum;
}