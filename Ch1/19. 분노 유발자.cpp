#include <iostream>
#define MAXSTUDET 100
using namespace std;
void RageMaker(const int szArray[], const int nSize);
/*
������ ������ ���� �������� ���弱������ 1, 2�г� ���л��鿡�� ���翡 �� ����� ��
ȭ�� �����شٰ� �Ͽ� �л����� ���翡 �𿴽��ϴ�.
������ �¼��� ��ȭ��ó�� ������� �ƴ϶� ������ �ٴڿ� ���ڸ� ��ġ�ϰ� �л����� �ɽ���
��. �׷��� ���� ���ڸ��� ���� Ű�� ū �л��� ������ �� �л����� ����Ű�� ���� ���ڸ� ��
���� ��ũ���� ������ �ʽ��ϴ�. �� �ٿ� ����Ű ������ �־����� �޻�� ����� �þ߸� ����
��ȭ ��û�� �Ұ����ϰ� �ϴ� �г������ڰ� �� �ٿ� �� ���� �ִ��� ���ϴ� ���α׷��� �ۼ�
�ϼ���.

ù �ٿ� �� �ٿ� ���� �л��� N(3<=N<=100)�� �־����ϴ�.
�� ��° �ٿ� N���� ���� Ű ����(45�̻� 100����)�� �� �ڸ� �л����� ���ʴ�� �־����ϴ�.

�ڽ��� �� ��� ��θ� ��û�����ϴ� �л����� ����մϴ�.
*/
int main(void)
{
	int nSize = 0;
	int szTall[MAXSTUDET] = { 0 };
	int nCounter = 0;

	cin >> nSize;
	for (int i = 0; i < nSize; ++i)
	{
		cin >> szTall[i];
	}
	RageMaker(szTall, nSize);
	return 0;
}

void RageMaker(const int szArray[], const int nSize)
{
	int i = 0;
	int j = 0;
	int nCounter = 0;
	int nTrial = 0;
	int nDeterminator = 0;

	for (i = 0; i < (nSize-1); ++i)
	{
		nTrial = szArray[i];
		for (j = i+1; j < nSize; ++j)
		{
			if (nTrial > szArray[j])
				nDeterminator++;
		}

		if (nDeterminator == (nSize-1 - i))
		{
			nCounter++;
		}
		nDeterminator = 0;
	}

	cout<< nCounter;
}