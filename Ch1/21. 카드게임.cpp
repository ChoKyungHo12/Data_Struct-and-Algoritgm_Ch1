#include <iostream>
#define GAMEROUND 10
using namespace std;
void Game(const int nPlayerA[], const int nPlayerB[]);
void WinOrLose(const int szScoreTable[], const int szWinnerTable[]);
/*
0부터 9까지의 숫자가 표시된 카드를 가지고 두 사람 A와 B가 게임을 한다. A와 B에게는 각
각 0에서 9까지의 숫자가 하나씩 표시된 10장의 카드뭉치가 주어진다. 두 사람은 카드를 임의
의 순서로 섞은 후 숫자가 보이지 않게 일렬로 늘어놓고 게임을 시작한다. 단, 게임 도중 카드
의 순서를 바꿀 수는 없다.
 A와 B 각각이 늘어놓은 카드를 뒤집어서 표시된 숫자를 확인하는 것을 한 라운드라고 한
다. 게임은 첫 번째 놓인 카드부터 시작하여 순서대로 10번의 라운드로 진행된다. 각 라운드에
서는 공개된 숫자가 더 큰 사람이 승자가 된다. 승자에게는 승점 3점이 주어지고 패자에게는
승점이 주어지지 않는다. 만약 공개된 두 숫자가 같아서 비기게 되면, A, B 모두에게 승점 1
점이 주어진다.
 10번의 라운드가 모두 진행된 후, 총 승점이 큰 사람이 게임의 승자가 된다. 만약, A와 B
의 총 승점이 같은 경우에는, 제일 마지막에 이긴 사람을 게임의 승자로 정한다. 그래도 승부
가 나지 않는 경우는 모든 라운드에서 비기는 경우뿐이고 이 경우에 두 사람은 비겼다고 한
다.
 예를 들어, 다음 표에서 3번째 줄은 각 라운드의 승자를 표시하고 있다. 표에서 D는 무승
부를 나타낸다. 이 경우에 A의 총 승점은 16점이고, B는 13점이어서, A가 게임의 승자가 된
다.
라운드 1 2 3 4 5 6 7 8 9 10
	A 4 5 6 7 0 1 2 3 9 8
	B 1 2 3 4 5 6 7 8 9 0
	승 A A A A B B B B D A
 아래 표의 경우에는 A와 B의 총 승점은 13점으로 같다. 마지막으로 승부가 난 라운드는 7
번째 라운드이고, 이 라운드의 승자인 B가 게임의 승자가 된다.
라운드 1 2 3 4 5 6 7 8 9 10
	A 9 1 7 2 6 3 0 4 8 5
	B 6 3 9 2 1 0 7 4 8 5
	승 A B B D A A B D D D
A와 B가 늘어놓은 카드의 숫자가 순서대로 주어질 때, 게임의 승자가 A인지 B인지, 또는 비겼
는지 결정하는 프로그램을 작성하시오.

▣ 입력설명
첫 번째 줄에는 A가 늘어놓은 카드의 숫자들이 빈칸을 사이에 두고 순서대로 주어진다. 두 번
째 줄에는 B가 늘어놓은 카드의 숫자들이 빈칸을 사이에 두고 순서대로 주어진다.

▣ 출력설명
첫 번째 줄에는 게임이 끝난 후, A와 B가 받은 총 승점을 순서대로 빈칸을 사이에 두고 출력
한다. 두 번째 줄에는 이긴 사람이 A인지 B인지 결정해서, 이긴 사람을 문자 A 또는 B로 출력
한다. 만약 비기는 경우에는 문자 D를 출력한다.

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
	//0번이 A점수, 1번이 B점수
	int szScoreTable[2] = { 0 };
	int szWinnerTable[GAMEROUND] = { 0 };
	const int nWinScore = 3;
	const int nEvenScore = 1;
	int i = 0;

	//라운드 승패 결정
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

	//게임 승패 결정
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