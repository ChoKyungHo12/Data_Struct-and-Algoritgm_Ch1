#include <iostream>
using namespace std;
#define STRINGSIZE 50

void RefineNum(char szArbitString[], int& nRefineNum);
void CalcDivisor(const int& nRefineNum, int& nDivisorCont);
void showInfo(int nRefineNum, int nDivisorCont);

/*
문자와 숫자가 섞여있는 문자열이 주어지면 그 중 숫자만 추출하여 그 순서대로 자연수를 만
듭니다. 만들어진 자연수와 그 자연수의 약수 개수를 출력합니다.
만약 “t0e0a1c2her”에서 숫자만 추출하면 0, 0, 1, 2이고 이것을 자연수를 만들면 12가 됩니
다. 즉 첫 자리 0은 자연수화 할 때 무시합니다. 출력은 12를 출력하고, 다음 줄에 12의 약
수의 개수를 출력하면 됩니다.
추출하여 만들어지는 자연수는 100,000,000을 넘지 않습니다.
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

	//숫자만을 찾아서 szNumSting에 문자열로 저장
	for (i = 0; i < STRINGSIZE; i++)
	{
		if ((szArbitString[i] >= '0') && (szArbitString[i] <= '9'))
		{
			szNumSting[nCountNum] = szArbitString[i];
			nCountNum++;
		}
	}
	
	//문자열을 정수형으로 바꿈
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