#include <iostream>
#include <string>

/*���� 1152�� ���ڿ�-�ܾ��� ����*/
using namespace std;

int main(void)
{
	string Word;
	getline(cin, Word);
	
	int count = 1;

	for (int i = 0; i < Word.length(); ++i)
	{
		if (Word[i] == ' ')
		{
			count++;
		}

	}

	if (Word[0] == ' ')
	{
		count--;
	}

	if (Word[Word.length() - 1] == ' ')
	{
		count--;
	}

	cout << count << endl;
	
	return 0;
}