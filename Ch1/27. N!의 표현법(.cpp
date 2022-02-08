#include <iostream>
#include <vector>

using namespace std;

/*
임의의 N에 대하여 N!은 1부터 N까지의 곱을 의미한다. 이는 N이 커짐에 따라 급격하게 커진
다. 이러한 큰 수를 표현하는 방법으로 소수들의 곱으로 표현하는 방법이 있다. 먼저 소수는
2, 3, 5, 7, 11, 13... 순으로 증가함을 알아야 한다. 예를 들면 825는 (0 1 2 0 1)로 표현이
가능한데, 이는 2는 없고 3은 1번, 5는 2번, 7은 없고, 11은 1번의 곱이라는 의미이다. 101보
다 작은 임의의 N에 대하여 N 팩토리얼을 이와 같은 표기법으로 변환하는 프로그램을 작성해
보자. 출력은 아래 예제와 같이 하도록 한다.

▣ 입력설명
첫 줄에 자연수 N(3<=N<=1000)이 입력된다.

▣ 출력설명
소수의 곱으로 표현한다.
*/

int main(void)
{
	freopen("input.txt", "re", stdin);
	int nNumber = 0;
	
	cin >> nNumber;
	
	return 0;
}

//15번 함수 활용
vector<int>& MakePrimeNum(int nNumBer)
{
	vector<int> vnPrimeArray;

	int i = 0;
	int j = 0;
	int nCountPrimeNum = 0;
	int nDestinPrime = 0;

	for (int i = 2; i <= nNumBer; ++i)
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
			vnPrimeArray.push_back(i);
		nDestinPrime = 0;
	}


	for (i = 0; i < vnPrimeArray.size(); i++)
	{
		cout << vnPrimeArray[i] << endl;
	}

	return vnPrimeArray;
}