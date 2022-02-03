#include <iostream>
using namespace std;
#define MAXARRAY 100
#define MAXNUM 100000
int Reverse(int nInputNum);
/*
N���� �ڿ����� �ԷµǸ� �� �ڿ����� ������ �� �� ������ ���� �Ҽ��̸� �� ���� ����ϴ�
���α׷��� �ۼ��ϼ���. ���� ��� 32�� �������� 23�̰�, 23�� �Ҽ��̴�. �׷��� 23�� ���
�Ѵ�. �� 910�� �������� 19�� ����ȭ �ؾ� �Ѵ�. ù �ڸ������� ���ӵ� 0�� �����Ѵ�.
������ �Լ��� int reverse(int x) �� �Ҽ������� Ȯ���ϴ� �Լ� bool isPrime(int x)�� �ݵ��
�ۼ��Ͽ� ���α׷��� �Ѵ�.

ù �ٿ� �ڿ����� ���� N(3<=N<=100)�� �־�����, �� ���� �ٿ� N���� �ڿ����� �־�����.
�� �ڿ����� ũ��� 100,000�� ���� �ʴ´�.

ù �ٿ� ������ �Ҽ��� ����մϴ�. ��¼����� �Էµ� ������� ����մϴ�.

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