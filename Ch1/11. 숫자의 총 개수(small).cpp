#include <iostream>
using namespace std;
#define MAXNUM 99999
void CountNumber(const int nInputNum);

/*
�ڿ��� N�� �ԷµǸ� 1���� N������ �ڿ����� ���̿� ���� �� �� ���ڴ� �� �� ���������?
���� ��� 1���� 15������ 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5����
�� 21���� �������� �� �� �ֽ��ϴ�.
�ڿ��� N�� �ԷµǸ� 1���� N���� �� ���ڴ� �� ���� ���Ǿ������� ���ϴ� ���α׷��� ��
���ϼ���.

ù ��° �ٿ��� �ڿ��� N(3<=N<100,000)�� �־�����.

ù ��° �ٿ� ������ �Ѱ����� ����Ѵ�.

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
	int szLookUpTabe[5] = { 1,2,3,4,5 };		//LookUp�迭 �̿�

	int i = 0;
	int j = 0;
	int nDigit = 1;
	int nCount = 0;

	//i�� nInputNum���� �ø��� i�� �ڸ����� ����, j�� �ڸ����� ��Ÿ����
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
