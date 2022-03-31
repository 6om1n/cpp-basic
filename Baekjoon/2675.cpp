#include <iostream>
#include <string>
/*백준 2675번 - 문자열반복*/
using namespace std;

int main(void)
{
	int test, R; // 몇 번을 반복할 것인가를 결정
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