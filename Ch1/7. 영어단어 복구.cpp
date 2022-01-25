#include <iostream>
using namespace std;
#define STRINGSIZE 100

void FRefineSting(char szArbitary[], char RefineSting[]);
void ShowRefineSting(const char RefineSting[]);
void Atoa(char RefineSting[]);

/*
현수의 컴퓨터가 바이러스에 걸려 영어단어가 뛰어쓰기와 대소문자가 혼합되어 표현된다. 
예를 들면 아름다운 이란 뜻을 가지고 있는 beautiful 단어가 “bE au T I fu L” 과 같이 
컴퓨터에 표시되고 있습니다. 위와 같이 에러로 표시되는 영어단어를 원래의 표현대로 공백을 
제거하고 소문자화 시켜 출력하는 프로그램을 작성하세요.
입력은 알파벳과 공백만 주어집니다.
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

	//szDeletSpace에 공백을 제거한 문자열을 저장
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