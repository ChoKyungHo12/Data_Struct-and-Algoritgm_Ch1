#include <iostream>
using namespace std;
#define CALCYEAR 2022

void CalcAge(char szId[], const char szSex[], int& nAge, char& chSex);
void ShowInfo(int nAge, char chSex);
/*
�ֹε������ ��ȣ�� �־����� �ֹε���� ������ ���̿� ������ �Ǵ��Ͽ� ����ϴ� ���α׷�
�� �ۼ��ϼ���. �ֹε������ ��ȣ�� -�� �������� ���ڸ��� ���ڸ��� ���еȴ�.
���ڸ��� ù ��° ���� 1�̸� 1900���� �����̰�, 2�̸� 1900���� ����, 3�̸� 2000���
�� ����, 4�̸� 2000���� �����̴�.
���ش� 2019���Դϴ�. �ش� �ֹε���� ������ ���̿� ������ ����ϼ���.
*/


int main(void)
{
	char szId[16] = { 0 };
	char szSex[4] = { 'M','W','M','W' };
	int nAge = 0;
	char chSex = 0;
	CalcAge(szId, szSex, nAge, chSex);
	ShowInfo(nAge, chSex);
	return 0;
}

void CalcAge(char szId[], const char szSex[], int& nAge, char& chSex)
{
	//�ֹε�Ϲ�ȣ���� ��������� ������ ���ڿ��� ������ �ִ� ����
	char szYear[3] = { 0 };			

	//��������� ������ ������ �ִ� ����
	int nYear = 0;

	int i = 0;

	cout << "�ֹε�� ��ȣ �Է�" << endl;
	cin >> szId;
	
	chSex = szSex[szId[7] - '1'];		//Lookup �迭 �̿�

	for (i = 0; i < 2; i++)
	{
		szYear[i] = szId[i];
	}
	nYear = atoi(szYear);				//���ڿ��� ���������� ��ȯ nYear ���� 2�ڸ� ��������
	

	//�ֹι�ȣ�� ���� 1900������� 2000������� ����
	if ((szId[7] - '1') < 2)
		nYear += 1900;
	else
		nYear += 2000;

	nAge = CALCYEAR - nYear + 1;		//���̱��ϴ� ���� ���翬�� - ������� +1
}

void ShowInfo(int nAge, char chSex)
{
	printf("%d %c", nAge, chSex);
}