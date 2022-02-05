#include <iostream>
#define GAMEROUND 10
using namespace std;
void Game(const int nPlayerA[], const int nPlayerB[]);
void WinOrLose(const int szScoreTable[], const int szWinnerTable[]);
/*
0���� 9������ ���ڰ� ǥ�õ� ī�带 ������ �� ��� A�� B�� ������ �Ѵ�. A�� B���Դ� ��
�� 0���� 9������ ���ڰ� �ϳ��� ǥ�õ� 10���� ī�并ġ�� �־�����. �� ����� ī�带 ����
�� ������ ���� �� ���ڰ� ������ �ʰ� �Ϸķ� �þ���� ������ �����Ѵ�. ��, ���� ���� ī��
�� ������ �ٲ� ���� ����.
 A�� B ������ �þ���� ī�带 ����� ǥ�õ� ���ڸ� Ȯ���ϴ� ���� �� ������ ��
��. ������ ù ��° ���� ī����� �����Ͽ� ������� 10���� ����� ����ȴ�. �� ���忡
���� ������ ���ڰ� �� ū ����� ���ڰ� �ȴ�. ���ڿ��Դ� ���� 3���� �־����� ���ڿ��Դ�
������ �־����� �ʴ´�. ���� ������ �� ���ڰ� ���Ƽ� ���� �Ǹ�, A, B ��ο��� ���� 1
���� �־�����.
 10���� ���尡 ��� ����� ��, �� ������ ū ����� ������ ���ڰ� �ȴ�. ����, A�� B
�� �� ������ ���� ��쿡��, ���� �������� �̱� ����� ������ ���ڷ� ���Ѵ�. �׷��� �º�
�� ���� �ʴ� ���� ��� ���忡�� ���� �����̰� �� ��쿡 �� ����� ���ٰ� ��
��.
 ���� ���, ���� ǥ���� 3��° ���� �� ������ ���ڸ� ǥ���ϰ� �ִ�. ǥ���� D�� ����
�θ� ��Ÿ����. �� ��쿡 A�� �� ������ 16���̰�, B�� 13���̾, A�� ������ ���ڰ� ��
��.
���� 1 2 3 4 5 6 7 8 9 10
	A 4 5 6 7 0 1 2 3 9 8
	B 1 2 3 4 5 6 7 8 9 0
	�� A A A A B B B B D A
 �Ʒ� ǥ�� ��쿡�� A�� B�� �� ������ 13������ ����. ���������� �ºΰ� �� ����� 7
��° �����̰�, �� ������ ������ B�� ������ ���ڰ� �ȴ�.
���� 1 2 3 4 5 6 7 8 9 10
	A 9 1 7 2 6 3 0 4 8 5
	B 6 3 9 2 1 0 7 4 8 5
	�� A B B D A A B D D D
A�� B�� �þ���� ī���� ���ڰ� ������� �־��� ��, ������ ���ڰ� A���� B����, �Ǵ� ���
���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�� �Է¼���
ù ��° �ٿ��� A�� �þ���� ī���� ���ڵ��� ��ĭ�� ���̿� �ΰ� ������� �־�����. �� ��
° �ٿ��� B�� �þ���� ī���� ���ڵ��� ��ĭ�� ���̿� �ΰ� ������� �־�����.

�� ��¼���
ù ��° �ٿ��� ������ ���� ��, A�� B�� ���� �� ������ ������� ��ĭ�� ���̿� �ΰ� ���
�Ѵ�. �� ��° �ٿ��� �̱� ����� A���� B���� �����ؼ�, �̱� ����� ���� A �Ǵ� B�� ���
�Ѵ�. ���� ���� ��쿡�� ���� D�� ����Ѵ�.

*/

int main(void)
{
	int nPlayerA[GAMEROUND] = { 0 };
	int nPlayerB[GAMEROUND] = { 0 };
	int i = 0;

	for (i = 0; i < GAMEROUND; ++i)
	{
		cin >> nPlayerA[i];
	}
	for (i = 0; i < GAMEROUND; ++i)
	{
		cin >> nPlayerB[i];
	}
	Game(nPlayerA, nPlayerB);
	return 0;
}

void Game(const int nPlayerA[], const int nPlayerB[])
{
	//0���� A����, 1���� B����
	int szScoreTable[2] = { 0 };
	int szWinnerTable[GAMEROUND] = { 0 };
	const int nWinScore = 3;
	const int nEvenScore = 1;
	int i = 0;

	//���� ���� ����
	for (i = 0; i < GAMEROUND; ++i)
	{
		if ((nPlayerA[i] - nPlayerB[i]) == 0)
		{
			szScoreTable[0] += nEvenScore;
			szScoreTable[1] += nEvenScore;
			szWinnerTable[i] = 'D';
		}

		else if (nPlayerA[i] > nPlayerB[i])
		{
			szScoreTable[0] += nWinScore;
			szWinnerTable[i] = 'A';
		}

		else
		{
			szScoreTable[1] += nWinScore;
			szWinnerTable[i] = 'B';
		}
	}

	//���� ���� ����
	WinOrLose(szScoreTable, szWinnerTable);
}

void WinOrLose(const int szScoreTable[], const int szWinnerTable[])
{
	int nEvenCounter = 0;
	int i = 0;
	cout << szScoreTable[0] <<" "<< szScoreTable[1] << endl;

	if (szScoreTable[0] > szScoreTable[1])
	{
		cout << "A";
		return;
	}

	else if (szScoreTable[0] < szScoreTable[1])
	{
		cout << "B";
		return;
	}

	for(i =GAMEROUND-1 ; i>=0; --i)
	{
		if (szWinnerTable[i] == 'D')
		{
			nEvenCounter++;
			continue;
		}
		else if (szWinnerTable[i] == 'A')
		{
			cout << "A";
			break;
		}
		else
		{
			cout << "B";
			break;
		}
	}

	if (nEvenCounter == GAMEROUND)
		cout << "D";
}