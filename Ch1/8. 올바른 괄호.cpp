#include <iostream>
using namespace std;
#define STINGLEN 30
void Pass(char szInput[], int& nFlag);
void ShowInfo(const int& nFlag);

/*
��ȣ�� �ԷµǸ� �ùٸ� ��ȣ�̸� ��YES", �ùٸ��� ������ ��NO"�� ����մϴ�.
(())() �̰��� ��ȣ�� ���� �ùٸ��� ��ġ�ϴ� ������, (()()))�� �ùٸ� ��ȣ�� �ƴϴ�.
*/

int main(void)
{
	char szInput[STINGLEN] = { '\0' };
	int nFlag = 0;
	cin >> szInput;
	Pass(szInput, nFlag);
	ShowInfo(nFlag);
	return 0;
}

void Pass(char szInput[], int& nFlag)
{
	//�ƽ�Ű�ڵ�� (�� 40�̰� )�� 41��
	int szLookup[2] = { 1,-1 };	//(�� 1, )�� -1�� �ؼ��� ����
	int i = 0;
	int nSum = 0;

	//(�� 1, )�� -1�� �ؼ��ؼ� ������ �Ǹ�, �� 
	//�տ������� )�� ������ ������ nFlag�� ������ �ٲ�
	while (true)
	{
		if (szInput[i] == '\0')
			break;

		nSum += szLookup[szInput[i] - '('];

		if (nSum < 0)
		{
			nFlag =- 1;
			break;
		}

		++i;
	}

	//(�� ������ )�� ������ ���������� nFlag�� ������ �ٲ�
	if(nSum!=0)
		nFlag =- 1;
}

void ShowInfo(const int& nFlag)
{
	if (nFlag == -1)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}