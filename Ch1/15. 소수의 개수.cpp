#include <iostream>
using namespace std;
#define MAXNUM 200000
int CountPrimeNum(const int nInputNum);

/*
자연수 N이 입력되면 1부터 N까지의 소수의 개수를 출력하는 프로그램을 작성하세요.
만약 20이 입력되면 1부터 20까지의 소수는 2, 3, 5, 7, 11, 13, 17, 19로 총 8개입니다.
제한시간은 1초입니다.

첫 줄에 자연수의 개수 N(2<=N<=200,000)이 주어집니다.
첫 줄에 소수의 개수를 출력합니다.
*/

int main(void)
{
	int nInputNum = 0;
	cin >> nInputNum;
	int nCount = 0;
	nCount = CountPrimeNum(nInputNum);
	cout << nCount;
	return 0;
}

int CountPrimeNum(const int nInputNum)
{
	int i = 0;
	int j = 0;
	int nCountPrimeNum = 0;
	int nDestinPrime = 0;

	for (int i = 2; i <= nInputNum; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			if (i % j == 0)
			{
				nDestinPrime++;
				if (nDestinPrime == 3)
				{
					break;
				}
			}
		}
		if (nDestinPrime == 2)
			nCountPrimeNum++;
		nDestinPrime = 0;
	}

	return nCountPrimeNum;
}