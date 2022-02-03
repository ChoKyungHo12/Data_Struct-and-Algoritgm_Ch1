#include <iostream>
using namespace std;
#define MAXARRAY 100
#define MAXNUM 100000
int Reverse(int nInputNum);
/*
N개의 자연수가 입력되면 각 자연수를 뒤집은 후 그 뒤집은 수가 소수이면 그 수를 출력하는
프로그램을 작성하세요. 예를 들어 32를 뒤집으면 23이고, 23은 소수이다. 그러면 23을 출력
한다. 단 910를 뒤집으면 19로 숫자화 해야 한다. 첫 자리부터의 연속된 0은 무시한다.
뒤집는 함수인 int reverse(int x) 와 소수인지를 확인하는 함수 bool isPrime(int x)를 반드시
작성하여 프로그래밍 한다.

첫 줄에 자연수의 개수 N(3<=N<=100)이 주어지고, 그 다음 줄에 N개의 자연수가 주어진다.
각 자연수의 크기는 100,000를 넘지 않는다.

첫 줄에 뒤집은 소수를 출력합니다. 출력순서는 입력된 순서대로 출력합니다.

*/

int main(void)
{
	int nCount = 0;
	int i = 0;
	int szNum[MAXARRAY] = { 0 };
	Reverse(51);
	cin >> nCount;
	for (i = 0; i < nCount; ++i)
	{
		cin >> szNum[i];
	}

	int szReverNum[MAXARRAY] = { 0 };
	
}

int Reverse(int nInputNum)
{
	int szLookUpTable[10] = { 1,10,100,1000,10000,100000,1000000,10000000,10000000,100000000};
	int i = 0;
	int nDigit = MAXNUM*10;
	int nReversedNum = 0;
	int nFirstZero = 0;

	while (true)
	{
		nDigit = nDigit / 10;

		if (nDigit == 0)
			break;

		if ((nInputNum / nDigit) == 0)
		{
			continue;
		}

		nReversedNum = (nInputNum / nDigit)* szLookUpTable[i];
		nInputNum  -= nInputNum / 10;
		++i;
	}

	return nReversedNum;
}