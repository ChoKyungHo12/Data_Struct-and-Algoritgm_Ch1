#include <iostream>
using namespace std;
#define UNDER_BOUND 3
#define UPPER_BOUND 100

void InputNum(int&);
void SumDivisor(const int&);

// 자연수 N이 주어지면 자연수 N의 진약수의 합을 
//수식과 함께 출력하는 프로그램을 작성하세요.

int main(void)
{
	int nInputNum = 0;
	InputNum(nInputNum);
	SumDivisor(nInputNum);
}

void InputNum(int& nInputNum)
{
	cout << "숫자를 입력하세요" << endl;
	cin >> nInputNum;

	while (true)
	{
		//입력한 수 유효성 검사
		if ((UNDER_BOUND < nInputNum) || (UPPER_BOUND >= nInputNum))
		{
			break;
		}
		cout << "숫자를 다시 입력하세요" << endl;
		cin >> nInputNum;
	}
}

void SumDivisor(const int& nInputNum)
{
	//nDivisor을 1씩 올려서 나눠서 나머지가 0이면 약수로 판별함
	int nDivisor = 1;
	int nSum = 0;
	int nDeadline = nInputNum / 2;
	int i = 0;

	while (true)
	{
		if ((nInputNum % nDivisor) == 0)
		{
			cout << nDivisor;
			nSum += nDivisor;
		}

		if (nDivisor == nDeadline)
		{
			cout << " = " << nSum;
			break;
		}

		if((nInputNum % nDivisor) == 0)
		{
			cout << " + " ;
		}

		nDivisor++;
	}

}