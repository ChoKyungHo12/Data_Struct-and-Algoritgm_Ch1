#include <iostream>
#include <vector>

using namespace std;

/*
������ N�� ���Ͽ� N!�� 1���� N������ ���� �ǹ��Ѵ�. �̴� N�� Ŀ���� ���� �ް��ϰ� Ŀ��
��. �̷��� ū ���� ǥ���ϴ� ������� �Ҽ����� ������ ǥ���ϴ� ����� �ִ�. ���� �Ҽ���
2, 3, 5, 7, 11, 13... ������ �������� �˾ƾ� �Ѵ�. ���� ��� 825�� (0 1 2 0 1)�� ǥ����
�����ѵ�, �̴� 2�� ���� 3�� 1��, 5�� 2��, 7�� ����, 11�� 1���� ���̶�� �ǹ��̴�. 101��
�� ���� ������ N�� ���Ͽ� N ���丮���� �̿� ���� ǥ������� ��ȯ�ϴ� ���α׷��� �ۼ���
����. ����� �Ʒ� ������ ���� �ϵ��� �Ѵ�.

�� �Է¼���
ù �ٿ� �ڿ��� N(3<=N<=1000)�� �Էµȴ�.

�� ��¼���
�Ҽ��� ������ ǥ���Ѵ�.
*/

int main(void)
{
	freopen("input.txt", "re", stdin);
	int nNumber = 0;
	
	cin >> nNumber;
	
	return 0;
}

//15�� �Լ� Ȱ��
vector<int>& MakePrimeNum(int nNumBer)
{
	vector<int> vnPrimeArray;

	int i = 0;
	int j = 0;
	int nCountPrimeNum = 0;
	int nDestinPrime = 0;

	for (int i = 2; i <= nNumBer; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			if (i % j == 0)
			{
				nDestinPrime++;
				if (nDestinPrime == 3)
				{
					break;
				}
			}
		}
		if (nDestinPrime == 2)
			vnPrimeArray.push_back(i);
		nDestinPrime = 0;
	}


	for (i = 0; i < vnPrimeArray.size(); i++)
	{
		cout << vnPrimeArray[i] << endl;
	}

	return vnPrimeArray;
}