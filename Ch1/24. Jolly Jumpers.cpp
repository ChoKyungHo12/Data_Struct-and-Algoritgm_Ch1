#include <iostream>
#include <vector>
using namespace std;
void DistinJellyJump(vector<int> vnArray);
/*
N���� ������ �̷���� ������ ���� ���� ������ �ִ� �� ���� ���� 1���� N-1������ ����
��� ������ �� ������ ������ ����(jolly jumper)��� �θ���. ���� ��� ������ ���� ������
�� 1 4 2 3 �� �ڿ� �ִ� ���� ���� ���� ���� ���� 3 ,2, 1�̹Ƿ� �� ������ ������ ���۰�
�ȴ�. � ������ ������ �������� �Ǵ��� �� �ִ� ���α׷��� �ۼ��϶�.

�� �Է¼���
ù ��° �ٿ� �ڿ��� N(3<=N<=100)�� �־�����.
�� ���� �ٿ� N���� ������ �־�����. ������ ũ��� int �� �����ȿ� ������, ������ �� ����
���� ������ ������ �ֽ��ϴ�.

�� ��¼���
������ �����̸� ��YES"�� ����ϰ�, �׷��� ������ ��NO"�� ����Ѵ�.


*/

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int nSize = 0;
	cin >> nSize;

	vector<int> vnArray(nSize);
	for (int i = 0; i < nSize; ++i)
		cin >> vnArray[i];

	DistinJellyJump(vnArray);
	return 0;
}

void DistinJellyJump(vector<int> vnArray)
{
	//vnArray���� 1 ���� �迭�� ���� ������ ������ index�� �ؼ� ������
	vector<int> vnCheckArray(vnArray.size() - 1);
	int nSubtraction = 0;
	int nCounter = 0;

	for (int i = 0; i < vnArray.size() - 1; ++i)
	{
		nSubtraction = abs(vnArray[i] - vnArray[i + 1]);

		//���� ���̰� ������ ����� ������ ���� �׸��� �ٷ� ���������� �ƴ�
		if ((nSubtraction > 0) && (nSubtraction < vnArray.size()))
			vnCheckArray[nSubtraction - 1]++;
		else
		{
			cout << "NO";
			return;
		}
	}

	
	for (int i = 0; i < vnArray.size() - 1; ++i)
	{
		if (vnCheckArray[i] != 1)
		{
			cout << "NO";
			break;
		}
		nCounter++;
	}

	if (nCounter == vnArray.size() - 1)
		cout << "YES";
}