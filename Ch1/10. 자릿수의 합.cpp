#include <iostream>
using namespace std;
#define MAX_N 100
#define MAXNUM 10000000
void MakeDigit(int szInputNum[], const int nSize);

int ReturnMaxNumIndex(const int szInputNum[], const int szArray[], const int nSize);
/*
N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인 자연수를 출력
하는 프로그램을 작성하세요. 각 자연수의 자릿수의 합을 구하는 함수를 int digit_sum(int x)를
꼭 작성해서 프로그래밍 하세요.

첫 줄에 자연수의 개수 N(3<=N<=100)이 주어지고, 그 다음 줄에 N개의 자연수가 주어진다.
각 자연수의 크기는 10,000,000를 넘지 않는다.

자릿수의 합이 최대인 자연수를 출력한다. 자리수의 합이 최대인 자연수가 여러개인 경우 그
중 값이 가장 큰 값을 출력합니다.
*/

int main(void)
{
	int nCount = 0;
	cin >> nCount;
	int i = 0;
	int szInputNum[MAX_N] = { 0 };
	for (i = 0; i < nCount ; ++i)
	{
		cin >> szInputNum[i];
	}
	MakeDigit(szInputNum, nCount);
}

void MakeDigit(int szInputNum[], const int nSize)
{
	int szDigitSum[100] = { 0 };
	int i = 0;
	int j = 0;
	int nMaxNum = MAXNUM;
	int nSum = 0;
	int nTrial = 0;
	int nTrialArray = 0;
	int nSolutionIndex = 0;


	for (i = 0; i < nSize; ++i)
	{         
		nTrialArray = szInputNum[i];								//원본 배열을 망가트리지 않기 위함

		//가장 큰 10,000,000부터 나누어줌
		for (j = 0; j < 8; ++j)
		{	
			nTrial = (nTrialArray / nMaxNum);						//몫 계산
			if (nTrial != 0)
			{
				nTrialArray = (nTrialArray % (nTrial * nMaxNum));		//몫을 뺀 나머지
				nSum += nTrial;											//몫을 따로 저장
			}
			nMaxNum /= 10;
		}

		szDigitSum[i] = nSum;										//digit계산된 것을 szDigitSum[]에 저장
		nSum = 0;
		nMaxNum = 10000000;
	}

	nSolutionIndex = ReturnMaxNumIndex(szInputNum, szDigitSum, nSize);
	printf("%d", szInputNum[nSolutionIndex]);
}

int ReturnMaxNumIndex(const int szInputNum[], const int szDigitArray[], const int nSize)
{
	int i = 0;
	int nMaxIndex = 0;
	int nTrial = szDigitArray[0];

	for (i = 0; i < nSize; ++i)
	{
		//digit의 최댓값 구하기
		if (szDigitArray[i] > nTrial)
		{
			nTrial = szDigitArray[i];
			nMaxIndex = i;
		}

		//digit숫자의 합이 같을 경우 원본 데이터와 비교
		if (szDigitArray[i] == nTrial)
		{
			if (szInputNum[i] > szInputNum[nMaxIndex])
			{
				nMaxIndex = i;
			}
		}
	}

	return nMaxIndex;
}