#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define UNDER_BOUNDARY 3
#define UPPER_BOUNDARY 1000

//자연수 N이 입력되면 1부터 N까지의 수 중 
//M의 배수합을 출력하는 프로그램을 작성하세요.
//첫 줄에 자연수 N과 M이 차례대로 입력됩니다.(3<=M<N<=1000)

void InputNum(int* mInput, int* mMultiple);
void ShowMultiple(const int& mInput, const int& mMultiple);

int main(void)
{
	int mInput = 0;		//mInput=N
	int mMultiple = 0;  // Mmultiple= M
	
	InputNum(&mInput, &mMultiple);
	ShowMultiple(mInput, mMultiple);
	return 0;
}

void InputNum(int* mInput, int* mMultiple)
{
	while (TRUE)
	{
		cout << "M은 3보다 같거나 크게, N는 1000보다 작게 입력(큰값 순서로 입력)" << endl;
		scanf_s("%d %d", mInput, mMultiple);

		//문제 조건에 맞는 숫자를 입력하는지 확인
		if ((UNDER_BOUNDARY <= *mMultiple) && (*mMultiple < *mInput) && (*mInput <= UPPER_BOUNDARY))
		{
			cout << "조건 맞족!" << endl;
			break;
		}
	}
}

void ShowMultiple(const int& mInput, const int& mMultiple)
{
	int i = 0;
	int nSum = 0;
	int nsum_num = mMultiple;
	while (TRUE)
	{
		nSum += nsum_num;
		nsum_num += mMultiple;
		if (nsum_num > mInput)
			break;
	}
	cout << "문제의 답은 " << nSum << "입니다" << endl;
}