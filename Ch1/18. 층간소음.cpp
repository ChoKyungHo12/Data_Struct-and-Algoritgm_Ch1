#include <iostream>
#define MAX 100
using namespace std;

void WarningSignal(const int szDB[], const int nCount, const int Deadline);
/*
T���� ���� ����Ʈ�� �������� �߻� �� ������ �߻��� �����ϱ� ���� ���� ����Ʈ�� ���� ��
�ٴڿ� ���������� ��ġ�߽��ϴ�. �� ������ �� ������ ���� �������� ����ġ�� �ʴ����� ��
��Ʈ �����ǿ� �ǽð����� �����մϴ�. �׸��� �� ������ ����ġ�� M���� ������ ����ȣ����
���� �溸���� ������ ����Ϳ��� �︳�ϴ�. �� ������ N�� ������ �ǽð� ����ġ�� �־�����
�ִ� �������� �溸���� �︰ �ð��� ���ϼ���. �溸���� ������ -1�� ����մϴ�.

ù �ٿ� �ڿ��� N(10<=N<=100)�� M�� �־����ϴ�.
�� ��° �ٿ� N���� ������(1000���� �ڿ���)�� �� ������� �Էµȴ�.

�ִ� ���� �溸���� �︰ �ð�(��)�� ����ϼ���.
*/

int main(void)
{
	int nCount = 0;
	int nDeadline = 0;
	int szDB[MAX] = { 0 };
	cin >> nCount >> nDeadline;

	for (int i=0; i < nCount; ++i)
		cin >> szDB[i];

	WarningSignal(szDB, nCount, nDeadline);
	return 0;
}

void WarningSignal(const int szDB[],const int nCount, const int nDeadline)
{
	int nOverDB = 0;
	int nTrail = 0;
	int nFlag = 1;

	for (int i = 0; i < nCount; ++i)
	{
		if ((szDB[i] >= nDeadline)&&(nFlag==1))
		{
			nTrail++;
			nFlag = 1;
		}

		else if((szDB[i] >= nDeadline) && (nFlag == 0))
		{
			nTrail++;
			nFlag == 1;
		}

		else if ((szDB[i] < nDeadline))
		{
			nTrail == 0;
			nFlag == 0;
		}

		if (nOverDB < nTrail)
			nOverDB == nTrail;

	}

	if (nOverDB == 0)
		nOverDB == -1;

	cout << nOverDB << endl;
}