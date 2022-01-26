#include <iostream>
using namespace std;
#define UNDER_BOUND 2
#define UPPER_BOUND 100
void InputNum(int&, int[]);
void ComNum(const int&, const int[]);

//N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 
//몇 살일까요 ? 최대 나이 차이를 출력하는 프로그램을 작성하세요.
//첫 줄에 자연수 N(2<=N<=100)이 입력되고, 그 다음 줄에 N개의 나이가 입력된다.

int main(void)
{
	int nSize = 0;
	int szNum[128] = { 0 };
	InputNum(nSize, szNum);
	ComNum(nSize, szNum);

	return 0;
}

void InputNum(int& nSize, int szNum[])
{
	cout << "정수 N을 입력하세요" << endl;
	cin >> nSize;
	int i = 0;
	//N의 유효성 검사
	if ((UNDER_BOUND > nSize) || (nSize > UPPER_BOUND))
	{
		cout << "정수 N을 다시입력하세요" << endl;
		cin >> nSize;
	}

	//나이입력
	for (i = 0; i < nSize; i++)
	{
		cin >> szNum[i];
		if (szNum[i] < 0)
		{
			cout << "나이는 음수가 될 수 없음!, 다시 입력" << endl;
			i--;
		}
	}

}

void ComNum(const int& nSize, const int szNum[])
{
	int MinNum= 999;
	int MaxNum = 0;
	int i = 0;
	for (i = 0; i < nSize; i++)
	{
		if (MinNum > szNum[i])
			MinNum = szNum[i];
		if(MaxNum< szNum[i])
			MaxNum = szNum[i];
	}

	cout << MaxNum - MinNum << endl;
}