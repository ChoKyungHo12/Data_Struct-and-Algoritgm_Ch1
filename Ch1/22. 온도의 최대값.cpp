#include <iostream>
#include <vector>
using namespace std;
void SumMaxTemp(vector<int>& vTemperature, const int nData, const int nSumNumber);
/*
매일 아침 9시에 학교에서 측정한 온도가 어떤 정수의 수열로 주어졌을 때, 연속적인 며칠
동안의 온도의 합이 가장 큰 값을 알아보고자 한다.
예를 들어, 다음과 같이 10일 간의 온도가 주어졌을 때, 3 -2 -4 -9 0 3 7 13 8 -3 모든
연속적인 이틀간의 온도의 합은 다음과 같다.
이때, 온도의 합이 가장 큰 값은 21이다.
매일 측정한 온도가 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰
값을 계산하는 프로그램을 작성하시오.

▣ 입력설명
첫째 줄에는 두 개의 정수 N과 K가 한 개의 공백을 사이에 두고 순서대로 주어진다. 첫 번째
정수 N은 온도를 측정한 전체 날짜의 수이다. N은 2 이상 100,000 이하이다. 두 번째 정수 K
는 합을 구하기 위한 연속적인 날짜의 수이다. K는 1과 N 사이의 정수이다. 둘째 줄에는 매일
측정한 온도를 나타내는 N개의 정수가 빈칸을 사이에 두고 주어진다. 이 수들은 모두 -100
이상 100 이하이다.

▣ 출력설명
첫째 줄에는 온도의 수열에서 연속적인 K일의 온도의 합이 최대가 되는 값을 출력한다.
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