#include <iostream>
using namespace std;
#define MAX_N 100
#define MAXNUM 10000000
void MakeDigit(int szInputNum[], const int nSize);

int ReturnMaxNumIndex(const int szInputNum[], const int szArray[], const int nSize);
/*
N���� �ڿ����� �ԷµǸ� �� �ڿ����� �ڸ����� ���� ���ϰ�, �� ���� �ִ��� �ڿ����� ���
�ϴ� ���α׷��� �ۼ��ϼ���. �� �ڿ����� �ڸ����� ���� ���ϴ� �Լ��� int digit_sum(int x)��
�� �ۼ��ؼ� ���α׷��� �ϼ���.

ù �ٿ� �ڿ����� ���� N(3<=N<=100)�� �־�����, �� ���� �ٿ� N���� �ڿ����� �־�����.
�� �ڿ����� ũ��� 10,000,000�� ���� �ʴ´�.

�ڸ����� ���� �ִ��� �ڿ����� ����Ѵ�. �ڸ����� ���� �ִ��� �ڿ����� �������� ��� ��
�� ���� ���� ū ���� ����մϴ�.
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
		nTrialArray = szInputNum[i];								//���� �迭�� ����Ʈ���� �ʱ� ����

		//���� ū 10,000,000���� ��������
		for (j = 0; j < 8; ++j)
		{	
			nTrial = (nTrialArray / nMaxNum);						//�� ���
			if (nTrial != 0)
			{
				nTrialArray = (nTrialArray % (nTrial * nMaxNum));		//���� �� ������
				nSum += nTrial;											//���� ���� ����
			}
			nMaxNum /= 10;
		}

		szDigitSum[i] = nSum;										//digit���� ���� szDigitSum[]�� ����
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
		//digit�� �ִ� ���ϱ�
		if (szDigitArray[i] > nTrial)
		{
			nTrial = szDigitArray[i];
			nMaxIndex = i;
		}

		//digit������ ���� ���� ��� ���� �����Ϳ� ��
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