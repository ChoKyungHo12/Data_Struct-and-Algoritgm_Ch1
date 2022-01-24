#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define UNDER_BOUNDARY 1
#define UPPER_BOUNDARY 100
void InputNum(int& nStartNum, int& mMultnEndNumiple);
void TotalSum(const int nStartNum, const int nEndNum);

//자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하세요
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
		cout << "A는 " << UNDER_BOUNDARY << "보다 같거나 크게, B는 " << UPPER_BOUNDARY << "보다 작게 입력(작은값 순서로 입력)" << endl;
		scanf_s("%d %d", &nStartNum, &mMultnEndNumiple);

		//문제 조건에 맞는 숫자를 입력하는지 확인
		if ((UNDER_BOUNDARY <= nStartNum) && (nStartNum < mMultnEndNumiple) && (mMultnEndNumiple <= UPPER_BOUNDARY))
		{
			cout << "조건 맞족!" << endl;
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
		//+는 마지막에 한번 안찍어야 하기 때문에(=을 찍어야 함) 조건에 넣어줌
		if(nEndNum > nSumNum)
			putchar('+');

		nTotal += nSumNum;
		nSumNum++;

		//탈출조건
		if (nEndNum < nSumNum)
		{
			cout << " = " << nTotal << endl;
			break;
		}
	}
}