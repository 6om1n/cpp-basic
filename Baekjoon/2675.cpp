#include <iostream>
#include <string>
/*���� 2675�� - ���ڿ��ݺ�*/
using namespace std;

int main(void)
{
	int test, R; // �� ���� �ݺ��� ���ΰ��� ����
	cin >> test;
	string Word;
	
	for (int m = 0; m < test; ++m)
	{
		cin >> R >> Word;
		for (int i = 0; i < Word.length(); ++i)
		{
			for (int k = 0; k < R; ++k)
			{
				cout << Word[i];

			}	
		}
		cout << endl;
	}
	return 0;
}