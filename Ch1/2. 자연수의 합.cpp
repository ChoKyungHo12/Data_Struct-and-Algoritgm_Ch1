#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define UNDER_BOUNDARY 1
#define UPPER_BOUNDARY 100
void InputNum(int& nStartNum, int& mMultnEndNumiple);
void TotalSum(const int nStartNum, const int nEndNum);

//�ڿ��� A, B�� �־����� A���� B������ ���� ���İ� �Բ� ����ϼ���
int main(void)
{
	int nStartNum = 0;
	int nEndNum = 0;
	InputNum(nStartNum, nEndNum);
	TotalSum(nStartNum, nEndNum);
	return 0;
}

void InputNum(int& nStartNum, int& mMultnEndNumiple)
{
	while (TRUE)
	{
		cout << "A�� " << UNDER_BOUNDARY << "���� ���ų� ũ��, B�� " << UPPER_BOUNDARY << "���� �۰� �Է�(������ ������ �Է�)" << endl;
		scanf_s("%d %d", &nStartNum, &mMultnEndNumiple);

		//���� ���ǿ� �´� ���ڸ� �Է��ϴ��� Ȯ��
		if ((UNDER_BOUNDARY <= nStartNum) && (nStartNum < mMultnEndNumiple) && (mMultnEndNumiple <= UPPER_BOUNDARY))
		{
			cout << "���� ����!" << endl;
			break;
		}
	}
}

void TotalSum(const int nStartNum, const int nEndNum)
{
	int nSumNum = nStartNum;
	int nTotal = 0;

	while (TRUE)
	{
		cout << nSumNum;
		//+�� �������� �ѹ� ������ �ϱ� ������(=�� ���� ��) ���ǿ� �־���
		if(nEndNum > nSumNum)
			putchar('+');

		nTotal += nSumNum;
		nSumNum++;

		//Ż������
		if (nEndNum < nSumNum)
		{
			cout << " = " << nTotal << endl;
			break;
		}
	}
}