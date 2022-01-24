#include <iostream>
using namespace std;
#define CALCYEAR 2022

void CalcAge(char szId[], const char szSex[], int& nAge, char& chSex);
void ShowInfo(int nAge, char chSex);
/*
주민등록증의 번호가 주어지면 주민등록증 주인의 나이와 성별을 판단하여 출력하는 프로그램
을 작성하세요. 주민등록증의 번호는 -를 기준으로 앞자리와 뒷자리로 구분된다.
뒷자리의 첫 번째 수가 1이면 1900년대생 남자이고, 2이면 1900년대생 여자, 3이면 2000년대
생 남자, 4이면 2000년대생 여자이다.
올해는 2019년입니다. 해당 주민등록증 주인의 나이와 성별을 출력하세요.
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
	//주민등록번호에서 출생연도만 추출해 문자열로 가지고 있는 변수
	char szYear[3] = { 0 };			

	//출생연도를 정수로 가지고 있는 변수
	int nYear = 0;

	int i = 0;

	cout << "주민등록 번호 입력" << endl;
	cin >> szId;
	
	chSex = szSex[szId[7] - '1'];		//Lookup 배열 이용

	for (i = 0; i < 2; i++)
	{
		szYear[i] = szId[i];
	}
	nYear = atoi(szYear);				//문자열을 정수형으로 변환 nYear 에는 2자리 정수있음
	

	//주민번호에 따라 1900년대인지 2000년대인지 구분
	if ((szId[7] - '1') < 2)
		nYear += 1900;
	else
		nYear += 2000;

	nAge = CALCYEAR - nYear + 1;		//나이구하는 공식 현재연도 - 출생연도 +1
}

void ShowInfo(int nAge, char chSex)
{
	printf("%d %c", nAge, chSex);
}