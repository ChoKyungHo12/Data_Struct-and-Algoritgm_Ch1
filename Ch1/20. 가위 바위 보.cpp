#include <iostream>
#define MAXTIME 100
using namespace std;
void RockScissorPaper(const int szA[], const int szB[], const  int nCounterTime);
/*
A, B �� ����� ���������� ������ �մϴ�. �� N���� ������ �Ͽ� A�� �̱�� A�� ����ϰ�,
B�� �̱�� B�� ����մϴ�. ��� ��쿡�� D�� ����մϴ�.
����, ����, ���� ������ 1:����, 2:����, 3:���� ���ϰڽ��ϴ�.
���� ��� N=5�̸�
ȸ�� 1 2 3 4 5
A�� ���� 2 3 3 1 3
B�� ���� 1 1 2 2 3
���� A B A B D
�� ����� �� ȸ�� ����, ����, �� ������ �־����� �� ȸ�� ���� �̰���� ����ϴ� ���α׷�
�� �ۼ��ϼ���.

ù ��° �ٿ� ���� Ƚ���� �ڿ��� N(1<=N<=100)�� �־����ϴ�.
�� ��° �ٿ��� A�� �� ����, ����, �� ������ N�� �־����ϴ�.
�� ��° �ٿ��� B�� �� ����, ����, �� ������ N�� �־����ϴ�.

�� �ٿ� �� ȸ�� ���ڸ� ����մϴ�. ����� ���� D�� ����մϴ�.
*/

int main(void)
{
	int nCounterTime = 0;
	int i = 0;
	int szA[MAXTIME] = { 0 };
	int szB[MAXTIME] = { 0 };

	cin >> nCounterTime;
	for (i = 0; i < nCounterTime; ++i)
	{
		cin >> szA[i];
	}
	for (i = 0; i < nCounterTime; ++i)
	{
		cin >> szB[i];
	}

	RockScissorPaper(szA, szB, nCounterTime);
	return 0;
}

void RockScissorPaper(const int szA[], const int szB[], const  int nCounterTime)
{
	int i = 0;
	for (i = 0; i < nCounterTime; ++i)
	{
		if (szA[i] == szB[i])
		{
			cout << "D" << endl;
			continue;
		}
		if ((szA[i] - szB[i]) == 2)
		{
			cout << "B" << endl;
			continue;
		}

		if ((szA[i] - szB[i]) == -2)
		{
			cout << "A" << endl;
			continue;
		}
		if (szA[i] > szB[i])
		{
			cout << "A" << endl;
			continue;
		}
		
		else
			cout << "B" << endl;
	}

}