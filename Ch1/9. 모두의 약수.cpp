#include <iostream>
using namespace std;
void CalcEverDividor(const int nInputNum);
int CalcDividor(const int nInputNum);

/*
�ڿ��� N�� �ԷµǸ� 1���� N������ �� ���ڵ��� ����� ������ ����ϴ� ���α׷��� �ۼ���
����. ���� N�� 8�� �Էµȴٸ� 1(1��), 2(2��), 3(2��), 4(3��), 5(2��), 6(4��), 7(2��), 8(4
��) �� ���� �� ������ ����� ������ �������ϴ�.
����� ������ ���� 1���� ���ʴ�� ����� ������ ����ϸ� �˴ϴ�.
1 2 2 3 2 4 2 4 �� ���� ����Ѵ�.
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