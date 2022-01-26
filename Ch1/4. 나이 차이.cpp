#include <iostream>
using namespace std;
#define UNDER_BOUND 2
#define UPPER_BOUND 100
void InputNum(int&, int[]);
void ComNum(const int&, const int[]);

//N(2<=N<=100)���� ���̰� �Էµ˴ϴ�. �� N���� ��� �� ���� �������̰� ���� ���� ���� 
//�� ���ϱ�� ? �ִ� ���� ���̸� ����ϴ� ���α׷��� �ۼ��ϼ���.
//ù �ٿ� �ڿ��� N(2<=N<=100)�� �Էµǰ�, �� ���� �ٿ� N���� ���̰� �Էµȴ�.

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
	cout << "���� N�� �Է��ϼ���" << endl;
	cin >> nSize;
	int i = 0;
	//N�� ��ȿ�� �˻�
	if ((UNDER_BOUND > nSize) || (nSize > UPPER_BOUND))
	{
		cout << "���� N�� �ٽ��Է��ϼ���" << endl;
		cin >> nSize;
	}

	//�����Է�
	for (i = 0; i < nSize; i++)
	{
		cin >> szNum[i];
		if (szNum[i] < 0)
		{
			cout << "���̴� ������ �� �� ����!, �ٽ� �Է�" << endl;
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