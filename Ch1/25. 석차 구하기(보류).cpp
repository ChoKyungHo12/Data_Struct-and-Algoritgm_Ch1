#include <iostream>
#include <vector>
using namespace std;

/*
N명의 학생의 수학점수가 입력되면 각 학생의 석차를 입력된 순서대로 출력하는 프로그램을
작성하세요.

▣ 입력설명
첫 줄에 N(1<=N<=100)이 입력되고, 두 번째 줄에 수학점수를 의미하는 N개의 정수가 입력된
다. 같은 점수가 입력될 경우 높은 석차로 동일 처리한다. 즉 가장 높은 점수가 92점인데 92
점이 3명 존재하면 1등이 3명이고 그 다음 학생은 4등이 된다. 점수는 100점 만점이다.

▣ 출력설명
첫 줄에 입력된 순서대로 석차를 출력한다.

*/

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int nSize = 0;
	vector<int> vnScore;
	cin >> nSize;
	vnScore.reserve(nSize);

	for (vector<int>::size_type i = 0; i < vnScore.size(); ++i)
	{
		cin >> vnScore[i];
	}

}

void CalcGrade(vector<int>& vnScore)
{
	vector<int> vnCopyScore = vnScore;
	vector<int> vnGrade(vnCopyScore.size());
	vector<int>::iterator itPointerScore = vnCopyScore.begin();
	int nMax = *itPointerScore;
	int nGrade = 1;
	int nCounter = 0;
	for (vector<int>::size_type i = 0; i < vnCopyScore.size(); ++i)
	{
		for (vector<int>::size_type j = 0; j < vnCopyScore.size(); ++j)
		{
			if (nMax > vnCopyScore[i])
				nMax == vnCopyScore[i];
		}


	}
}