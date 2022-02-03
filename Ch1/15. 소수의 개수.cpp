#include <iostream>
using namespace std;
#define MAXNUM 200000
int CountPrimeNum(const int nInputNum);

/*
�ڿ��� N�� �ԷµǸ� 1���� N������ �Ҽ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���.
���� 20�� �ԷµǸ� 1���� 20������ �Ҽ��� 2, 3, 5, 7, 11, 13, 17, 19�� �� 8���Դϴ�.
���ѽð��� 1���Դϴ�.

ù �ٿ� �ڿ����� ���� N(2<=N<=200,000)�� �־����ϴ�.
ù �ٿ� �Ҽ��� ������ ����մϴ�.
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