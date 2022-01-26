#include <iostream>
using namespace std;
#define MAXLENTH 100

void CountNum(const char szNumString[]);
int MaxNum(const int szArray[], const int nSize);

/*
N�ڸ��� �ڿ����� �ԷµǸ� �Էµ� �ڿ����� �ڸ��� �� ���� ���� ���� ���ڸ� ����ϴ� ��
�α׷��� �ۼ��ϼ���.
���� ��� 1230565625��� �ڿ����� �ԷµǸ� 5�� 3�� ���Ǿ� ���� ���� ���� �����Դ�
��. ���� ���� ���� ��� �� �� ���� ū ���� ����ϼ���.

ù �ٿ� �ڿ����� �Էµ˴ϴ�. �ڿ����� ���̴� 100�� ���� �ʽ��ϴ�.

*/

int main(void)
{
	char szInputNumString[MAXLENTH] = { 0 };
	cin >> szInputNumString;
	CountNum(szInputNumString);
	return 0;
}

void CountNum(const char szNumString[])
{ 
	//szCounter�� 0������ 0�� ����, 1������ 1�� ����...
	int szCounter[10] = { 0 };
	int i = 0;
	int nTrial;
	
	while (true)
	{
		if (szNumString[i] == '\0')
		{
			break;
		}


		szCounter[szNumString[i] - '0']+=1;
		++i;
	}

	cout << MaxNum(szCounter, sizeof(szCounter) / sizeof(int));
}

int MaxNum(const int szArray[], const int nSize)
{
	int i = 0;
	int nMaxNum = szArray[0];

	for (i = 0; i < nSize; ++i)
	{
		if (szArray[i] > nMaxNum)
			nMaxNum = i;

		if (szArray[i] == nMaxNum)
		{
			if (szArray[i] > nMaxNum)
				nMaxNum = i;
		}
	}

	return nMaxNum;
}