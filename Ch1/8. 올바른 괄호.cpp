#include <iostream>
using namespace std;
#define STINGLEN 30
void Pass(char szInput[], int& nFlag);
void ShowInfo(const int& nFlag);

/*
괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력합니다.
(())() 이것은 괄호의 쌍이 올바르게 위치하는 거지만, (()()))은 올바른 괄호가 아니다.
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
	//아스키코드로 (은 40이고 )은 41임
	int szLookup[2] = { 1,-1 };	//(을 1, )을 -1로 해석할 예정
	int i = 0;
	int nSum = 0;

	//(을 1, )을 -1로 해석해서 음수가 되면, 즉 
	//앞에서부터 )가 더많이 나오면 nFlag를 음수로 바꿈
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

	//(의 개수와 )의 개수가 같지않으면 nFlag를 음수로 바꿈
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