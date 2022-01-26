#include <iostream>
using namespace std;
#define UNDER_BOUND 3
#define UPPER_BOUND 100

void InputNum(int&);
void SumDivisor(const int&);

// �ڿ��� N�� �־����� �ڿ��� N�� ������� ���� 
//���İ� �Բ� ����ϴ� ���α׷��� �ۼ��ϼ���.

int main(void)
{
	int nInputNum = 0;
	InputNum(nInputNum);
	SumDivisor(nInputNum);
}

void InputNum(int& nInputNum)
{
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> nInputNum;

	while (true)
	{
		//�Է��� �� ��ȿ�� �˻�
		if ((UNDER_BOUND < nInputNum) || (UPPER_BOUND >= nInputNum))
		{
			break;
		}
		cout << "���ڸ� �ٽ� �Է��ϼ���" << endl;
		cin >> nInputNum;
	}
}

void SumDivisor(const int& nInputNum)
{
	//nDivisor�� 1�� �÷��� ������ �������� 0�̸� ����� �Ǻ���
	int nDivisor = 1;
	int nSum = 1;
	int nDeadline = nInputNum / 2;
	int i = 0;

	cout << "1";
	for (i = 2; i <= nDeadline; ++i)
	{
		if ((nInputNum % i) == 0)
		{
			cout << " + " << i;
			nSum += i;
		}
	}

	cout << " = " << nSum;

}