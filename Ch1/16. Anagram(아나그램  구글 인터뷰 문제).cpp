#include <iostream>
using namespace std;
#define MAXSTING 100
void Anagram(const char szString1[], const char szString2[], const int nSize1, const int nSize2);
/*
* 첫 줄에 첫 번째 단어가 입력되고, 두 번째 줄에 두 번째 단어가 입력됩니다. 
단어의 길이는 100을 넘지 않습니다.

두 단어가 아나그램이면 “YES"를 출력하고, 아니면 ”NO"를 출력합니다.

*/

int main(void)
{
	char szString1[MAXSTING+1] = { 0 };
	char szString2[MAXSTING+1] = { 0 };
	cin >> szString1;
	cin >> szString2;
	Anagram(szString1, szString2, strlen(szString1), strlen(szString2));

	return 0;
}

void Anagram(const char szString1[], const char szString2[], const int nSize1, const int nSize2)
{
	if (nSize1 != nSize2)
	{
		cout << "NO";
		return;
	}

	int szLookUpTable[52] = { 0 };
	char chFlag = 0;
	int i = 0;
	for (i = 0; i < nSize1; ++i)
	{
		if (szString1[i] >= 'a')
			szLookUpTable[szString1[i] - 'a' + 26]++;
		else
			szLookUpTable[szString1[i] - 'A']++;
	}

	for (i = 0; i < nSize1; ++i)
	{
		if (szString2[i] >= 'a')
			szLookUpTable[szString2[i] - 'a' + 26]--;
		else
			szLookUpTable[szString2[i] - 'A']--;
	}

	for (i = 0; i < 52; ++i)
	{
		if(szLookUpTable[i]!=0)
		{
			chFlag++;
			cout << "NO";
			break;
		}
	}

	if (chFlag == 0)
	{
		cout << "Yes";

	}
}