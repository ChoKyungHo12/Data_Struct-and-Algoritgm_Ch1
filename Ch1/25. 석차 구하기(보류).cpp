#include <iostream>
#include <vector>
using namespace std;

/*
N���� �л��� ���������� �ԷµǸ� �� �л��� ������ �Էµ� ������� ����ϴ� ���α׷���
�ۼ��ϼ���.

�� �Է¼���
ù �ٿ� N(1<=N<=100)�� �Էµǰ�, �� ��° �ٿ� ���������� �ǹ��ϴ� N���� ������ �Էµ�
��. ���� ������ �Էµ� ��� ���� ������ ���� ó���Ѵ�. �� ���� ���� ������ 92���ε� 92
���� 3�� �����ϸ� 1���� 3���̰� �� ���� �л��� 4���� �ȴ�. ������ 100�� �����̴�.

�� ��¼���
ù �ٿ� �Էµ� ������� ������ ����Ѵ�.

*/

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int nSize = 0;
	vector<int> vnScore;
	cin >> nSize;
	vnScore.reserve(nSize);

	for (vector<int>::size_type i = 0; i < vnScore.size(); ++i)
	{
		cin >> vnScore[i];
	}

}

void CalcGrade(vector<int>& vnScore)
{
	vector<int> vnCopyScore = vnScore;
	vector<int> vnGrade(vnCopyScore.size());
	vector<int>::iterator itPointerScore = vnCopyScore.begin();
	int nMax = *itPointerScore;
	int nGrade = 1;
	int nCounter = 0;
	for (vector<int>::size_type i = 0; i < vnCopyScore.size(); ++i)
	{
		for (vector<int>::size_type j = 0; j < vnCopyScore.size(); ++j)
		{
			if (nMax > vnCopyScore[i])
				nMax == vnCopyScore[i];
		}


	}
}