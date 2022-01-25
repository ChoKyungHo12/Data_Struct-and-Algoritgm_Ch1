#include <iostream>
using namespace std;
#define STRINGSIZE 100

void FRefineSting(char szArbitary[], char RefineSting[]);
void ShowRefineSting(const char RefineSting[]);
void Atoa(char RefineSting[]);

/*
������ ��ǻ�Ͱ� ���̷����� �ɷ� ����ܾ �پ��� ��ҹ��ڰ� ȥ�յǾ� ǥ���ȴ�. 
���� ��� �Ƹ��ٿ� �̶� ���� ������ �ִ� beautiful �ܾ ��bE au T I fu L�� �� ���� 
��ǻ�Ϳ� ǥ�õǰ� �ֽ��ϴ�. ���� ���� ������ ǥ�õǴ� ����ܾ ������ ǥ����� ������ 
�����ϰ� �ҹ���ȭ ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
�Է��� ���ĺ��� ���鸸 �־����ϴ�.
*/

int main(void)
{
	char szArbitary[STRINGSIZE] = { '\0' };
	char RefineSting[STRINGSIZE] = { '\0' };
	fgets(szArbitary, sizeof(szArbitary), stdin);
	FRefineSting(szArbitary, RefineSting);
	ShowRefineSting(RefineSting);
	return 0;
}

void FRefineSting(char szArbitary[], char RefineSting[])
{
	char szDeletSpace[STRINGSIZE] = { '/0' };
	int i = 0;
	int ncount = 0;

	//szDeletSpace�� ������ ������ ���ڿ��� ����
	for (i = 0; i < STRINGSIZE; i++)
	{
		if ((szArbitary[i] >= 'A') && (szArbitary[i] <= 'z'))
		{
			szDeletSpace[ncount] = szArbitary[i];
			ncount++;
		}
	}
	Atoa(szDeletSpace);
	memcpy(RefineSting, szDeletSpace, STRINGSIZE);
}

void Atoa(char RefineSting[])
{
	int i = 0;
	int nStingLen = strlen(RefineSting);

	for (i = 0; i < nStingLen - 1; ++i)
	{
		if ((RefineSting[i] >= 'A') && (RefineSting[i] <= 'Z'))
		{
			RefineSting[i]+= 'a'-'A';
		}
	}
}

void ShowRefineSting(const char RefineSting[])
{
	cout << RefineSting;
}