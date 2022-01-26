#include <iostream>
using namespace std;
#define MAXNUM 99999
void CountNumber(const int nInputNum);

/*
자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자는 몇 개 쓰였을까요?
예를 들어 1부터 15까지는 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5으로
총 21개가 쓰였음을 알 수 있습니다.
자연수 N이 입력되면 1부터 N까지 각 숫자는 몇 개가 사용되었는지를 구하는 프로그램을 작
성하세요.

첫 번째 줄에는 자연수 N(3<=N<100,000)이 주어진다.

첫 번째 줄에 숫자의 총개수를 출력한다.

*/

int main(void)
{
	int nInputNum = 0;
	cin >> nInputNum;
	CountNumber(nInputNum);

	return 0;
}

void CountNumber(const int nInputNum)
{
	int szLookUpTabe[5] = { 1,2,3,4,5 };		//LookUp배열 이용

	int i = 0;
	int j = 0;
	int nDigit = 1;
	int nCount = 0;

	//i를 nInputNum까지 올리고 i를 자리수를 더함, j가 자릿수를 나타나냄
	for (i = 1; i <= nInputNum; ++i)
	{
		for (j = 1; j <= 5; ++j)
		{
			if (i / (nDigit*10) == 0)
			{
				nDigit = j;
				break;
			}
			nDigit *= 10;
		}

		nCount += szLookUpTabe[nDigit-1];
		nDigit = 1;
	}

	cout << nCount;
}
