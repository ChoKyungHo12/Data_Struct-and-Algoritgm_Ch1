#include <iostream>
#include <vector>
using namespace std;
void PartSequence(vector<int>& vnSequence);
/*
N���� ���ڰ� ������ ������ �־����ϴ�. �� ���� �� ���������� �����ϴ� �κ� ������ �ִ�
���̸� ���Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.
���� N=9�̰�
5 7 3 3 12 12 13 10 11 �̸� ��3 3 12 12 13���κ��� �ִ� ���� ���������̹Ƿ� �� ������
5�� ����մϴ�. ���� ���� ���� �����ϴ� �ɷ� �����մϴ�.

�� �Է¼���
ù �ٿ� �ڿ����� ���� N(5<=N<=100,000)�� �־����ϴ�.
�� ��° �ٿ� N���� ���ڿ��� �־����ϴ�. �� ���ڴ� 100,000������ �ڿ����Դϴ�.

�� ��¼���
�ִ� �κ� ���������� ���̸� ����ϼ���.
*/

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int nSize = 0;
	
	int nPointer = 0;

	cin >> nSize;
	vector<int> vnSequence(nSize);
	for (int i = 0; i < nSize; ++i)
		scanf_s("%d" ,&vnSequence[i]);

	PartSequence(vnSequence);
	return 0;
}

void PartSequence(vector<int>& vnSequence)
{
	int nMaxSequence = 1;
	int nTrial = 1;

	for (vector<int>::size_type i = 0; i < (vnSequence.size()) - 1;++i)
	{
		if (vnSequence[i] <= vnSequence[i + 1])
		{
			if (nMaxSequence < nTrial)
				nMaxSequence = nTrial;
			nTrial++;
		}

		else
		{
			if (nMaxSequence < nTrial)
				nMaxSequence = nTrial;
			nTrial = 1;
		}
	}

	cout << nMaxSequence;
}