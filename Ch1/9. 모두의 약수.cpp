#include <iostream>
using namespace std;
void CalcEverDividor(const int nInputNum);
int CalcDividor(const int nInputNum);

/*
자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수의 개수를 출력하는 프로그램을 작성하
세요. 만약 N이 8이 입력된다면 1(1개), 2(2개), 3(2개), 4(3개), 5(2개), 6(4개), 7(2개), 8(4
개) 와 같이 각 숫자의 약수의 개수가 구해집니다.
출력은 다음과 같이 1부터 차례대로 약수의 개수만 출력하면 됩니다.
1 2 2 3 2 4 2 4 와 같이 출력한다.
*/

int main(void)
{
	int nInputNum = 0;
	cin >> nInputNum;
	CalcEverDividor(nInputNum);
	return 0;
}

void CalcEverDividor(const int nInputNum)
{
	int nSmallNum = 1;
	int i = 0;
	int nDivCount = 0;
	for (i = 0; i < nInputNum; ++i)
	{
		nDivCount = CalcDividor(nSmallNum);
		cout << nDivCount << " ";
		nSmallNum++;
	}
}

int CalcDividor(const int nInputNum)
{
	int i = 0;
	int nCountDiv = 0;
	for (int i = 1; i <= nInputNum; ++i)
	{
		if ((nInputNum % i) == 0)
			nCountDiv++;
	}

	return nCountDiv;
}