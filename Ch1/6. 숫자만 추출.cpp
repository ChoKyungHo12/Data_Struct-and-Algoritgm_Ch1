#include <iostream>
using namespace std;
#define STRINGSIZE 50

void RefineNum(char szArbitString[], int& nRefineNum);
void CalcDivisor(const int& nRefineNum, int& nDivisorCont);
void showInfo(int nRefineNum, int nDivisorCont);

/*
���ڿ� ���ڰ� �����ִ� ���ڿ��� �־����� �� �� ���ڸ� �����Ͽ� �� ������� �ڿ����� ��
��ϴ�. ������� �ڿ����� �� �ڿ����� ��� ������ ����մϴ�.
���� ��t0e0a1c2her������ ���ڸ� �����ϸ� 0, 0, 1, 2�̰� �̰��� �ڿ����� ����� 12�� �˴�
��. �� ù �ڸ� 0�� �ڿ���ȭ �� �� �����մϴ�. ����� 12�� ����ϰ�, ���� �ٿ� 12�� ��
���� ������ ����ϸ� �˴ϴ�.
�����Ͽ� ��������� �ڿ����� 100,000,000�� ���� �ʽ��ϴ�.
*/

int main(void)
{
	char szArbitString[STRINGSIZE] = {'\0'};
	cin >> szArbitString;
	int nRefineNum = 0;
	int nDivisorCont = 0;

	RefineNum(szArbitString, nRefineNum);
	CalcDivisor(nRefineNum, nDivisorCont);
	showInfo(nRefineNum, nDivisorCont);
	return 0;
}

void RefineNum(char szArbitString[], int& nRefineNum)
{
	char szNumSting[STRINGSIZE] = {'\0'};
	int i = 0;
	int nCountNum = 0;

	//���ڸ��� ã�Ƽ� szNumSting�� ���ڿ��� ����
	for (i = 0; i < STRINGSIZE; i++)
	{
		if ((szArbitString[i] >= '0') && (szArbitString[i] <= '9'))
		{
			szNumSting[nCountNum] = szArbitString[i];
			nCountNum++;
		}
	}
	
	//���ڿ��� ���������� �ٲ�
	nRefineNum = atoi(szNumSting);
}

void CalcDivisor(const int& nRefineNum, int& nDivisorCont)
{
	int i = 0;
	for (i = 1; i <= nRefineNum; i++)
	{
		if ((nRefineNum % i) == 0)
		{
			nDivisorCont++;
		}
	}
}

void showInfo(int nRefineNum, int nDivisorCont)
{
	cout << nRefineNum << endl;
	cout << nDivisorCont << endl;
}