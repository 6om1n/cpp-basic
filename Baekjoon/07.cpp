#include <iostream>

/*���� 10809��  ���ڿ�-���ĺ� ã�� */
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	char arr[26] = {'a'};
	int count = 0;

	for (int i = 0; i < 26; ++i)
	{
		arr[i] = 97+i;
	} // arr�� ���ĺ� a���� z���� �Է�

	for (int i = 0; i <26 ;++i)
	{
		count = 0;
		for (int k = 0; k < s.length(); ++k)
		{
			if (arr[i]==s[k]) {
				cout << k << " ";
				arr[i] = '0';
				count++;
			}
		}
		if (count == 0)
			cout << -1 << " ";
	}

}