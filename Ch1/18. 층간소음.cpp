#include <iostream>
#define MAX 100
using namespace std;

void WarningSignal(const int szDB[], const int nCount, const int Deadline);
/*
T편한 세상 아파트는 층간소음 발생 시 윗집의 발뺌을 방지하기 위해 애초 아파트를 지을 때
바닥에 진동센서를 설치했습니다. 이 센서는 각 세대의 층간 진동소음 측정치를 초단위로 아
파트 관리실에 실시간으로 전송합니다. 그리고 한 세대의 측정치가 M값을 넘으면 세대호수와
작은 경보음이 관리실 모니터에서 울립니다. 한 세대의 N초 동안의 실시간 측정치가 주어지면
최대 연속으로 경보음이 울린 시간을 구하세요. 경보음이 없으면 -1를 출력합니다.

첫 줄에 자연수 N(10<=N<=100)과 M이 주어집니다.
두 번째 줄에 N개의 측정값(1000이하 자연수)이 초 순서대로 입력된다.

최대 연속 경보음이 울린 시간(초)를 출력하세요.
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