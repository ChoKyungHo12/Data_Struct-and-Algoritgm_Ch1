#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define UNDER_BOUNDARY 3
#define UPPER_BOUNDARY 1000

//�ڿ��� N�� �ԷµǸ� 1���� N������ �� �� 
//M�� ������� ����ϴ� ���α׷��� �ۼ��ϼ���.
//ù �ٿ� �ڿ��� N�� M�� ���ʴ�� �Էµ˴ϴ�.(3<=M<N<=1000)

void InputNum(int* mInput, int* mMultiple);
void ShowMultiple(const int& mInput, const int& mMultiple);

int main(void)
{
	int mInput = 0;		//mInput=N
	int mMultiple = 0;  // Mmultiple= M
	
	InputNum(&mInput, &mMultiple);
	ShowMultiple(mInput, mMultiple);
	return 0;
}

void InputNum(int* mInput, int* mMultiple)
{
	while (TRUE)
	{
		cout << "M�� 3���� ���ų� ũ��, N�� 1000���� �۰� �Է�(ū�� ������ �Է�)" << endl;
		scanf_s("%d %d", mInput, mMultiple);

		//���� ���ǿ� �´� ���ڸ� �Է��ϴ��� Ȯ��
		if ((UNDER_BOUNDARY <= *mMultiple) && (*mMultiple < *mInput) && (*mInput <= UPPER_BOUNDARY))
		{
			cout << "���� ����!" << endl;
			break;
		}
	}
}

void ShowMultiple(const int& mInput, const int& mMultiple)
{
	int i = 0;
	int nSum = 0;
	int nsum_num = mMultiple;
	while (TRUE)
	{
		nSum += nsum_num;
		nsum_num += mMultiple;
		if (nsum_num > mInput)
			break;
	}
	cout << "������ ���� " << nSum << "�Դϴ�" << endl;
}