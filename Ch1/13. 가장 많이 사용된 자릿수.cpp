#include <iostream>
using namespace std;
#define MAXLENTH 100

void CountNum(const char szNumString[]);
int MaxNum(const int szArray[], const int nSize);

/*
N자리의 자연수가 입력되면 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자를 출력하는 프
로그램을 작성하세요.
예를 들어 1230565625라는 자연수가 입력되면 5가 3번 상용되어 가장 많이 사용된 숫자입니
다. 답이 여러 개일 경우 그 중 가장 큰 수를 출력하세요.

첫 줄에 자연수가 입력됩니다. 자연수의 길이는 100을 넘지 않습니다.

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
	//szCounter는 0번에는 0의 개수, 1번에는 1의 개수...
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